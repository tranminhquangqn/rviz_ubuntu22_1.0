/****************************************************************************
** Meta object code from reading C++ file 'display_visibility_property.hpp'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../src/tomo_rviz/rviz_common/include/rviz_common/properties/display_visibility_property.hpp"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'display_visibility_property.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_rviz_common__properties__DisplayVisibilityProperty_t {
    QByteArrayData data[4];
    char stringdata0[71];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_rviz_common__properties__DisplayVisibilityProperty_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_rviz_common__properties__DisplayVisibilityProperty_t qt_meta_stringdata_rviz_common__properties__DisplayVisibilityProperty = {
    {
QT_MOC_LITERAL(0, 0, 50), // "rviz_common::properties::Disp..."
QT_MOC_LITERAL(1, 51, 8), // "setValue"
QT_MOC_LITERAL(2, 60, 0), // ""
QT_MOC_LITERAL(3, 61, 9) // "new_value"

    },
    "rviz_common::properties::DisplayVisibilityProperty\0"
    "setValue\0\0new_value"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_rviz_common__properties__DisplayVisibilityProperty[] = {

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
       1,    1,   19,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Bool, QMetaType::QVariant,    3,

       0        // eod
};

void rviz_common::properties::DisplayVisibilityProperty::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<DisplayVisibilityProperty *>(_o);
        (void)_t;
        switch (_id) {
        case 0: { bool _r = _t->setValue((*reinterpret_cast< const QVariant(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject rviz_common::properties::DisplayVisibilityProperty::staticMetaObject = { {
    QMetaObject::SuperData::link<BoolProperty::staticMetaObject>(),
    qt_meta_stringdata_rviz_common__properties__DisplayVisibilityProperty.data,
    qt_meta_data_rviz_common__properties__DisplayVisibilityProperty,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *rviz_common::properties::DisplayVisibilityProperty::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *rviz_common::properties::DisplayVisibilityProperty::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_rviz_common__properties__DisplayVisibilityProperty.stringdata0))
        return static_cast<void*>(this);
    return BoolProperty::qt_metacast(_clname);
}

int rviz_common::properties::DisplayVisibilityProperty::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = BoolProperty::qt_metacall(_c, _id, _a);
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
