/****************************************************************************
** Meta object code from reading C++ file 'new_object_dialog.hpp'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../src/tomo_rviz/rviz_common/src/rviz_common/new_object_dialog.hpp"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'new_object_dialog.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_rviz_common__NewObjectDialog_t {
    QByteArrayData data[7];
    char stringdata0[100];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_rviz_common__NewObjectDialog_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_rviz_common__NewObjectDialog_t qt_meta_stringdata_rviz_common__NewObjectDialog = {
    {
QT_MOC_LITERAL(0, 0, 28), // "rviz_common::NewObjectDialog"
QT_MOC_LITERAL(1, 29, 6), // "accept"
QT_MOC_LITERAL(2, 36, 0), // ""
QT_MOC_LITERAL(3, 37, 17), // "onDisplaySelected"
QT_MOC_LITERAL(4, 55, 16), // "QTreeWidgetItem*"
QT_MOC_LITERAL(5, 72, 13), // "selected_item"
QT_MOC_LITERAL(6, 86, 13) // "onNameChanged"

    },
    "rviz_common::NewObjectDialog\0accept\0"
    "\0onDisplaySelected\0QTreeWidgetItem*\0"
    "selected_item\0onNameChanged"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_rviz_common__NewObjectDialog[] = {

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
       1,    0,   29,    2, 0x0a /* Public */,
       3,    1,   30,    2, 0x08 /* Private */,
       6,    0,   33,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 4,    5,
    QMetaType::Void,

       0        // eod
};

void rviz_common::NewObjectDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<NewObjectDialog *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->accept(); break;
        case 1: _t->onDisplaySelected((*reinterpret_cast< QTreeWidgetItem*(*)>(_a[1]))); break;
        case 2: _t->onNameChanged(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject rviz_common::NewObjectDialog::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_rviz_common__NewObjectDialog.data,
    qt_meta_data_rviz_common__NewObjectDialog,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *rviz_common::NewObjectDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *rviz_common::NewObjectDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_rviz_common__NewObjectDialog.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int rviz_common::NewObjectDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
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
