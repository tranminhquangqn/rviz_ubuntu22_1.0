/****************************************************************************
** Meta object code from reading C++ file 'views_panel.hpp'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../src/tomo_rviz/rviz_common/src/rviz_common/views_panel.hpp"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'views_panel.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_rviz_common__ViewsPanel_t {
    QByteArrayData data[11];
    char stringdata0[166];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_rviz_common__ViewsPanel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_rviz_common__ViewsPanel_t qt_meta_stringdata_rviz_common__ViewsPanel = {
    {
QT_MOC_LITERAL(0, 0, 23), // "rviz_common::ViewsPanel"
QT_MOC_LITERAL(1, 24, 21), // "onTypeSelectorChanged"
QT_MOC_LITERAL(2, 46, 0), // ""
QT_MOC_LITERAL(3, 47, 14), // "selected_index"
QT_MOC_LITERAL(4, 62, 15), // "onDeleteClicked"
QT_MOC_LITERAL(5, 78, 14), // "renameSelected"
QT_MOC_LITERAL(6, 93, 13), // "onZeroClicked"
QT_MOC_LITERAL(7, 107, 16), // "onCurrentChanged"
QT_MOC_LITERAL(8, 124, 23), // "setCurrentViewFromIndex"
QT_MOC_LITERAL(9, 148, 11), // "QModelIndex"
QT_MOC_LITERAL(10, 160, 5) // "index"

    },
    "rviz_common::ViewsPanel\0onTypeSelectorChanged\0"
    "\0selected_index\0onDeleteClicked\0"
    "renameSelected\0onZeroClicked\0"
    "onCurrentChanged\0setCurrentViewFromIndex\0"
    "QModelIndex\0index"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_rviz_common__ViewsPanel[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   44,    2, 0x08 /* Private */,
       4,    0,   47,    2, 0x08 /* Private */,
       5,    0,   48,    2, 0x08 /* Private */,
       6,    0,   49,    2, 0x08 /* Private */,
       7,    0,   50,    2, 0x08 /* Private */,
       8,    1,   51,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 9,   10,

       0        // eod
};

void rviz_common::ViewsPanel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ViewsPanel *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->onTypeSelectorChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->onDeleteClicked(); break;
        case 2: _t->renameSelected(); break;
        case 3: _t->onZeroClicked(); break;
        case 4: _t->onCurrentChanged(); break;
        case 5: _t->setCurrentViewFromIndex((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject rviz_common::ViewsPanel::staticMetaObject = { {
    QMetaObject::SuperData::link<Panel::staticMetaObject>(),
    qt_meta_stringdata_rviz_common__ViewsPanel.data,
    qt_meta_data_rviz_common__ViewsPanel,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *rviz_common::ViewsPanel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *rviz_common::ViewsPanel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_rviz_common__ViewsPanel.stringdata0))
        return static_cast<void*>(this);
    return Panel::qt_metacast(_clname);
}

int rviz_common::ViewsPanel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = Panel::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 6;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
