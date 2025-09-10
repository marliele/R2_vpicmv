/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../qt-simple-calculator-master/mainwindow.h"
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
    QByteArrayData data[22];
    char stringdata0[377];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MainWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MainWindow_t qt_meta_stringdata_MainWindow = {
    {
QT_MOC_LITERAL(0, 0, 10), // "MainWindow"
QT_MOC_LITERAL(1, 11, 19), // "numberGroup_clicked"
QT_MOC_LITERAL(2, 31, 0), // ""
QT_MOC_LITERAL(3, 32, 16), // "QAbstractButton*"
QT_MOC_LITERAL(4, 49, 19), // "actionGroup_clicked"
QT_MOC_LITERAL(5, 69, 15), // "saveHistoryFile"
QT_MOC_LITERAL(6, 85, 12), // "onSaveAction"
QT_MOC_LITERAL(7, 98, 13), // "onShowHistory"
QT_MOC_LITERAL(8, 112, 13), // "onHideHistory"
QT_MOC_LITERAL(9, 126, 14), // "onClearHistory"
QT_MOC_LITERAL(10, 141, 19), // "loadHistoryFromFile"
QT_MOC_LITERAL(11, 161, 7), // "onAbout"
QT_MOC_LITERAL(12, 169, 20), // "onHistoryItemClicked"
QT_MOC_LITERAL(13, 190, 16), // "QListWidgetItem*"
QT_MOC_LITERAL(14, 207, 21), // "clearStatusBarMessage"
QT_MOC_LITERAL(15, 229, 17), // "updateHistoryList"
QT_MOC_LITERAL(16, 247, 20), // "on_actionDel_clicked"
QT_MOC_LITERAL(17, 268, 21), // "on_actionCalc_clicked"
QT_MOC_LITERAL(18, 290, 16), // "on_comma_clicked"
QT_MOC_LITERAL(19, 307, 22), // "on_actionClear_clicked"
QT_MOC_LITERAL(20, 330, 24), // "on_actionPercent_clicked"
QT_MOC_LITERAL(21, 355, 21) // "on_actionSign_clicked"

    },
    "MainWindow\0numberGroup_clicked\0\0"
    "QAbstractButton*\0actionGroup_clicked\0"
    "saveHistoryFile\0onSaveAction\0onShowHistory\0"
    "onHideHistory\0onClearHistory\0"
    "loadHistoryFromFile\0onAbout\0"
    "onHistoryItemClicked\0QListWidgetItem*\0"
    "clearStatusBarMessage\0updateHistoryList\0"
    "on_actionDel_clicked\0on_actionCalc_clicked\0"
    "on_comma_clicked\0on_actionClear_clicked\0"
    "on_actionPercent_clicked\0on_actionSign_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MainWindow[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      18,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,  104,    2, 0x08 /* Private */,
       4,    1,  107,    2, 0x08 /* Private */,
       5,    0,  110,    2, 0x08 /* Private */,
       6,    0,  111,    2, 0x08 /* Private */,
       7,    0,  112,    2, 0x08 /* Private */,
       8,    0,  113,    2, 0x08 /* Private */,
       9,    0,  114,    2, 0x08 /* Private */,
      10,    0,  115,    2, 0x08 /* Private */,
      11,    0,  116,    2, 0x08 /* Private */,
      12,    1,  117,    2, 0x08 /* Private */,
      14,    0,  120,    2, 0x08 /* Private */,
      15,    0,  121,    2, 0x08 /* Private */,
      16,    0,  122,    2, 0x08 /* Private */,
      17,    0,  123,    2, 0x08 /* Private */,
      18,    0,  124,    2, 0x08 /* Private */,
      19,    0,  125,    2, 0x08 /* Private */,
      20,    0,  126,    2, 0x08 /* Private */,
      21,    0,  127,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    2,
    QMetaType::Void, 0x80000000 | 3,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 13,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MainWindow *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->numberGroup_clicked((*reinterpret_cast< QAbstractButton*(*)>(_a[1]))); break;
        case 1: _t->actionGroup_clicked((*reinterpret_cast< QAbstractButton*(*)>(_a[1]))); break;
        case 2: _t->saveHistoryFile(); break;
        case 3: _t->onSaveAction(); break;
        case 4: _t->onShowHistory(); break;
        case 5: _t->onHideHistory(); break;
        case 6: _t->onClearHistory(); break;
        case 7: _t->loadHistoryFromFile(); break;
        case 8: _t->onAbout(); break;
        case 9: _t->onHistoryItemClicked((*reinterpret_cast< QListWidgetItem*(*)>(_a[1]))); break;
        case 10: _t->clearStatusBarMessage(); break;
        case 11: _t->updateHistoryList(); break;
        case 12: _t->on_actionDel_clicked(); break;
        case 13: _t->on_actionCalc_clicked(); break;
        case 14: _t->on_comma_clicked(); break;
        case 15: _t->on_actionClear_clicked(); break;
        case 16: _t->on_actionPercent_clicked(); break;
        case 17: _t->on_actionSign_clicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QAbstractButton* >(); break;
            }
            break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QAbstractButton* >(); break;
            }
            break;
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
        if (_id < 18)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 18;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 18)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 18;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
