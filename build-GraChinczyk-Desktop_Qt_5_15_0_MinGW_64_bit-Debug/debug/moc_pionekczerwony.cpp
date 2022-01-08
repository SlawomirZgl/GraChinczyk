/****************************************************************************
** Meta object code from reading C++ file 'pionekczerwony.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../GraChinczyk/pionekczerwony.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'pionekczerwony.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_PionekCzerwony_t {
    QByteArrayData data[6];
    char stringdata0[41];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PionekCzerwony_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PionekCzerwony_t qt_meta_stringdata_PionekCzerwony = {
    {
QT_MOC_LITERAL(0, 0, 14), // "PionekCzerwony"
QT_MOC_LITERAL(1, 15, 8), // "xChanged"
QT_MOC_LITERAL(2, 24, 9), // "idChanged"
QT_MOC_LITERAL(3, 34, 1), // "y"
QT_MOC_LITERAL(4, 36, 1), // "x"
QT_MOC_LITERAL(5, 38, 2) // "id"

    },
    "PionekCzerwony\0xChanged\0idChanged\0y\0"
    "x\0id"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PionekCzerwony[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       3,   14, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // properties: name, type, flags
       3, QMetaType::Int, 0x00495103,
       4, QMetaType::Int, 0x00495103,
       5, QMetaType::Int, 0x00495103,

 // properties: notify_signal_id
    1879048193,
    1879048193,
    1879048194,

       0        // eod
};

void PionekCzerwony::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{

#ifndef QT_NO_PROPERTIES
    if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<PionekCzerwony *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< int*>(_v) = _t->y(); break;
        case 1: *reinterpret_cast< int*>(_v) = _t->x(); break;
        case 2: *reinterpret_cast< int*>(_v) = _t->id(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<PionekCzerwony *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setY(*reinterpret_cast< int*>(_v)); break;
        case 1: _t->setX(*reinterpret_cast< int*>(_v)); break;
        case 2: _t->setId(*reinterpret_cast< int*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject PionekCzerwony::staticMetaObject = { {
    QMetaObject::SuperData::link<Pionek::staticMetaObject>(),
    qt_meta_stringdata_PionekCzerwony.data,
    qt_meta_data_PionekCzerwony,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *PionekCzerwony::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PionekCzerwony::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_PionekCzerwony.stringdata0))
        return static_cast<void*>(this);
    return Pionek::qt_metacast(_clname);
}

int PionekCzerwony::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = Pionek::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    
#ifndef QT_NO_PROPERTIES
    if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 3;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}
// If you get a compile error in this function it can be because either
//     a) You are using a NOTIFY signal that does not exist. Fix it.
//     b) You are using a NOTIFY signal that does exist (in a parent class) but has a non-empty parameter list. This is a moc limitation.
Q_DECL_UNUSED static void checkNotifySignalValidity_PionekCzerwony(PionekCzerwony *t) {
    t->xChanged();
    t->idChanged();
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
