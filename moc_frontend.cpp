/****************************************************************************
** Meta object code from reading C++ file 'frontend.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.6.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../SEn26/sourceFiles/frontend.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'frontend.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.6.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_Frontend_t {
    QByteArrayData data[7];
    char stringdata0[58];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Frontend_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Frontend_t qt_meta_stringdata_Frontend = {
    {
QT_MOC_LITERAL(0, 0, 8), // "Frontend"
QT_MOC_LITERAL(1, 9, 7), // "sendOTP"
QT_MOC_LITERAL(2, 17, 0), // ""
QT_MOC_LITERAL(3, 18, 5), // "email"
QT_MOC_LITERAL(4, 24, 3), // "otp"
QT_MOC_LITERAL(5, 28, 11), // "generateOtp"
QT_MOC_LITERAL(6, 40, 17) // "SaveConfiguration"

    },
    "Frontend\0sendOTP\0\0email\0otp\0generateOtp\0"
    "SaveConfiguration"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Frontend[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    2,   29,    2, 0x0a /* Public */,
       5,    0,   34,    2, 0x0a /* Public */,
       6,    0,   35,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void, QMetaType::QString, QMetaType::QString,    3,    4,
    QMetaType::QString,
    QMetaType::Int,

       0        // eod
};

void Frontend::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Frontend *_t = static_cast<Frontend *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->sendOTP((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 1: { QString _r = _t->generateOtp();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 2: { int _r = _t->SaveConfiguration();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        default: ;
        }
    }
}

const QMetaObject Frontend::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_Frontend.data,
      qt_meta_data_Frontend,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *Frontend::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Frontend::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_Frontend.stringdata0))
        return static_cast<void*>(const_cast< Frontend*>(this));
    return QObject::qt_metacast(_clname);
}

int Frontend::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
QT_END_MOC_NAMESPACE