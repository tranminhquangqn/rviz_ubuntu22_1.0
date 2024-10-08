/****************************************************************************
** Meta object code from reading C++ file 'string_property.hpp'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../src/tomo_rviz/rviz_common/include/rviz_common/properties/string_property.hpp"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'string_property.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_rviz_common__properties__StringProperty_t {
    QByteArrayData data[7];
    char stringdata0[88];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_rviz_common__properties__StringProperty_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_rviz_common__properties__StringProperty_t qt_meta_stringdata_rviz_common__properties__StringProperty = {
    {
QT_MOC_LITERAL(0, 0, 39), // "rviz_common::properties::Stri..."
QT_MOC_LITERAL(1, 40, 12), // "setStdString"
QT_MOC_LITERAL(2, 53, 0), // ""
QT_MOC_LITERAL(3, 54, 11), // "std::string"
QT_MOC_LITERAL(4, 66, 7), // "std_str"
QT_MOC_LITERAL(5, 74, 9), // "setString"
QT_MOC_LITERAL(6, 84, 3) // "str"

    },
    "rviz_common::properties::StringProperty\0"
    "setStdString\0\0std::string\0std_str\0"
    "setString\0str"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_rviz_common__properties__StringProperty[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   24,    2, 0x0a /* Public */,
       5,    1,   27,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Bool, 0x80000000 | 3,    4,
    QMetaType::Bool, QMetaType::QString,    6,

       0        // eod
};

void rviz_common::properties::StringProperty::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<StringProperty *>(_o);
        (void)_t;
        switch (_id) {
        case 0: { bool _r = _t->setStdString((*reinterpret_cast< const std::string(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 1: { bool _r = _t->setString((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject rviz_common::properties::StringProperty::staticMetaObject = { {
    QMetaObject::SuperData::link<Property::staticMetaObject>(),
    qt_meta_stringdata_rviz_common__properties__StringProperty.data,
    qt_meta_data_rviz_common__properties__StringProperty,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *rviz_common::properties::StringProperty::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *rviz_common::properties::StringProperty::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_rviz_common__properties__StringProperty.stringdata0))
        return static_cast<void*>(this);
    return Property::qt_metacast(_clname);
}

int rviz_common::properties::StringProperty::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = Property::qt_metacall(_c, _id, _a);
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
QT_WARNING_POP
QT_END_MOC_NAMESPACE
