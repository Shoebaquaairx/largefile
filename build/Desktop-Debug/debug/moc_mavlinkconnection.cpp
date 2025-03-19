/****************************************************************************
** Meta object code from reading C++ file 'mavlinkconnection.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/mavlink/mavlinkconnection.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mavlinkconnection.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

#ifndef Q_CONSTINIT
#define Q_CONSTINIT
#endif

QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
QT_WARNING_DISABLE_GCC("-Wuseless-cast")
namespace {
struct qt_meta_tag_ZN17MAVLinkConnectionE_t {};
} // unnamed namespace


#ifdef QT_MOC_HAS_STRINGDATA
static constexpr auto qt_meta_stringdata_ZN17MAVLinkConnectionE = QtMocHelpers::stringData(
    "MAVLinkConnection",
    "connectionStatusChanged",
    "",
    "connected",
    "altitudeChanged",
    "altitude",
    "relativeAltitudeChanged",
    "relativeAltitude",
    "batteryChanged",
    "voltage",
    "current",
    "percentage",
    "heartbeatReceived",
    "mavlink_heartbeat_t",
    "heartbeat",
    "modeChanged",
    "uint8_t",
    "base_mode",
    "uint32_t",
    "custom_mode",
    "globalPositionReceived",
    "latitude",
    "longitude",
    "vfrHudReceived",
    "airspeed",
    "groundspeed",
    "heading",
    "throttle",
    "attitudeReceived",
    "roll",
    "pitch",
    "yaw",
    "gpsRawReceived",
    "satellites",
    "hdop",
    "gpsFixTypeChanged",
    "fix_type",
    "homePositionChanged",
    "lat",
    "lon",
    "alt",
    "distanceFromHomeChanged",
    "distance",
    "systemStatusChanged",
    "mavlink_sys_status_t",
    "status",
    "linkQualityChanged",
    "quality",
    "landedStateChanged",
    "landed_state",
    "extendedStateChanged",
    "vtol_state",
    "handleTcpData",
    "handleUdpData",
    "handleSerialData",
    "sendHeartbeat",
    "checkConnectionHealth"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA

Q_CONSTINIT static const uint qt_meta_data_ZN17MAVLinkConnectionE[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
      22,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      17,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,  146,    2, 0x06,    1 /* Public */,
       4,    1,  149,    2, 0x06,    3 /* Public */,
       6,    1,  152,    2, 0x06,    5 /* Public */,
       8,    3,  155,    2, 0x06,    7 /* Public */,
      12,    1,  162,    2, 0x06,   11 /* Public */,
      15,    2,  165,    2, 0x06,   13 /* Public */,
      20,    3,  170,    2, 0x06,   16 /* Public */,
      23,    4,  177,    2, 0x06,   20 /* Public */,
      28,    3,  186,    2, 0x06,   25 /* Public */,
      32,    2,  193,    2, 0x06,   29 /* Public */,
      35,    1,  198,    2, 0x06,   32 /* Public */,
      37,    3,  201,    2, 0x06,   34 /* Public */,
      41,    1,  208,    2, 0x06,   38 /* Public */,
      43,    1,  211,    2, 0x06,   40 /* Public */,
      46,    1,  214,    2, 0x06,   42 /* Public */,
      48,    1,  217,    2, 0x06,   44 /* Public */,
      50,    2,  220,    2, 0x06,   46 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
      52,    0,  225,    2, 0x08,   49 /* Private */,
      53,    0,  226,    2, 0x08,   50 /* Private */,
      54,    0,  227,    2, 0x08,   51 /* Private */,
      55,    0,  228,    2, 0x08,   52 /* Private */,
      56,    0,  229,    2, 0x08,   53 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, QMetaType::Float,    5,
    QMetaType::Void, QMetaType::Float,    7,
    QMetaType::Void, QMetaType::Float, QMetaType::Float, QMetaType::Float,    9,   10,   11,
    QMetaType::Void, 0x80000000 | 13,   14,
    QMetaType::Void, 0x80000000 | 16, 0x80000000 | 18,   17,   19,
    QMetaType::Void, QMetaType::Double, QMetaType::Double, QMetaType::Float,   21,   22,    5,
    QMetaType::Void, QMetaType::Float, QMetaType::Float, QMetaType::Float, QMetaType::Float,   24,   25,   26,   27,
    QMetaType::Void, QMetaType::Float, QMetaType::Float, QMetaType::Float,   29,   30,   31,
    QMetaType::Void, QMetaType::Int, QMetaType::Float,   33,   34,
    QMetaType::Void, QMetaType::Int,   36,
    QMetaType::Void, QMetaType::Double, QMetaType::Double, QMetaType::Float,   38,   39,   40,
    QMetaType::Void, QMetaType::Float,   42,
    QMetaType::Void, 0x80000000 | 44,   45,
    QMetaType::Void, QMetaType::Int,   47,
    QMetaType::Void, 0x80000000 | 16,   49,
    QMetaType::Void, 0x80000000 | 16, 0x80000000 | 16,   51,   49,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject MAVLinkConnection::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_ZN17MAVLinkConnectionE.offsetsAndSizes,
    qt_meta_data_ZN17MAVLinkConnectionE,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_tag_ZN17MAVLinkConnectionE_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<MAVLinkConnection, std::true_type>,
        // method 'connectionStatusChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'altitudeChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<float, std::false_type>,
        // method 'relativeAltitudeChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<float, std::false_type>,
        // method 'batteryChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<float, std::false_type>,
        QtPrivate::TypeAndForceComplete<float, std::false_type>,
        QtPrivate::TypeAndForceComplete<float, std::false_type>,
        // method 'heartbeatReceived'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const mavlink_heartbeat_t &, std::false_type>,
        // method 'modeChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<uint8_t, std::false_type>,
        QtPrivate::TypeAndForceComplete<uint32_t, std::false_type>,
        // method 'globalPositionReceived'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<double, std::false_type>,
        QtPrivate::TypeAndForceComplete<double, std::false_type>,
        QtPrivate::TypeAndForceComplete<float, std::false_type>,
        // method 'vfrHudReceived'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<float, std::false_type>,
        QtPrivate::TypeAndForceComplete<float, std::false_type>,
        QtPrivate::TypeAndForceComplete<float, std::false_type>,
        QtPrivate::TypeAndForceComplete<float, std::false_type>,
        // method 'attitudeReceived'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<float, std::false_type>,
        QtPrivate::TypeAndForceComplete<float, std::false_type>,
        QtPrivate::TypeAndForceComplete<float, std::false_type>,
        // method 'gpsRawReceived'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<float, std::false_type>,
        // method 'gpsFixTypeChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'homePositionChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<double, std::false_type>,
        QtPrivate::TypeAndForceComplete<double, std::false_type>,
        QtPrivate::TypeAndForceComplete<float, std::false_type>,
        // method 'distanceFromHomeChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<float, std::false_type>,
        // method 'systemStatusChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const mavlink_sys_status_t &, std::false_type>,
        // method 'linkQualityChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'landedStateChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<uint8_t, std::false_type>,
        // method 'extendedStateChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<uint8_t, std::false_type>,
        QtPrivate::TypeAndForceComplete<uint8_t, std::false_type>,
        // method 'handleTcpData'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'handleUdpData'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'handleSerialData'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'sendHeartbeat'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'checkConnectionHealth'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void MAVLinkConnection::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<MAVLinkConnection *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->connectionStatusChanged((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 1: _t->altitudeChanged((*reinterpret_cast< std::add_pointer_t<float>>(_a[1]))); break;
        case 2: _t->relativeAltitudeChanged((*reinterpret_cast< std::add_pointer_t<float>>(_a[1]))); break;
        case 3: _t->batteryChanged((*reinterpret_cast< std::add_pointer_t<float>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<float>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<float>>(_a[3]))); break;
        case 4: _t->heartbeatReceived((*reinterpret_cast< std::add_pointer_t<mavlink_heartbeat_t>>(_a[1]))); break;
        case 5: _t->modeChanged((*reinterpret_cast< std::add_pointer_t<uint8_t>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<uint32_t>>(_a[2]))); break;
        case 6: _t->globalPositionReceived((*reinterpret_cast< std::add_pointer_t<double>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<double>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<float>>(_a[3]))); break;
        case 7: _t->vfrHudReceived((*reinterpret_cast< std::add_pointer_t<float>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<float>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<float>>(_a[3])),(*reinterpret_cast< std::add_pointer_t<float>>(_a[4]))); break;
        case 8: _t->attitudeReceived((*reinterpret_cast< std::add_pointer_t<float>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<float>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<float>>(_a[3]))); break;
        case 9: _t->gpsRawReceived((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<float>>(_a[2]))); break;
        case 10: _t->gpsFixTypeChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 11: _t->homePositionChanged((*reinterpret_cast< std::add_pointer_t<double>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<double>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<float>>(_a[3]))); break;
        case 12: _t->distanceFromHomeChanged((*reinterpret_cast< std::add_pointer_t<float>>(_a[1]))); break;
        case 13: _t->systemStatusChanged((*reinterpret_cast< std::add_pointer_t<mavlink_sys_status_t>>(_a[1]))); break;
        case 14: _t->linkQualityChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 15: _t->landedStateChanged((*reinterpret_cast< std::add_pointer_t<uint8_t>>(_a[1]))); break;
        case 16: _t->extendedStateChanged((*reinterpret_cast< std::add_pointer_t<uint8_t>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<uint8_t>>(_a[2]))); break;
        case 17: _t->handleTcpData(); break;
        case 18: _t->handleUdpData(); break;
        case 19: _t->handleSerialData(); break;
        case 20: _t->sendHeartbeat(); break;
        case 21: _t->checkConnectionHealth(); break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _q_method_type = void (MAVLinkConnection::*)(bool );
            if (_q_method_type _q_method = &MAVLinkConnection::connectionStatusChanged; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _q_method_type = void (MAVLinkConnection::*)(float );
            if (_q_method_type _q_method = &MAVLinkConnection::altitudeChanged; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
        {
            using _q_method_type = void (MAVLinkConnection::*)(float );
            if (_q_method_type _q_method = &MAVLinkConnection::relativeAltitudeChanged; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 2;
                return;
            }
        }
        {
            using _q_method_type = void (MAVLinkConnection::*)(float , float , float );
            if (_q_method_type _q_method = &MAVLinkConnection::batteryChanged; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 3;
                return;
            }
        }
        {
            using _q_method_type = void (MAVLinkConnection::*)(const mavlink_heartbeat_t & );
            if (_q_method_type _q_method = &MAVLinkConnection::heartbeatReceived; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 4;
                return;
            }
        }
        {
            using _q_method_type = void (MAVLinkConnection::*)(uint8_t , uint32_t );
            if (_q_method_type _q_method = &MAVLinkConnection::modeChanged; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 5;
                return;
            }
        }
        {
            using _q_method_type = void (MAVLinkConnection::*)(double , double , float );
            if (_q_method_type _q_method = &MAVLinkConnection::globalPositionReceived; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 6;
                return;
            }
        }
        {
            using _q_method_type = void (MAVLinkConnection::*)(float , float , float , float );
            if (_q_method_type _q_method = &MAVLinkConnection::vfrHudReceived; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 7;
                return;
            }
        }
        {
            using _q_method_type = void (MAVLinkConnection::*)(float , float , float );
            if (_q_method_type _q_method = &MAVLinkConnection::attitudeReceived; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 8;
                return;
            }
        }
        {
            using _q_method_type = void (MAVLinkConnection::*)(int , float );
            if (_q_method_type _q_method = &MAVLinkConnection::gpsRawReceived; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 9;
                return;
            }
        }
        {
            using _q_method_type = void (MAVLinkConnection::*)(int );
            if (_q_method_type _q_method = &MAVLinkConnection::gpsFixTypeChanged; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 10;
                return;
            }
        }
        {
            using _q_method_type = void (MAVLinkConnection::*)(double , double , float );
            if (_q_method_type _q_method = &MAVLinkConnection::homePositionChanged; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 11;
                return;
            }
        }
        {
            using _q_method_type = void (MAVLinkConnection::*)(float );
            if (_q_method_type _q_method = &MAVLinkConnection::distanceFromHomeChanged; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 12;
                return;
            }
        }
        {
            using _q_method_type = void (MAVLinkConnection::*)(const mavlink_sys_status_t & );
            if (_q_method_type _q_method = &MAVLinkConnection::systemStatusChanged; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 13;
                return;
            }
        }
        {
            using _q_method_type = void (MAVLinkConnection::*)(int );
            if (_q_method_type _q_method = &MAVLinkConnection::linkQualityChanged; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 14;
                return;
            }
        }
        {
            using _q_method_type = void (MAVLinkConnection::*)(uint8_t );
            if (_q_method_type _q_method = &MAVLinkConnection::landedStateChanged; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 15;
                return;
            }
        }
        {
            using _q_method_type = void (MAVLinkConnection::*)(uint8_t , uint8_t );
            if (_q_method_type _q_method = &MAVLinkConnection::extendedStateChanged; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 16;
                return;
            }
        }
    }
}

const QMetaObject *MAVLinkConnection::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MAVLinkConnection::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ZN17MAVLinkConnectionE.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int MAVLinkConnection::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 22)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 22;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 22)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 22;
    }
    return _id;
}

// SIGNAL 0
void MAVLinkConnection::connectionStatusChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void MAVLinkConnection::altitudeChanged(float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void MAVLinkConnection::relativeAltitudeChanged(float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void MAVLinkConnection::batteryChanged(float _t1, float _t2, float _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void MAVLinkConnection::heartbeatReceived(const mavlink_heartbeat_t & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void MAVLinkConnection::modeChanged(uint8_t _t1, uint32_t _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void MAVLinkConnection::globalPositionReceived(double _t1, double _t2, float _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void MAVLinkConnection::vfrHudReceived(float _t1, float _t2, float _t3, float _t4)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t4))) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void MAVLinkConnection::attitudeReceived(float _t1, float _t2, float _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}

// SIGNAL 9
void MAVLinkConnection::gpsRawReceived(int _t1, float _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 9, _a);
}

// SIGNAL 10
void MAVLinkConnection::gpsFixTypeChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 10, _a);
}

// SIGNAL 11
void MAVLinkConnection::homePositionChanged(double _t1, double _t2, float _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))) };
    QMetaObject::activate(this, &staticMetaObject, 11, _a);
}

// SIGNAL 12
void MAVLinkConnection::distanceFromHomeChanged(float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 12, _a);
}

// SIGNAL 13
void MAVLinkConnection::systemStatusChanged(const mavlink_sys_status_t & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 13, _a);
}

// SIGNAL 14
void MAVLinkConnection::linkQualityChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 14, _a);
}

// SIGNAL 15
void MAVLinkConnection::landedStateChanged(uint8_t _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 15, _a);
}

// SIGNAL 16
void MAVLinkConnection::extendedStateChanged(uint8_t _t1, uint8_t _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 16, _a);
}
QT_WARNING_POP
