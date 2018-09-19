/****************************************************************************
** Meta object code from reading C++ file 'all_popups_model.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.6.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../SEn26/sourceFiles/all_popups_model.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'all_popups_model.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.6.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_All_Popups_Model_t {
    QByteArrayData data[10];
    char stringdata0[118];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_All_Popups_Model_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_All_Popups_Model_t qt_meta_stringdata_All_Popups_Model = {
    {
QT_MOC_LITERAL(0, 0, 16), // "All_Popups_Model"
QT_MOC_LITERAL(1, 17, 12), // "stockChanged"
QT_MOC_LITERAL(2, 30, 0), // ""
QT_MOC_LITERAL(3, 31, 16), // "indicatorChanged"
QT_MOC_LITERAL(4, 48, 16), // "conditionChanged"
QT_MOC_LITERAL(5, 65, 16), // "thresholdChanged"
QT_MOC_LITERAL(6, 82, 5), // "stock"
QT_MOC_LITERAL(7, 88, 9), // "indicator"
QT_MOC_LITERAL(8, 98, 9), // "condition"
QT_MOC_LITERAL(9, 108, 9) // "threshold"

    },
    "All_Popups_Model\0stockChanged\0\0"
    "indicatorChanged\0conditionChanged\0"
    "thresholdChanged\0stock\0indicator\0"
    "condition\0threshold"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_All_Popups_Model[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       4,   38, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   34,    2, 0x06 /* Public */,
       3,    0,   35,    2, 0x06 /* Public */,
       4,    0,   36,    2, 0x06 /* Public */,
       5,    0,   37,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // properties: name, type, flags
       6, QMetaType::QString, 0x00495103,
       7, QMetaType::QString, 0x00495103,
       8, QMetaType::QString, 0x00495103,
       9, QMetaType::QString, 0x00495103,

 // properties: notify_signal_id
       0,
       1,
       2,
       3,

       0        // eod
};

void All_Popups_Model::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        All_Popups_Model *_t = static_cast<All_Popups_Model *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->stockChanged(); break;
        case 1: _t->indicatorChanged(); break;
        case 2: _t->conditionChanged(); break;
        case 3: _t->thresholdChanged(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (All_Popups_Model::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&All_Popups_Model::stockChanged)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (All_Popups_Model::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&All_Popups_Model::indicatorChanged)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (All_Popups_Model::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&All_Popups_Model::conditionChanged)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (All_Popups_Model::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&All_Popups_Model::thresholdChanged)) {
                *result = 3;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        All_Popups_Model *_t = static_cast<All_Popups_Model *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->stock(); break;
        case 1: *reinterpret_cast< QString*>(_v) = _t->indicator(); break;
        case 2: *reinterpret_cast< QString*>(_v) = _t->condition(); break;
        case 3: *reinterpret_cast< QString*>(_v) = _t->threshold(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        All_Popups_Model *_t = static_cast<All_Popups_Model *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setStock(*reinterpret_cast< QString*>(_v)); break;
        case 1: _t->setIndicator(*reinterpret_cast< QString*>(_v)); break;
        case 2: _t->setCondition(*reinterpret_cast< QString*>(_v)); break;
        case 3: _t->setThreshold(*reinterpret_cast< QString*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
    Q_UNUSED(_a);
}

const QMetaObject All_Popups_Model::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_All_Popups_Model.data,
      qt_meta_data_All_Popups_Model,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *All_Popups_Model::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *All_Popups_Model::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_All_Popups_Model.stringdata0))
        return static_cast<void*>(const_cast< All_Popups_Model*>(this));
    return QObject::qt_metacast(_clname);
}

int All_Popups_Model::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 4;
    }
#ifndef QT_NO_PROPERTIES
   else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 4;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void All_Popups_Model::stockChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}

// SIGNAL 1
void All_Popups_Model::indicatorChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, Q_NULLPTR);
}

// SIGNAL 2
void All_Popups_Model::conditionChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, Q_NULLPTR);
}

// SIGNAL 3
void All_Popups_Model::thresholdChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, Q_NULLPTR);
}
QT_END_MOC_NAMESPACE
