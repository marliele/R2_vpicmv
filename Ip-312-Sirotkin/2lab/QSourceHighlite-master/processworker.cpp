#include "processworker.h"

ProcessWorker::ProcessWorker(QObject *parent)
    : QObject(parent)
{
    process = new QProcess(this);

    connect(process, &QProcess::readyReadStandardOutput, this, [this]() {
        emit outputReady(QString::fromLocal8Bit(process->readAllStandardOutput()));
    });
    connect(process, &QProcess::readyReadStandardError, this, [this]() {
        emit errorReady(QString::fromLocal8Bit(process->readAllStandardError()));
    });
    connect(process, QOverload<int, QProcess::ExitStatus>::of(&QProcess::finished),
            this, &ProcessWorker::finished);
}

ProcessWorker::~ProcessWorker()
{
    if (process->state() == QProcess::Running)
        process->kill();
}

void ProcessWorker::run(const QString &scriptPath)
{
    // Запускаем python скрипт
    process->start("python", QStringList() << scriptPath);
    if (!process->waitForStarted(3000)) {
        emit error("Не удалось запустить процесс Python.");
    }
}

void ProcessWorker::stop()
{
    if (process->state() == QProcess::Running) {
        process->kill();
        process->waitForFinished();
    }
}
