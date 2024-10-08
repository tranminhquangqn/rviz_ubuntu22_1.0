/****************************************************************************
** Meta object code from reading C++ file 'visualization_manager.hpp'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../src/tomo_rviz/rviz_common/include/rviz_common/visualization_manager.hpp"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'visualization_manager.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_rviz_common__VisualizationManager_t {
    QByteArrayData data[15];
    char stringdata0[193];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_rviz_common__VisualizationManager_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_rviz_common__VisualizationManager_t qt_meta_stringdata_rviz_common__VisualizationManager = {
    {
QT_MOC_LITERAL(0, 0, 33), // "rviz_common::VisualizationMan..."
QT_MOC_LITERAL(1, 34, 10), // "timeJumped"
QT_MOC_LITERAL(2, 45, 0), // ""
QT_MOC_LITERAL(3, 46, 9), // "preUpdate"
QT_MOC_LITERAL(4, 56, 13), // "configChanged"
QT_MOC_LITERAL(5, 70, 12), // "statusUpdate"
QT_MOC_LITERAL(6, 83, 7), // "message"
QT_MOC_LITERAL(7, 91, 13), // "escapePressed"
QT_MOC_LITERAL(8, 105, 9), // "resetTime"
QT_MOC_LITERAL(9, 115, 8), // "onUpdate"
QT_MOC_LITERAL(10, 124, 13), // "onToolChanged"
QT_MOC_LITERAL(11, 138, 5), // "Tool*"
QT_MOC_LITERAL(12, 144, 16), // "updateFixedFrame"
QT_MOC_LITERAL(13, 161, 21), // "updateBackgroundColor"
QT_MOC_LITERAL(14, 183, 9) // "updateFps"

    },
    "rviz_common::VisualizationManager\0"
    "timeJumped\0\0preUpdate\0configChanged\0"
    "statusUpdate\0message\0escapePressed\0"
    "resetTime\0onUpdate\0onToolChanged\0Tool*\0"
    "updateFixedFrame\0updateBackgroundColor\0"
    "updateFps"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_rviz_common__VisualizationManager[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   69,    2, 0x06 /* Public */,
       3,    0,   70,    2, 0x06 /* Public */,
       4,    0,   71,    2, 0x06 /* Public */,
       5,    1,   72,    2, 0x06 /* Public */,
       7,    0,   75,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       8,    0,   76,    2, 0x0a /* Public */,
       9,    0,   77,    2, 0x09 /* Protected */,
      10,    1,   78,    2, 0x09 /* Protected */,
      12,    0,   81,    2, 0x08 /* Private */,
      13,    0,   82,    2, 0x08 /* Private */,
      14,    0,   83,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    6,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 11,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void rviz_common::VisualizationManager::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<VisualizationManager *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->timeJumped(); break;
        case 1: _t->preUpdate(); break;
        case 2: _t->configChanged(); break;
        case 3: _t->statusUpdate((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 4: _t->escapePressed(); break;
        case 5: _t->resetTime(); break;
        case 6: _t->onUpdate(); break;
        case 7: _t->onToolChanged((*reinterpret_cast< Tool*(*)>(_a[1]))); break;
        case 8: _t->updateFixedFrame(); break;
        case 9: _t->updateBackgroundColor(); break;
        case 10: _t->updateFps(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (VisualizationManager::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&VisualizationManager::timeJumped)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (VisualizationManager::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&VisualizationManager::preUpdate)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (VisualizationManager::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&VisualizationManager::configChanged)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (VisualizationManager::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&VisualizationManager::statusUpdate)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (VisualizationManager::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&VisualizationManager::escapePressed)) {
                *result = 4;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject rviz_common::VisualizationManager::staticMetaObject = { {
    QMetaObject::SuperData::link<DisplayContext::staticMetaObject>(),
    qt_meta_stringdata_rviz_common__VisualizationManager.data,
    qt_meta_data_rviz_common__VisualizationManager,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *rviz_common::VisualizationManager::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *rviz_common::VisualizationManager::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_rviz_common__VisualizationManager.stringdata0))
        return static_cast<void*>(this);
    return DisplayContext::qt_metacast(_clname);
}

int rviz_common::VisualizationManager::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = DisplayContext::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 11)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 11;
    }
    return _id;
}

// SIGNAL 0
void rviz_common::VisualizationManager::timeJumped()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void rviz_common::VisualizationManager::preUpdate()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void rviz_common::VisualizationManager::configChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void rviz_common::VisualizationManager::statusUpdate(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void rviz_common::VisualizationManager::escapePressed()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
