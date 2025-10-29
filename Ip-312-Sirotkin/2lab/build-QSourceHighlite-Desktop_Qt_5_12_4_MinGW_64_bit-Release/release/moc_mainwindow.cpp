/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../QSourceHighlite-master/mainwindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MainWindow_t {
    QByteArrayData data[26];
    char stringdata0[349];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MainWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MainWindow_t qt_meta_stringdata_MainWindow = {
    {
QT_MOC_LITERAL(0, 0, 10), // "MainWindow"
QT_MOC_LITERAL(1, 11, 11), // "startScript"
QT_MOC_LITERAL(2, 23, 0), // ""
QT_MOC_LITERAL(3, 24, 10), // "scriptPath"
QT_MOC_LITERAL(4, 35, 10), // "stopScript"
QT_MOC_LITERAL(5, 46, 10), // "onFindText"
QT_MOC_LITERAL(6, 57, 4), // "text"
QT_MOC_LITERAL(7, 62, 11), // "replaceText"
QT_MOC_LITERAL(8, 74, 4), // "find"
QT_MOC_LITERAL(9, 79, 7), // "replace"
QT_MOC_LITERAL(10, 87, 12), // "onReplaceAll"
QT_MOC_LITERAL(11, 100, 22), // "on_action_11_triggered"
QT_MOC_LITERAL(12, 123, 16), // "RunScriptClicked"
QT_MOC_LITERAL(13, 140, 17), // "KillScriptClicked"
QT_MOC_LITERAL(14, 158, 32), // "onProcessReadyReadStandardOutput"
QT_MOC_LITERAL(15, 191, 31), // "onProcessReadyReadStandardError"
QT_MOC_LITERAL(16, 223, 12), // "themeChanged"
QT_MOC_LITERAL(17, 236, 15), // "languageChanged"
QT_MOC_LITERAL(18, 252, 4), // "lang"
QT_MOC_LITERAL(19, 257, 15), // "processFinished"
QT_MOC_LITERAL(20, 273, 8), // "exitCode"
QT_MOC_LITERAL(21, 282, 20), // "QProcess::ExitStatus"
QT_MOC_LITERAL(22, 303, 10), // "exitStatus"
QT_MOC_LITERAL(23, 314, 12), // "appendOutput"
QT_MOC_LITERAL(24, 327, 9), // "showError"
QT_MOC_LITERAL(25, 337, 11) // "errorString"

    },
    "MainWindow\0startScript\0\0scriptPath\0"
    "stopScript\0onFindText\0text\0replaceText\0"
    "find\0replace\0onReplaceAll\0"
    "on_action_11_triggered\0RunScriptClicked\0"
    "KillScriptClicked\0onProcessReadyReadStandardOutput\0"
    "onProcessReadyReadStandardError\0"
    "themeChanged\0languageChanged\0lang\0"
    "processFinished\0exitCode\0QProcess::ExitStatus\0"
    "exitStatus\0appendOutput\0showError\0"
    "errorString"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MainWindow[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      15,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   89,    2, 0x06 /* Public */,
       4,    0,   92,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    1,   93,    2, 0x08 /* Private */,
       7,    2,   96,    2, 0x08 /* Private */,
      10,    2,  101,    2, 0x08 /* Private */,
      11,    0,  106,    2, 0x08 /* Private */,
      12,    0,  107,    2, 0x08 /* Private */,
      13,    0,  108,    2, 0x08 /* Private */,
      14,    0,  109,    2, 0x08 /* Private */,
      15,    0,  110,    2, 0x08 /* Private */,
      16,    1,  111,    2, 0x08 /* Private */,
      17,    1,  114,    2, 0x08 /* Private */,
      19,    2,  117,    2, 0x08 /* Private */,
      23,    1,  122,    2, 0x08 /* Private */,
      24,    1,  125,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    6,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,    8,    9,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,    8,    9,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::QString,   18,
    QMetaType::Void, QMetaType::Int, 0x80000000 | 21,   20,   22,
    QMetaType::Void, QMetaType::QString,    6,
    QMetaType::Void, QMetaType::QString,   25,

       0        // eod
};

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MainWindow *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->startScript((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->stopScript(); break;
        case 2: _t->onFindText((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 3: _t->replaceText((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 4: _t->onReplaceAll((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 5: _t->on_action_11_triggered(); break;
        case 6: _t->RunScriptClicked(); break;
        case 7: _t->KillScriptClicked(); break;
        case 8: _t->onProcessReadyReadStandardOutput(); break;
        case 9: _t->onProcessReadyReadStandardError(); break;
        case 10: _t->themeChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 11: _t->languageChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 12: _t->processFinished((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< QProcess::ExitStatus(*)>(_a[2]))); break;
        case 13: _t->appendOutput((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 14: _t->showError((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (MainWindow::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MainWindow::startScript)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (MainWindow::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MainWindow::stopScript)) {
                *result = 1;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject MainWindow::staticMetaObject = { {
    &QMainWindow::staticMetaObject,
    qt_meta_stringdata_MainWindow.data,
    qt_meta_data_MainWindow,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MainWindow.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 15)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 15;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 15)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 15;
    }
    return _id;
}

// SIGNAL 0
void MainWindow::startScript(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void MainWindow::stopScript()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
