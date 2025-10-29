#ifndef PROCESSWORKER_H
#define PROCESSWORKER_H
#include "QObject"
#include "QProcess"

class ProcessWorker : public QObject
{
    Q_OBJECT
public:
    explicit ProcessWorker(QObject *parent = nullptr);
    ~ProcessWorker();
public slots:
    void run(const QString &scriptpath);
    void stop();
signals:
    void outputReady(const QString &text);
    void errorReady(const QString &text);
    void finished(int exitCode);
    void error(const QString &errorString);
private:
    QProcess *process;
};

#endif // PROCESSWORKER_H
