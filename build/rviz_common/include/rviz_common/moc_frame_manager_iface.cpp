/****************************************************************************
** Meta object code from reading C++ file 'frame_manager_iface.hpp'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../src/tomo_rviz/rviz_common/include/rviz_common/frame_manager_iface.hpp"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'frame_manager_iface.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_rviz_common__FrameManagerIface_t {
    QByteArrayData data[6];
    char stringdata0[133];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_rviz_common__FrameManagerIface_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_rviz_common__FrameManagerIface_t qt_meta_stringdata_rviz_common__FrameManagerIface = {
    {
QT_MOC_LITERAL(0, 0, 30), // "rviz_common::FrameManagerIface"
QT_MOC_LITERAL(1, 31, 17), // "fixedFrameChanged"
QT_MOC_LITERAL(2, 49, 0), // ""
QT_MOC_LITERAL(3, 50, 20), // "setTransformerPlugin"
QT_MOC_LITERAL(4, 71, 49), // "std::shared_ptr<transformatio..."
QT_MOC_LITERAL(5, 121, 11) // "transformer"

    },
    "rviz_common::FrameManagerIface\0"
    "fixedFrameChanged\0\0setTransformerPlugin\0"
    "std::shared_ptr<transformation::FrameTransformer>\0"
    "transformer"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_rviz_common__FrameManagerIface[] = {

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
       1,    0,   24,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    1,   25,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 4,    5,

       0        // eod
};

void rviz_common::FrameManagerIface::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<FrameManagerIface *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->fixedFrameChanged(); break;
        case 1: _t->setTransformerPlugin((*reinterpret_cast< std::shared_ptr<transformation::FrameTransformer>(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (FrameManagerIface::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FrameManagerIface::fixedFrameChanged)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject rviz_common::FrameManagerIface::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_rviz_common__FrameManagerIface.data,
    qt_meta_data_rviz_common__FrameManagerIface,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *rviz_common::FrameManagerIface::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *rviz_common::FrameManagerIface::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_rviz_common__FrameManagerIface.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int rviz_common::FrameManagerIface::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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
void rviz_common::FrameManagerIface::fixedFrameChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
