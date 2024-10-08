/****************************************************************************
** Meta object code from reading C++ file 'float_property.hpp'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../src/tomo_rviz/rviz_common/include/rviz_common/properties/float_property.hpp"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'float_property.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_rviz_common__properties__FloatProperty_t {
    QByteArrayData data[8];
    char stringdata0[85];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_rviz_common__properties__FloatProperty_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_rviz_common__properties__FloatProperty_t qt_meta_stringdata_rviz_common__properties__FloatProperty = {
    {
QT_MOC_LITERAL(0, 0, 38), // "rviz_common::properties::Floa..."
QT_MOC_LITERAL(1, 39, 8), // "setFloat"
QT_MOC_LITERAL(2, 48, 0), // ""
QT_MOC_LITERAL(3, 49, 9), // "new_value"
QT_MOC_LITERAL(4, 59, 3), // "add"
QT_MOC_LITERAL(5, 63, 5), // "delta"
QT_MOC_LITERAL(6, 69, 8), // "multiply"
QT_MOC_LITERAL(7, 78, 6) // "factor"

    },
    "rviz_common::properties::FloatProperty\0"
    "setFloat\0\0new_value\0add\0delta\0multiply\0"
    "factor"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_rviz_common__properties__FloatProperty[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   29,    2, 0x0a /* Public */,
       4,    1,   32,    2, 0x0a /* Public */,
       6,    1,   35,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Bool, QMetaType::Float,    3,
    QMetaType::Bool, QMetaType::Float,    5,
    QMetaType::Bool, QMetaType::Float,    7,

       0        // eod
};

void rviz_common::properties::FloatProperty::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<FloatProperty *>(_o);
        (void)_t;
        switch (_id) {
        case 0: { bool _r = _t->setFloat((*reinterpret_cast< float(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 1: { bool _r = _t->add((*reinterpret_cast< float(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 2: { bool _r = _t->multiply((*reinterpret_cast< float(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject rviz_common::properties::FloatProperty::staticMetaObject = { {
    QMetaObject::SuperData::link<Property::staticMetaObject>(),
    qt_meta_stringdata_rviz_common__properties__FloatProperty.data,
    qt_meta_data_rviz_common__properties__FloatProperty,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *rviz_common::properties::FloatProperty::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *rviz_common::properties::FloatProperty::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_rviz_common__properties__FloatProperty.stringdata0))
        return static_cast<void*>(this);
    return Property::qt_metacast(_clname);
}

int rviz_common::properties::FloatProperty::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = Property::qt_metacall(_c, _id, _a);
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
QT_WARNING_POP
QT_END_MOC_NAMESPACE
