/****************************************************************************
** Meta object code from reading C++ file 'view_manager.hpp'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../src/tomo_rviz/rviz_common/include/rviz_common/view_manager.hpp"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'view_manager.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_rviz_common__ViewManager_t {
    QByteArrayData data[9];
    char stringdata0[138];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_rviz_common__ViewManager_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_rviz_common__ViewManager_t qt_meta_stringdata_rviz_common__ViewManager = {
    {
QT_MOC_LITERAL(0, 0, 24), // "rviz_common::ViewManager"
QT_MOC_LITERAL(1, 25, 13), // "configChanged"
QT_MOC_LITERAL(2, 39, 0), // ""
QT_MOC_LITERAL(3, 40, 14), // "currentChanged"
QT_MOC_LITERAL(4, 55, 17), // "copyCurrentToList"
QT_MOC_LITERAL(5, 73, 28), // "setCurrentViewControllerType"
QT_MOC_LITERAL(6, 102, 12), // "new_class_id"
QT_MOC_LITERAL(7, 115, 18), // "onCurrentDestroyed"
QT_MOC_LITERAL(8, 134, 3) // "obj"

    },
    "rviz_common::ViewManager\0configChanged\0"
    "\0currentChanged\0copyCurrentToList\0"
    "setCurrentViewControllerType\0new_class_id\0"
    "onCurrentDestroyed\0obj"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_rviz_common__ViewManager[] = {

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
       1,    0,   39,    2, 0x06 /* Public */,
       3,    0,   40,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    0,   41,    2, 0x0a /* Public */,
       5,    1,   42,    2, 0x0a /* Public */,
       7,    1,   45,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    6,
    QMetaType::Void, QMetaType::QObjectStar,    8,

       0        // eod
};

void rviz_common::ViewManager::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ViewManager *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->configChanged(); break;
        case 1: _t->currentChanged(); break;
        case 2: _t->copyCurrentToList(); break;
        case 3: _t->setCurrentViewControllerType((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 4: _t->onCurrentDestroyed((*reinterpret_cast< QObject*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (ViewManager::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ViewManager::configChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (ViewManager::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ViewManager::currentChanged)) {
                *result = 1;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject rviz_common::ViewManager::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_rviz_common__ViewManager.data,
    qt_meta_data_rviz_common__ViewManager,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *rviz_common::ViewManager::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *rviz_common::ViewManager::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_rviz_common__ViewManager.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int rviz_common::ViewManager::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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
void rviz_common::ViewManager::configChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void rviz_common::ViewManager::currentChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}
struct qt_meta_stringdata_rviz_common__ViewControllerContainer_t {
    QByteArrayData data[1];
    char stringdata0[37];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_rviz_common__ViewControllerContainer_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_rviz_common__ViewControllerContainer_t qt_meta_stringdata_rviz_common__ViewControllerContainer = {
    {
QT_MOC_LITERAL(0, 0, 36) // "rviz_common::ViewControllerCo..."

    },
    "rviz_common::ViewControllerContainer"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_rviz_common__ViewControllerContainer[] = {

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

void rviz_common::ViewControllerContainer::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    (void)_o;
    (void)_id;
    (void)_c;
    (void)_a;
}

QT_INIT_METAOBJECT const QMetaObject rviz_common::ViewControllerContainer::staticMetaObject = { {
    QMetaObject::SuperData::link<rviz_common::properties::Property::staticMetaObject>(),
    qt_meta_stringdata_rviz_common__ViewControllerContainer.data,
    qt_meta_data_rviz_common__ViewControllerContainer,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *rviz_common::ViewControllerContainer::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *rviz_common::ViewControllerContainer::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_rviz_common__ViewControllerContainer.stringdata0))
        return static_cast<void*>(this);
    return rviz_common::properties::Property::qt_metacast(_clname);
}

int rviz_common::ViewControllerContainer::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = rviz_common::properties::Property::qt_metacall(_c, _id, _a);
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
