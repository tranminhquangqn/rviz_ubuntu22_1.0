/****************************************************************************
** Meta object code from reading C++ file 'add_display_dialog.hpp'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../src/tomo_rviz/rviz_common/src/rviz_common/add_display_dialog.hpp"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'add_display_dialog.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_rviz_common__AddDisplayDialog_t {
    QByteArrayData data[10];
    char stringdata0[125];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_rviz_common__AddDisplayDialog_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_rviz_common__AddDisplayDialog_t qt_meta_stringdata_rviz_common__AddDisplayDialog = {
    {
QT_MOC_LITERAL(0, 0, 29), // "rviz_common::AddDisplayDialog"
QT_MOC_LITERAL(1, 30, 6), // "accept"
QT_MOC_LITERAL(2, 37, 0), // ""
QT_MOC_LITERAL(3, 38, 17), // "onDisplaySelected"
QT_MOC_LITERAL(4, 56, 14), // "SelectionData*"
QT_MOC_LITERAL(5, 71, 4), // "data"
QT_MOC_LITERAL(6, 76, 15), // "onTopicSelected"
QT_MOC_LITERAL(7, 92, 12), // "onTabChanged"
QT_MOC_LITERAL(8, 105, 5), // "index"
QT_MOC_LITERAL(9, 111, 13) // "onNameChanged"

    },
    "rviz_common::AddDisplayDialog\0accept\0"
    "\0onDisplaySelected\0SelectionData*\0"
    "data\0onTopicSelected\0onTabChanged\0"
    "index\0onNameChanged"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_rviz_common__AddDisplayDialog[] = {

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
       1,    0,   39,    2, 0x0a /* Public */,
       3,    1,   40,    2, 0x08 /* Private */,
       6,    1,   43,    2, 0x08 /* Private */,
       7,    1,   46,    2, 0x08 /* Private */,
       9,    0,   49,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 4,    5,
    QMetaType::Void, 0x80000000 | 4,    5,
    QMetaType::Void, QMetaType::Int,    8,
    QMetaType::Void,

       0        // eod
};

void rviz_common::AddDisplayDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<AddDisplayDialog *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->accept(); break;
        case 1: _t->onDisplaySelected((*reinterpret_cast< SelectionData*(*)>(_a[1]))); break;
        case 2: _t->onTopicSelected((*reinterpret_cast< SelectionData*(*)>(_a[1]))); break;
        case 3: _t->onTabChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->onNameChanged(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject rviz_common::AddDisplayDialog::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_rviz_common__AddDisplayDialog.data,
    qt_meta_data_rviz_common__AddDisplayDialog,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *rviz_common::AddDisplayDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *rviz_common::AddDisplayDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_rviz_common__AddDisplayDialog.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int rviz_common::AddDisplayDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
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
struct qt_meta_stringdata_rviz_common__DisplayTypeTree_t {
    QByteArrayData data[9];
    char stringdata0[115];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_rviz_common__DisplayTypeTree_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_rviz_common__DisplayTypeTree_t qt_meta_stringdata_rviz_common__DisplayTypeTree = {
    {
QT_MOC_LITERAL(0, 0, 28), // "rviz_common::DisplayTypeTree"
QT_MOC_LITERAL(1, 29, 11), // "itemChanged"
QT_MOC_LITERAL(2, 41, 0), // ""
QT_MOC_LITERAL(3, 42, 14), // "SelectionData*"
QT_MOC_LITERAL(4, 57, 9), // "selection"
QT_MOC_LITERAL(5, 67, 20), // "onCurrentItemChanged"
QT_MOC_LITERAL(6, 88, 16), // "QTreeWidgetItem*"
QT_MOC_LITERAL(7, 105, 4), // "curr"
QT_MOC_LITERAL(8, 110, 4) // "prev"

    },
    "rviz_common::DisplayTypeTree\0itemChanged\0"
    "\0SelectionData*\0selection\0"
    "onCurrentItemChanged\0QTreeWidgetItem*\0"
    "curr\0prev"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_rviz_common__DisplayTypeTree[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   24,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    2,   27,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 6, 0x80000000 | 6,    7,    8,

       0        // eod
};

void rviz_common::DisplayTypeTree::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<DisplayTypeTree *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->itemChanged((*reinterpret_cast< SelectionData*(*)>(_a[1]))); break;
        case 1: _t->onCurrentItemChanged((*reinterpret_cast< QTreeWidgetItem*(*)>(_a[1])),(*reinterpret_cast< QTreeWidgetItem*(*)>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (DisplayTypeTree::*)(SelectionData * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DisplayTypeTree::itemChanged)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject rviz_common::DisplayTypeTree::staticMetaObject = { {
    QMetaObject::SuperData::link<QTreeWidget::staticMetaObject>(),
    qt_meta_stringdata_rviz_common__DisplayTypeTree.data,
    qt_meta_data_rviz_common__DisplayTypeTree,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *rviz_common::DisplayTypeTree::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *rviz_common::DisplayTypeTree::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_rviz_common__DisplayTypeTree.stringdata0))
        return static_cast<void*>(this);
    return QTreeWidget::qt_metacast(_clname);
}

int rviz_common::DisplayTypeTree::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QTreeWidget::qt_metacall(_c, _id, _a);
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

// SIGNAL 0
void rviz_common::DisplayTypeTree::itemChanged(SelectionData * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
struct qt_meta_stringdata_rviz_common__TopicDisplayWidget_t {
    QByteArrayData data[14];
    char stringdata0[176];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_rviz_common__TopicDisplayWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_rviz_common__TopicDisplayWidget_t qt_meta_stringdata_rviz_common__TopicDisplayWidget = {
    {
QT_MOC_LITERAL(0, 0, 31), // "rviz_common::TopicDisplayWidget"
QT_MOC_LITERAL(1, 32, 11), // "itemChanged"
QT_MOC_LITERAL(2, 44, 0), // ""
QT_MOC_LITERAL(3, 45, 14), // "SelectionData*"
QT_MOC_LITERAL(4, 60, 9), // "selection"
QT_MOC_LITERAL(5, 70, 13), // "itemActivated"
QT_MOC_LITERAL(6, 84, 16), // "QTreeWidgetItem*"
QT_MOC_LITERAL(7, 101, 4), // "item"
QT_MOC_LITERAL(8, 106, 6), // "column"
QT_MOC_LITERAL(9, 113, 12), // "stateChanged"
QT_MOC_LITERAL(10, 126, 5), // "state"
QT_MOC_LITERAL(11, 132, 20), // "onCurrentItemChanged"
QT_MOC_LITERAL(12, 153, 4), // "curr"
QT_MOC_LITERAL(13, 158, 17) // "onComboBoxClicked"

    },
    "rviz_common::TopicDisplayWidget\0"
    "itemChanged\0\0SelectionData*\0selection\0"
    "itemActivated\0QTreeWidgetItem*\0item\0"
    "column\0stateChanged\0state\0"
    "onCurrentItemChanged\0curr\0onComboBoxClicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_rviz_common__TopicDisplayWidget[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   39,    2, 0x06 /* Public */,
       5,    2,   42,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       9,    1,   47,    2, 0x08 /* Private */,
      11,    1,   50,    2, 0x08 /* Private */,
      13,    1,   53,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 6, QMetaType::Int,    7,    8,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,   10,
    QMetaType::Void, 0x80000000 | 6,   12,
    QMetaType::Void, 0x80000000 | 6,   12,

       0        // eod
};

void rviz_common::TopicDisplayWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<TopicDisplayWidget *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->itemChanged((*reinterpret_cast< SelectionData*(*)>(_a[1]))); break;
        case 1: _t->itemActivated((*reinterpret_cast< QTreeWidgetItem*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 2: _t->stateChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->onCurrentItemChanged((*reinterpret_cast< QTreeWidgetItem*(*)>(_a[1]))); break;
        case 4: _t->onComboBoxClicked((*reinterpret_cast< QTreeWidgetItem*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (TopicDisplayWidget::*)(SelectionData * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TopicDisplayWidget::itemChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (TopicDisplayWidget::*)(QTreeWidgetItem * , int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TopicDisplayWidget::itemActivated)) {
                *result = 1;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject rviz_common::TopicDisplayWidget::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_rviz_common__TopicDisplayWidget.data,
    qt_meta_data_rviz_common__TopicDisplayWidget,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *rviz_common::TopicDisplayWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *rviz_common::TopicDisplayWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_rviz_common__TopicDisplayWidget.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int rviz_common::TopicDisplayWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
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

// SIGNAL 0
void rviz_common::TopicDisplayWidget::itemChanged(SelectionData * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void rviz_common::TopicDisplayWidget::itemActivated(QTreeWidgetItem * _t1, int _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
struct qt_meta_stringdata_rviz_common__EmbeddableComboBox_t {
    QByteArrayData data[8];
    char stringdata0[92];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_rviz_common__EmbeddableComboBox_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_rviz_common__EmbeddableComboBox_t qt_meta_stringdata_rviz_common__EmbeddableComboBox = {
    {
QT_MOC_LITERAL(0, 0, 31), // "rviz_common::EmbeddableComboBox"
QT_MOC_LITERAL(1, 32, 11), // "itemClicked"
QT_MOC_LITERAL(2, 44, 0), // ""
QT_MOC_LITERAL(3, 45, 16), // "QTreeWidgetItem*"
QT_MOC_LITERAL(4, 62, 4), // "item"
QT_MOC_LITERAL(5, 67, 6), // "column"
QT_MOC_LITERAL(6, 74, 11), // "onActivated"
QT_MOC_LITERAL(7, 86, 5) // "index"

    },
    "rviz_common::EmbeddableComboBox\0"
    "itemClicked\0\0QTreeWidgetItem*\0item\0"
    "column\0onActivated\0index"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_rviz_common__EmbeddableComboBox[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,   24,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       6,    1,   29,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3, QMetaType::Int,    4,    5,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    7,

       0        // eod
};

void rviz_common::EmbeddableComboBox::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<EmbeddableComboBox *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->itemClicked((*reinterpret_cast< QTreeWidgetItem*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 1: _t->onActivated((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (EmbeddableComboBox::*)(QTreeWidgetItem * , int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&EmbeddableComboBox::itemClicked)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject rviz_common::EmbeddableComboBox::staticMetaObject = { {
    QMetaObject::SuperData::link<QComboBox::staticMetaObject>(),
    qt_meta_stringdata_rviz_common__EmbeddableComboBox.data,
    qt_meta_data_rviz_common__EmbeddableComboBox,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *rviz_common::EmbeddableComboBox::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *rviz_common::EmbeddableComboBox::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_rviz_common__EmbeddableComboBox.stringdata0))
        return static_cast<void*>(this);
    return QComboBox::qt_metacast(_clname);
}

int rviz_common::EmbeddableComboBox::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QComboBox::qt_metacall(_c, _id, _a);
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

// SIGNAL 0
void rviz_common::EmbeddableComboBox::itemClicked(QTreeWidgetItem * _t1, int _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
