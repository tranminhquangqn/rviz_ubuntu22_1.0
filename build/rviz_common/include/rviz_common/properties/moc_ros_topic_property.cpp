/****************************************************************************
** Meta object code from reading C++ file 'ros_topic_property.hpp'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../src/tomo_rviz/rviz_common/include/rviz_common/properties/ros_topic_property.hpp"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ros_topic_property.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_rviz_common__properties__RosTopicProperty_t {
    QByteArrayData data[3];
    char stringdata0[57];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_rviz_common__properties__RosTopicProperty_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_rviz_common__properties__RosTopicProperty_t qt_meta_stringdata_rviz_common__properties__RosTopicProperty = {
    {
QT_MOC_LITERAL(0, 0, 41), // "rviz_common::properties::RosT..."
QT_MOC_LITERAL(1, 42, 13), // "fillTopicList"
QT_MOC_LITERAL(2, 56, 0) // ""

    },
    "rviz_common::properties::RosTopicProperty\0"
    "fillTopicList\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_rviz_common__properties__RosTopicProperty[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   19,    2, 0x09 /* Protected */,

 // slots: parameters
    QMetaType::Void,

       0        // eod
};

void rviz_common::properties::RosTopicProperty::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<RosTopicProperty *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->fillTopicList(); break;
        default: ;
        }
    }
    (void)_a;
}

QT_INIT_METAOBJECT const QMetaObject rviz_common::properties::RosTopicProperty::staticMetaObject = { {
    QMetaObject::SuperData::link<EditableEnumProperty::staticMetaObject>(),
    qt_meta_stringdata_rviz_common__properties__RosTopicProperty.data,
    qt_meta_data_rviz_common__properties__RosTopicProperty,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *rviz_common::properties::RosTopicProperty::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *rviz_common::properties::RosTopicProperty::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_rviz_common__properties__RosTopicProperty.stringdata0))
        return static_cast<void*>(this);
    return EditableEnumProperty::qt_metacast(_clname);
}

int rviz_common::properties::RosTopicProperty::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = EditableEnumProperty::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 1;
    }
    return _id;
}
struct qt_meta_stringdata_rviz_common__properties__RosFilteredTopicProperty_t {
    QByteArrayData data[3];
    char stringdata0[65];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_rviz_common__properties__RosFilteredTopicProperty_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_rviz_common__properties__RosFilteredTopicProperty_t qt_meta_stringdata_rviz_common__properties__RosFilteredTopicProperty = {
    {
QT_MOC_LITERAL(0, 0, 49), // "rviz_common::properties::RosF..."
QT_MOC_LITERAL(1, 50, 13), // "fillTopicList"
QT_MOC_LITERAL(2, 64, 0) // ""

    },
    "rviz_common::properties::RosFilteredTopicProperty\0"
    "fillTopicList\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_rviz_common__properties__RosFilteredTopicProperty[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   19,    2, 0x09 /* Protected */,

 // slots: parameters
    QMetaType::Void,

       0        // eod
};

void rviz_common::properties::RosFilteredTopicProperty::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<RosFilteredTopicProperty *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->fillTopicList(); break;
        default: ;
        }
    }
    (void)_a;
}

QT_INIT_METAOBJECT const QMetaObject rviz_common::properties::RosFilteredTopicProperty::staticMetaObject = { {
    QMetaObject::SuperData::link<rviz_common::properties::RosTopicProperty::staticMetaObject>(),
    qt_meta_stringdata_rviz_common__properties__RosFilteredTopicProperty.data,
    qt_meta_data_rviz_common__properties__RosFilteredTopicProperty,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *rviz_common::properties::RosFilteredTopicProperty::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *rviz_common::properties::RosFilteredTopicProperty::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_rviz_common__properties__RosFilteredTopicProperty.stringdata0))
        return static_cast<void*>(this);
    return rviz_common::properties::RosTopicProperty::qt_metacast(_clname);
}

int rviz_common::properties::RosFilteredTopicProperty::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = rviz_common::properties::RosTopicProperty::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 1;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
