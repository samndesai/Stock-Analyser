/****************************************************************************
** Meta object code from reading C++ file 'chartdata.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.6.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../SEn26/sourceFiles/chartdata.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'chartdata.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.6.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_Chartdata_t {
    QByteArrayData data[19];
    char stringdata0[160];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Chartdata_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Chartdata_t qt_meta_stringdata_Chartdata = {
    {
QT_MOC_LITERAL(0, 0, 9), // "Chartdata"
QT_MOC_LITERAL(1, 10, 5), // "getWH"
QT_MOC_LITERAL(2, 16, 0), // ""
QT_MOC_LITERAL(3, 17, 12), // "getStockList"
QT_MOC_LITERAL(4, 30, 5), // "setWH"
QT_MOC_LITERAL(5, 36, 5), // "width"
QT_MOC_LITERAL(6, 42, 6), // "height"
QT_MOC_LITERAL(7, 49, 15), // "addBackend_data"
QT_MOC_LITERAL(8, 65, 8), // "Backend*"
QT_MOC_LITERAL(9, 74, 4), // "temp"
QT_MOC_LITERAL(10, 79, 9), // "Database*"
QT_MOC_LITERAL(11, 89, 5), // "temp1"
QT_MOC_LITERAL(12, 95, 17), // "getstockPriceData"
QT_MOC_LITERAL(13, 113, 9), // "stockName"
QT_MOC_LITERAL(14, 123, 5), // "start"
QT_MOC_LITERAL(15, 129, 3), // "end"
QT_MOC_LITERAL(16, 133, 16), // "getEllietteCount"
QT_MOC_LITERAL(17, 150, 5), // "stock"
QT_MOC_LITERAL(18, 156, 3) // "lev"

    },
    "Chartdata\0getWH\0\0getStockList\0setWH\0"
    "width\0height\0addBackend_data\0Backend*\0"
    "temp\0Database*\0temp1\0getstockPriceData\0"
    "stockName\0start\0end\0getEllietteCount\0"
    "stock\0lev"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Chartdata[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // methods: name, argc, parameters, tag, flags
       1,    0,   44,    2, 0x02 /* Public */,
       3,    0,   45,    2, 0x02 /* Public */,
       4,    2,   46,    2, 0x02 /* Public */,
       7,    2,   51,    2, 0x02 /* Public */,
      12,    3,   56,    2, 0x02 /* Public */,
      16,    4,   63,    2, 0x02 /* Public */,

 // methods: parameters
    QMetaType::QJsonObject,
    QMetaType::QJsonObject,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    5,    6,
    QMetaType::Void, 0x80000000 | 8, 0x80000000 | 10,    9,   11,
    QMetaType::QJsonObject, QMetaType::QString, QMetaType::Int, QMetaType::Int,   13,   14,   15,
    QMetaType::QJsonObject, QMetaType::QString, QMetaType::Int, QMetaType::Int, QMetaType::Int,   17,   14,   15,   18,

       0        // eod
};

void Chartdata::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Chartdata *_t = static_cast<Chartdata *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: { QJsonObject _r = _t->getWH();
            if (_a[0]) *reinterpret_cast< QJsonObject*>(_a[0]) = _r; }  break;
        case 1: { QJsonObject _r = _t->getStockList();
            if (_a[0]) *reinterpret_cast< QJsonObject*>(_a[0]) = _r; }  break;
        case 2: _t->setWH((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 3: _t->addBackend_data((*reinterpret_cast< Backend*(*)>(_a[1])),(*reinterpret_cast< Database*(*)>(_a[2]))); break;
        case 4: { QJsonObject _r = _t->getstockPriceData((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< QJsonObject*>(_a[0]) = _r; }  break;
        case 5: { QJsonObject _r = _t->getEllietteCount((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4])));
            if (_a[0]) *reinterpret_cast< QJsonObject*>(_a[0]) = _r; }  break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 3:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Backend* >(); break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Database* >(); break;
            }
            break;
        }
    }
}

const QMetaObject Chartdata::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_Chartdata.data,
      qt_meta_data_Chartdata,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *Chartdata::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Chartdata::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_Chartdata.stringdata0))
        return static_cast<void*>(const_cast< Chartdata*>(this));
    return QObject::qt_metacast(_clname);
}

int Chartdata::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
