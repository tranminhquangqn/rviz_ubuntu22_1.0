/****************************************************************************
** Meta object code from reading C++ file 'ros_topic_display.hpp'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../src/tomo_rviz/rviz_common/include/rviz_common/ros_topic_display.hpp"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ros_topic_display.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_rviz_common___RosTopicDisplay_t {
    QByteArrayData data[9];
    char stringdata0[189];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_rviz_common___RosTopicDisplay_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_rviz_common___RosTopicDisplay_t qt_meta_stringdata_rviz_common___RosTopicDisplay = {
    {
QT_MOC_LITERAL(0, 0, 29), // "rviz_common::_RosTopicDisplay"
QT_MOC_LITERAL(1, 30, 22), // "typeErasedMessageTaken"
QT_MOC_LITERAL(2, 53, 0), // ""
QT_MOC_LITERAL(3, 54, 27), // "std::shared_ptr<const void>"
QT_MOC_LITERAL(4, 82, 19), // "type_erased_message"
QT_MOC_LITERAL(5, 102, 24), // "processTypeErasedMessage"
QT_MOC_LITERAL(6, 127, 26), // "transformerChangedCallback"
QT_MOC_LITERAL(7, 154, 22), // "updateMessageQueueSize"
QT_MOC_LITERAL(8, 177, 11) // "updateTopic"

    },
    "rviz_common::_RosTopicDisplay\0"
    "typeErasedMessageTaken\0\0"
    "std::shared_ptr<const void>\0"
    "type_erased_message\0processTypeErasedMessage\0"
    "transformerChangedCallback\0"
    "updateMessageQueueSize\0updateTopic"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_rviz_common___RosTopicDisplay[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   39,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    1,   42,    2, 0x09 /* Protected */,
       6,    0,   45,    2, 0x09 /* Protected */,
       7,    0,   46,    2, 0x09 /* Protected */,
       8,    0,   47,    2, 0x09 /* Protected */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void rviz_common::_RosTopicDisplay::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<_RosTopicDisplay *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->typeErasedMessageTaken((*reinterpret_cast< std::shared_ptr<const void>(*)>(_a[1]))); break;
        case 1: _t->processTypeErasedMessage((*reinterpret_cast< std::shared_ptr<const void>(*)>(_a[1]))); break;
        case 2: _t->transformerChangedCallback(); break;
        case 3: _t->updateMessageQueueSize(); break;
        case 4: _t->updateTopic(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< std::shared_ptr<const void> >(); break;
            }
            break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< std::shared_ptr<const void> >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (_RosTopicDisplay::*)(std::shared_ptr<const void> );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&_RosTopicDisplay::typeErasedMessageTaken)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject rviz_common::_RosTopicDisplay::staticMetaObject = { {
    QMetaObject::SuperData::link<Display::staticMetaObject>(),
    qt_meta_stringdata_rviz_common___RosTopicDisplay.data,
    qt_meta_data_rviz_common___RosTopicDisplay,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *rviz_common::_RosTopicDisplay::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *rviz_common::_RosTopicDisplay::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_rviz_common___RosTopicDisplay.stringdata0))
        return static_cast<void*>(this);
    return Display::qt_metacast(_clname);
}

int rviz_common::_RosTopicDisplay::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = Display::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    }
    return _id;
}

// SIGNAL 0
void rviz_common::_RosTopicDisplay::typeErasedMessageTaken(std::shared_ptr<const void> _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE