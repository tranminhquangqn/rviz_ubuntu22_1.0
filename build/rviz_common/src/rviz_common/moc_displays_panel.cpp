/****************************************************************************
** Meta object code from reading C++ file 'displays_panel.hpp'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../src/tomo_rviz/rviz_common/src/rviz_common/displays_panel.hpp"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'displays_panel.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_rviz_common__DisplaysPanel_t {
    QByteArrayData data[7];
    char stringdata0[111];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_rviz_common__DisplaysPanel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_rviz_common__DisplaysPanel_t qt_meta_stringdata_rviz_common__DisplaysPanel = {
    {
QT_MOC_LITERAL(0, 0, 26), // "rviz_common::DisplaysPanel"
QT_MOC_LITERAL(1, 27, 12), // "onNewDisplay"
QT_MOC_LITERAL(2, 40, 0), // ""
QT_MOC_LITERAL(3, 41, 18), // "onDuplicateDisplay"
QT_MOC_LITERAL(4, 60, 15), // "onDeleteDisplay"
QT_MOC_LITERAL(5, 76, 15), // "onRenameDisplay"
QT_MOC_LITERAL(6, 92, 18) // "onSelectionChanged"

    },
    "rviz_common::DisplaysPanel\0onNewDisplay\0"
    "\0onDuplicateDisplay\0onDeleteDisplay\0"
    "onRenameDisplay\0onSelectionChanged"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_rviz_common__DisplaysPanel[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   39,    2, 0x09 /* Protected */,
       3,    0,   40,    2, 0x09 /* Protected */,
       4,    0,   41,    2, 0x09 /* Protected */,
       5,    0,   42,    2, 0x09 /* Protected */,
       6,    0,   43,    2, 0x09 /* Protected */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void rviz_common::DisplaysPanel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<DisplaysPanel *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->onNewDisplay(); break;
        case 1: _t->onDuplicateDisplay(); break;
        case 2: _t->onDeleteDisplay(); break;
        case 3: _t->onRenameDisplay(); break;
        case 4: _t->onSelectionChanged(); break;
        default: ;
        }
    }
    (void)_a;
}

QT_INIT_METAOBJECT const QMetaObject rviz_common::DisplaysPanel::staticMetaObject = { {
    QMetaObject::SuperData::link<Panel::staticMetaObject>(),
    qt_meta_stringdata_rviz_common__DisplaysPanel.data,
    qt_meta_data_rviz_common__DisplaysPanel,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *rviz_common::DisplaysPanel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *rviz_common::DisplaysPanel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_rviz_common__DisplaysPanel.stringdata0))
        return static_cast<void*>(this);
    return Panel::qt_metacast(_clname);
}

int rviz_common::DisplaysPanel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = Panel::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 5;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
