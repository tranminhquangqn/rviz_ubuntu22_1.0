/****************************************************************************
** Meta object code from reading C++ file 'editable_combo_box.hpp'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../src/tomo_rviz/rviz_common/include/rviz_common/properties/editable_combo_box.hpp"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'editable_combo_box.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_rviz_common__properties__EditableComboBox_t {
    QByteArrayData data[1];
    char stringdata0[42];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_rviz_common__properties__EditableComboBox_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_rviz_common__properties__EditableComboBox_t qt_meta_stringdata_rviz_common__properties__EditableComboBox = {
    {
QT_MOC_LITERAL(0, 0, 41) // "rviz_common::properties::Edit..."

    },
    "rviz_common::properties::EditableComboBox"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_rviz_common__properties__EditableComboBox[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

void rviz_common::properties::EditableComboBox::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    (void)_o;
    (void)_id;
    (void)_c;
    (void)_a;
}

QT_INIT_METAOBJECT const QMetaObject rviz_common::properties::EditableComboBox::staticMetaObject = { {
    QMetaObject::SuperData::link<ComboBox::staticMetaObject>(),
    qt_meta_stringdata_rviz_common__properties__EditableComboBox.data,
    qt_meta_data_rviz_common__properties__EditableComboBox,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *rviz_common::properties::EditableComboBox::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *rviz_common::properties::EditableComboBox::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_rviz_common__properties__EditableComboBox.stringdata0))
        return static_cast<void*>(this);
    return ComboBox::qt_metacast(_clname);
}

int rviz_common::properties::EditableComboBox::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = ComboBox::qt_metacall(_c, _id, _a);
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
