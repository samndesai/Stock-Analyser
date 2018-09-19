/****************************************************************************
** Meta object code from reading C++ file 'helper.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.6.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../SEn26/sourceFiles/helper.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'helper.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.6.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_Helper_t {
    QByteArrayData data[23];
    char stringdata0[219];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Helper_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Helper_t qt_meta_stringdata_Helper = {
    {
QT_MOC_LITERAL(0, 0, 6), // "Helper"
QT_MOC_LITERAL(1, 7, 12), // "compute_hash"
QT_MOC_LITERAL(2, 20, 0), // ""
QT_MOC_LITERAL(3, 21, 11), // "std::string"
QT_MOC_LITERAL(4, 33, 1), // "p"
QT_MOC_LITERAL(5, 35, 20), // "verify_user_password"
QT_MOC_LITERAL(6, 56, 1), // "u"
QT_MOC_LITERAL(7, 58, 18), // "check_valid_detail"
QT_MOC_LITERAL(8, 77, 1), // "f"
QT_MOC_LITERAL(9, 79, 1), // "l"
QT_MOC_LITERAL(10, 81, 1), // "e"
QT_MOC_LITERAL(11, 83, 2), // "vp"
QT_MOC_LITERAL(12, 86, 19), // "isValidEmailAddress"
QT_MOC_LITERAL(13, 106, 8), // "isNumber"
QT_MOC_LITERAL(14, 115, 9), // "Character"
QT_MOC_LITERAL(15, 125, 11), // "isCharacter"
QT_MOC_LITERAL(16, 137, 14), // "get_user_email"
QT_MOC_LITERAL(17, 152, 15), // "change_password"
QT_MOC_LITERAL(18, 168, 17), // "get_user_lastname"
QT_MOC_LITERAL(19, 186, 14), // "change_details"
QT_MOC_LITERAL(20, 201, 8), // "old_user"
QT_MOC_LITERAL(21, 210, 2), // "nu"
QT_MOC_LITERAL(22, 213, 5) // "email"

    },
    "Helper\0compute_hash\0\0std::string\0p\0"
    "verify_user_password\0u\0check_valid_detail\0"
    "f\0l\0e\0vp\0isValidEmailAddress\0isNumber\0"
    "Character\0isCharacter\0get_user_email\0"
    "change_password\0get_user_lastname\0"
    "change_details\0old_user\0nu\0email"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Helper[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   64,    2, 0x0a /* Public */,
       5,    2,   67,    2, 0x0a /* Public */,
       7,    5,   72,    2, 0x0a /* Public */,
      12,    1,   83,    2, 0x0a /* Public */,
      13,    1,   86,    2, 0x0a /* Public */,
      15,    1,   89,    2, 0x0a /* Public */,
      16,    1,   92,    2, 0x0a /* Public */,
      17,    2,   95,    2, 0x0a /* Public */,
      18,    1,  100,    2, 0x0a /* Public */,
      19,    4,  103,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::QString, 0x80000000 | 3,    4,
    QMetaType::Bool, QMetaType::QString, QMetaType::QString,    6,    4,
    QMetaType::Int, QMetaType::QString, QMetaType::QString, QMetaType::QString, QMetaType::QString, QMetaType::QString,    8,    9,   10,    4,   11,
    QMetaType::Bool, 0x80000000 | 3,    2,
    QMetaType::Bool, QMetaType::Char,   14,
    QMetaType::Bool, QMetaType::Char,   14,
    QMetaType::QString, QMetaType::QString,    6,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,    6,    4,
    QMetaType::QString, QMetaType::QString,    6,
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::QString, QMetaType::QString,   20,   21,    9,   22,

       0        // eod
};

void Helper::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Helper *_t = static_cast<Helper *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: { QString _r = _t->compute_hash((*reinterpret_cast< std::string(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 1: { bool _r = _t->verify_user_password((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 2: { int _r = _t->check_valid_detail((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< QString(*)>(_a[3])),(*reinterpret_cast< QString(*)>(_a[4])),(*reinterpret_cast< QString(*)>(_a[5])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 3: { bool _r = _t->isValidEmailAddress((*reinterpret_cast< std::string(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 4: { bool _r = _t->isNumber((*reinterpret_cast< const char(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 5: { bool _r = _t->isCharacter((*reinterpret_cast< const char(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 6: { QString _r = _t->get_user_email((*reinterpret_cast< QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 7: _t->change_password((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 8: { QString _r = _t->get_user_lastname((*reinterpret_cast< QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 9: _t->change_details((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< QString(*)>(_a[3])),(*reinterpret_cast< QString(*)>(_a[4]))); break;
        default: ;
        }
    }
}

const QMetaObject Helper::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_Helper.data,
      qt_meta_data_Helper,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *Helper::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Helper::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_Helper.stringdata0))
        return static_cast<void*>(const_cast< Helper*>(this));
    return QObject::qt_metacast(_clname);
}

int Helper::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 10)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 10;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
