/****************************************************************************
** Meta object code from reading C++ file 'tool_manager.hpp'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../src/tomo_rviz/rviz_common/include/rviz_common/tool_manager.hpp"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'tool_manager.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_rviz_common__ToolManager_t {
    QByteArrayData data[12];
    char stringdata0[173];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_rviz_common__ToolManager_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_rviz_common__ToolManager_t qt_meta_stringdata_rviz_common__ToolManager = {
    {
QT_MOC_LITERAL(0, 0, 24), // "rviz_common::ToolManager"
QT_MOC_LITERAL(1, 25, 13), // "configChanged"
QT_MOC_LITERAL(2, 39, 0), // ""
QT_MOC_LITERAL(3, 40, 9), // "toolAdded"
QT_MOC_LITERAL(4, 50, 5), // "Tool*"
QT_MOC_LITERAL(5, 56, 11), // "toolChanged"
QT_MOC_LITERAL(6, 68, 11), // "toolRemoved"
QT_MOC_LITERAL(7, 80, 13), // "toolRefreshed"
QT_MOC_LITERAL(8, 94, 24), // "updatePropertyVisibility"
QT_MOC_LITERAL(9, 119, 34), // "rviz_common::properties::Prop..."
QT_MOC_LITERAL(10, 154, 8), // "property"
QT_MOC_LITERAL(11, 163, 9) // "closeTool"

    },
    "rviz_common::ToolManager\0configChanged\0"
    "\0toolAdded\0Tool*\0toolChanged\0toolRemoved\0"
    "toolRefreshed\0updatePropertyVisibility\0"
    "rviz_common::properties::Property*\0"
    "property\0closeTool"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_rviz_common__ToolManager[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   49,    2, 0x06 /* Public */,
       3,    1,   50,    2, 0x06 /* Public */,
       5,    1,   53,    2, 0x06 /* Public */,
       6,    1,   56,    2, 0x06 /* Public */,
       7,    1,   59,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       8,    1,   62,    2, 0x08 /* Private */,
      11,    0,   65,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 4,    2,
    QMetaType::Void, 0x80000000 | 4,    2,
    QMetaType::Void, 0x80000000 | 4,    2,
    QMetaType::Void, 0x80000000 | 4,    2,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 9,   10,
    QMetaType::Void,

       0        // eod
};

void rviz_common::ToolManager::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ToolManager *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->configChanged(); break;
        case 1: _t->toolAdded((*reinterpret_cast< Tool*(*)>(_a[1]))); break;
        case 2: _t->toolChanged((*reinterpret_cast< Tool*(*)>(_a[1]))); break;
        case 3: _t->toolRemoved((*reinterpret_cast< Tool*(*)>(_a[1]))); break;
        case 4: _t->toolRefreshed((*reinterpret_cast< Tool*(*)>(_a[1]))); break;
        case 5: _t->updatePropertyVisibility((*reinterpret_cast< rviz_common::properties::Property*(*)>(_a[1]))); break;
        case 6: _t->closeTool(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (ToolManager::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ToolManager::configChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (ToolManager::*)(Tool * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ToolManager::toolAdded)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (ToolManager::*)(Tool * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ToolManager::toolChanged)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (ToolManager::*)(Tool * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ToolManager::toolRemoved)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (ToolManager::*)(Tool * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ToolManager::toolRefreshed)) {
                *result = 4;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject rviz_common::ToolManager::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_rviz_common__ToolManager.data,
    qt_meta_data_rviz_common__ToolManager,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *rviz_common::ToolManager::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *rviz_common::ToolManager::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_rviz_common__ToolManager.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int rviz_common::ToolManager::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 7;
    }
    return _id;
}

// SIGNAL 0
void rviz_common::ToolManager::configChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void rviz_common::ToolManager::toolAdded(Tool * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void rviz_common::ToolManager::toolChanged(Tool * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void rviz_common::ToolManager::toolRemoved(Tool * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void rviz_common::ToolManager::toolRefreshed(Tool * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
