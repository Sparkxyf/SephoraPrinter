/****************************************************************************
** Meta object code from reading C++ file 'ProcessPrint.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../ProcessPrint.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ProcessPrint.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_PrintWork_t {
    QByteArrayData data[5];
    char stringdata0[54];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PrintWork_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PrintWork_t qt_meta_stringdata_PrintWork = {
    {
QT_MOC_LITERAL(0, 0, 9), // "PrintWork"
QT_MOC_LITERAL(1, 10, 16), // "printJobFinished"
QT_MOC_LITERAL(2, 27, 0), // ""
QT_MOC_LITERAL(3, 28, 8), // "nextPage"
QT_MOC_LITERAL(4, 37, 16) // "printBordingPass"

    },
    "PrintWork\0printJobFinished\0\0nextPage\0"
    "printBordingPass"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PrintWork[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   29,    2, 0x06 /* Public */,
       3,    0,   30,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    1,   31,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::QImage,    2,

       0        // eod
};

void PrintWork::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        PrintWork *_t = static_cast<PrintWork *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->printJobFinished(); break;
        case 1: _t->nextPage(); break;
        case 2: _t->printBordingPass((*reinterpret_cast< QImage(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (PrintWork::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PrintWork::printJobFinished)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (PrintWork::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PrintWork::nextPage)) {
                *result = 1;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject PrintWork::staticMetaObject = { {
    &QObject::staticMetaObject,
    qt_meta_stringdata_PrintWork.data,
    qt_meta_data_PrintWork,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *PrintWork::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PrintWork::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_PrintWork.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int PrintWork::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 3;
    }
    return _id;
}

// SIGNAL 0
void PrintWork::printJobFinished()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void PrintWork::nextPage()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}
struct qt_meta_stringdata_ProcessPrint_t {
    QByteArrayData data[4];
    char stringdata0[37];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ProcessPrint_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ProcessPrint_t qt_meta_stringdata_ProcessPrint = {
    {
QT_MOC_LITERAL(0, 0, 12), // "ProcessPrint"
QT_MOC_LITERAL(1, 13, 10), // "startPrint"
QT_MOC_LITERAL(2, 24, 0), // ""
QT_MOC_LITERAL(3, 25, 11) // "receivePass"

    },
    "ProcessPrint\0startPrint\0\0receivePass"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ProcessPrint[] = {

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
       1,    1,   24,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    1,   27,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QImage,    2,

 // slots: parameters
    QMetaType::Void, QMetaType::QImage,    2,

       0        // eod
};

void ProcessPrint::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ProcessPrint *_t = static_cast<ProcessPrint *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->startPrint((*reinterpret_cast< QImage(*)>(_a[1]))); break;
        case 1: _t->receivePass((*reinterpret_cast< QImage(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (ProcessPrint::*)(QImage );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ProcessPrint::startPrint)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject ProcessPrint::staticMetaObject = { {
    &MDialog::staticMetaObject,
    qt_meta_stringdata_ProcessPrint.data,
    qt_meta_data_ProcessPrint,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *ProcessPrint::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ProcessPrint::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ProcessPrint.stringdata0))
        return static_cast<void*>(this);
    return MDialog::qt_metacast(_clname);
}

int ProcessPrint::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void ProcessPrint::startPrint(QImage _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
