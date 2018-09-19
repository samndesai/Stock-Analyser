/****************************************************************************
** Meta object code from reading C++ file 'database.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.6.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../SEn26/sourceFiles/database.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'database.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.6.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_Database_t {
    QByteArrayData data[27];
    char stringdata0[243];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Database_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Database_t qt_meta_stringdata_Database = {
    {
QT_MOC_LITERAL(0, 0, 8), // "Database"
QT_MOC_LITERAL(1, 9, 3), // "run"
QT_MOC_LITERAL(2, 13, 0), // ""
QT_MOC_LITERAL(3, 14, 7), // "getTick"
QT_MOC_LITERAL(4, 22, 5), // "index"
QT_MOC_LITERAL(5, 28, 4), // "name"
QT_MOC_LITERAL(6, 33, 15), // "getTickInterval"
QT_MOC_LITERAL(7, 49, 5), // "start"
QT_MOC_LITERAL(8, 55, 3), // "end"
QT_MOC_LITERAL(9, 59, 7), // "setUser"
QT_MOC_LITERAL(10, 67, 4), // "user"
QT_MOC_LITERAL(11, 72, 24), // "getTickIntervalIndicator"
QT_MOC_LITERAL(12, 97, 3), // "rsi"
QT_MOC_LITERAL(13, 101, 3), // "cci"
QT_MOC_LITERAL(14, 105, 2), // "ma"
QT_MOC_LITERAL(15, 108, 2), // "so"
QT_MOC_LITERAL(16, 111, 16), // "getTickIndicator"
QT_MOC_LITERAL(17, 128, 11), // "removePopup"
QT_MOC_LITERAL(18, 140, 9), // "indicator"
QT_MOC_LITERAL(19, 150, 9), // "condition"
QT_MOC_LITERAL(20, 160, 9), // "threshold"
QT_MOC_LITERAL(21, 170, 8), // "addPopup"
QT_MOC_LITERAL(22, 179, 21), // "getallpopupscondition"
QT_MOC_LITERAL(23, 201, 9), // "stockname"
QT_MOC_LITERAL(24, 211, 12), // "addIndicator"
QT_MOC_LITERAL(25, 224, 4), // "date"
QT_MOC_LITERAL(26, 229, 13) // "database_test"

    },
    "Database\0run\0\0getTick\0index\0name\0"
    "getTickInterval\0start\0end\0setUser\0"
    "user\0getTickIntervalIndicator\0rsi\0cci\0"
    "ma\0so\0getTickIndicator\0removePopup\0"
    "indicator\0condition\0threshold\0addPopup\0"
    "getallpopupscondition\0stockname\0"
    "addIndicator\0date\0database_test"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Database[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   69,    2, 0x0a /* Public */,
       3,    2,   70,    2, 0x0a /* Public */,
       6,    3,   75,    2, 0x0a /* Public */,
       9,    1,   82,    2, 0x0a /* Public */,
      11,    7,   85,    2, 0x0a /* Public */,
      16,    6,  100,    2, 0x0a /* Public */,
      17,    4,  113,    2, 0x0a /* Public */,
      21,    4,  122,    2, 0x0a /* Public */,
      22,    2,  131,    2, 0x0a /* Public */,
      24,    7,  136,    2, 0x0a /* Public */,
      26,    0,  151,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::QString, QMetaType::Int, QMetaType::QString,    4,    5,
    QMetaType::QStringList, QMetaType::Int, QMetaType::Int, QMetaType::QString,    7,    8,    5,
    QMetaType::Void, QMetaType::QString,   10,
    QMetaType::QStringList, QMetaType::Int, QMetaType::Int, QMetaType::QString, QMetaType::QString, QMetaType::QString, QMetaType::QString, QMetaType::QString,    7,    8,    5,   12,   13,   14,   15,
    QMetaType::QString, QMetaType::Int, QMetaType::QString, QMetaType::QString, QMetaType::QString, QMetaType::QString, QMetaType::QString,    4,    5,   12,   13,   14,   15,
    QMetaType::Int, QMetaType::QString, QMetaType::QString, QMetaType::QString, QMetaType::QString,    5,   18,   19,   20,
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::QString, QMetaType::QString,    5,   18,   19,   20,
    QMetaType::QStringList, QMetaType::QString, QMetaType::QString,   23,   18,
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::QString, QMetaType::QString, QMetaType::QString, QMetaType::QString, QMetaType::QString,    4,   25,    5,   12,   13,   14,   15,
    QMetaType::Void,

       0        // eod
};

void Database::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Database *_t = static_cast<Database *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->run(); break;
        case 1: { QString _r = _t->getTick((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 2: { QStringList _r = _t->getTickInterval((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< QString(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< QStringList*>(_a[0]) = _r; }  break;
        case 3: _t->setUser((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 4: { QStringList _r = _t->getTickIntervalIndicator((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< QString(*)>(_a[3])),(*reinterpret_cast< QString(*)>(_a[4])),(*reinterpret_cast< QString(*)>(_a[5])),(*reinterpret_cast< QString(*)>(_a[6])),(*reinterpret_cast< QString(*)>(_a[7])));
            if (_a[0]) *reinterpret_cast< QStringList*>(_a[0]) = _r; }  break;
        case 5: { QString _r = _t->getTickIndicator((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< QString(*)>(_a[3])),(*reinterpret_cast< QString(*)>(_a[4])),(*reinterpret_cast< QString(*)>(_a[5])),(*reinterpret_cast< QString(*)>(_a[6])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 6: { int _r = _t->removePopup((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< QString(*)>(_a[3])),(*reinterpret_cast< QString(*)>(_a[4])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 7: _t->addPopup((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< QString(*)>(_a[3])),(*reinterpret_cast< QString(*)>(_a[4]))); break;
        case 8: { QStringList _r = _t->getallpopupscondition((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QStringList*>(_a[0]) = _r; }  break;
        case 9: _t->addIndicator((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< QString(*)>(_a[3])),(*reinterpret_cast< QString(*)>(_a[4])),(*reinterpret_cast< QString(*)>(_a[5])),(*reinterpret_cast< QString(*)>(_a[6])),(*reinterpret_cast< QString(*)>(_a[7]))); break;
        case 10: _t->database_test(); break;
        default: ;
        }
    }
}

const QMetaObject Database::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_Database.data,
      qt_meta_data_Database,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *Database::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Database::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_Database.stringdata0))
        return static_cast<void*>(const_cast< Database*>(this));
    return QObject::qt_metacast(_clname);
}

int Database::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 11)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 11;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
