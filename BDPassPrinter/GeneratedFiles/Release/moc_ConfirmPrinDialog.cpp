/****************************************************************************
** Meta object code from reading C++ file 'ConfirmPrinDialog.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../ConfirmPrinDialog.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ConfirmPrinDialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_ConfirmPrinDialog_t {
    QByteArrayData data[4];
    char stringdata0[43];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ConfirmPrinDialog_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ConfirmPrinDialog_t qt_meta_stringdata_ConfirmPrinDialog = {
    {
QT_MOC_LITERAL(0, 0, 17), // "ConfirmPrinDialog"
QT_MOC_LITERAL(1, 18, 12), // "generatePass"
QT_MOC_LITERAL(2, 31, 0), // ""
QT_MOC_LITERAL(3, 32, 10) // "setPreview"

    },
    "ConfirmPrinDialog\0generatePass\0\0"
    "setPreview"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ConfirmPrinDialog[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   24,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    1,   25,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::QImage,    2,

       0        // eod
};

void ConfirmPrinDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ConfirmPrinDialog *_t = static_cast<ConfirmPrinDialog *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->generatePass(); break;
        case 1: _t->setPreview((*reinterpret_cast< QImage(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (ConfirmPrinDialog::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ConfirmPrinDialog::generatePass)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject ConfirmPrinDialog::staticMetaObject = { {
    &MDialog::staticMetaObject,
    qt_meta_stringdata_ConfirmPrinDialog.data,
    qt_meta_data_ConfirmPrinDialog,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *ConfirmPrinDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ConfirmPrinDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ConfirmPrinDialog.stringdata0))
        return static_cast<void*>(this);
    return MDialog::qt_metacast(_clname);
}

int ConfirmPrinDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = MDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 2;
    }
    return _id;
}

// SIGNAL 0
void ConfirmPrinDialog::generatePass()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
