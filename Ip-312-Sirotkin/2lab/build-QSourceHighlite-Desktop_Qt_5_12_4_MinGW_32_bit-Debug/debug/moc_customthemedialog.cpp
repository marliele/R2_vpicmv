/****************************************************************************
** Meta object code from reading C++ file 'customthemedialog.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../QSourceHighlite-master/customthemedialog.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'customthemedialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_CustomThemeDialog_t {
    QByteArrayData data[9];
    char stringdata0[171];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_CustomThemeDialog_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_CustomThemeDialog_t qt_meta_stringdata_CustomThemeDialog = {
    {
QT_MOC_LITERAL(0, 0, 17), // "CustomThemeDialog"
QT_MOC_LITERAL(1, 18, 28), // "on_chooseColorButton_clicked"
QT_MOC_LITERAL(2, 47, 0), // ""
QT_MOC_LITERAL(3, 48, 36), // "on_tokenComboBox_currentIndex..."
QT_MOC_LITERAL(4, 85, 5), // "index"
QT_MOC_LITERAL(5, 91, 28), // "on_themeNameEdit_textChanged"
QT_MOC_LITERAL(6, 120, 4), // "text"
QT_MOC_LITERAL(7, 125, 26), // "on_saveThemeButton_clicked"
QT_MOC_LITERAL(8, 152, 18) // "updateColorPreview"

    },
    "CustomThemeDialog\0on_chooseColorButton_clicked\0"
    "\0on_tokenComboBox_currentIndexChanged\0"
    "index\0on_themeNameEdit_textChanged\0"
    "text\0on_saveThemeButton_clicked\0"
    "updateColorPreview"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_CustomThemeDialog[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   39,    2, 0x08 /* Private */,
       3,    1,   40,    2, 0x08 /* Private */,
       5,    1,   43,    2, 0x08 /* Private */,
       7,    0,   46,    2, 0x08 /* Private */,
       8,    0,   47,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    4,
    QMetaType::Void, QMetaType::QString,    6,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void CustomThemeDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<CustomThemeDialog *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_chooseColorButton_clicked(); break;
        case 1: _t->on_tokenComboBox_currentIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->on_themeNameEdit_textChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 3: _t->on_saveThemeButton_clicked(); break;
        case 4: _t->updateColorPreview(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject CustomThemeDialog::staticMetaObject = { {
    &QDialog::staticMetaObject,
    qt_meta_stringdata_CustomThemeDialog.data,
    qt_meta_data_CustomThemeDialog,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *CustomThemeDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *CustomThemeDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CustomThemeDialog.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int CustomThemeDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 5;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
