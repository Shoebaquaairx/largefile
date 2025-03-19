/****************************************************************************
** Meta object code from reading C++ file 'gcscontroller.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/controller/gcscontroller.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'gcscontroller.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN13GCSControllerE_t {};
} // unnamed namespace


#ifdef QT_MOC_HAS_STRINGDATA
static constexpr auto qt_meta_stringdata_ZN13GCSControllerE = QtMocHelpers::stringData(
    "GCSController",
    "latitudeChanged",
    "",
    "latitude",
    "longitudeChanged",
    "longitude",
    "altitudeChanged",
    "altitude",
    "relativeAltitudeChanged",
    "relativeAltitude",
    "voltageChanged",
    "voltage",
    "currentChanged",
    "current",
    "batteryPercentChanged",
    "percent",
    "flightModeChanged",
    "mode",
    "armedStateChanged",
    "armed",
    "connectionStateChanged",
    "connected",
    "airSpeedChanged",
    "airSpeed",
    "groundSpeedChanged",
    "groundSpeed",
    "yawChanged",
    "yaw",
    "rollChanged",
    "roll",
    "pitchChanged",
    "pitch",
    "headingChanged",
    "heading",
    "throttleChanged",
    "throttle",
    "gpsFixTypeChanged",
    "fixType",
    "satellitesChanged",
    "satellites",
    "hdopChanged",
    "hdop",
    "distanceFromHomeChanged",
    "distance",
    "landedStateChanged",
    "state",
    "connectVehicle",
    "type",
    "address",
    "port",
    "disconnectVehicle",
    "setFlightMode",
    "batteryPercent",
    "flightMode",
    "isArmed",
    "isConnected",
    "gpsFixType",
    "distanceFromHome",
    "landedState"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA

Q_CONSTINIT static const uint qt_meta_data_ZN13GCSControllerE[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
      25,   14, // methods
      22,  241, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      22,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,  164,    2, 0x06,   23 /* Public */,
       4,    1,  167,    2, 0x06,   25 /* Public */,
       6,    1,  170,    2, 0x06,   27 /* Public */,
       8,    1,  173,    2, 0x06,   29 /* Public */,
      10,    1,  176,    2, 0x06,   31 /* Public */,
      12,    1,  179,    2, 0x06,   33 /* Public */,
      14,    1,  182,    2, 0x06,   35 /* Public */,
      16,    1,  185,    2, 0x06,   37 /* Public */,
      18,    1,  188,    2, 0x06,   39 /* Public */,
      20,    1,  191,    2, 0x06,   41 /* Public */,
      22,    1,  194,    2, 0x06,   43 /* Public */,
      24,    1,  197,    2, 0x06,   45 /* Public */,
      26,    1,  200,    2, 0x06,   47 /* Public */,
      28,    1,  203,    2, 0x06,   49 /* Public */,
      30,    1,  206,    2, 0x06,   51 /* Public */,
      32,    1,  209,    2, 0x06,   53 /* Public */,
      34,    1,  212,    2, 0x06,   55 /* Public */,
      36,    1,  215,    2, 0x06,   57 /* Public */,
      38,    1,  218,    2, 0x06,   59 /* Public */,
      40,    1,  221,    2, 0x06,   61 /* Public */,
      42,    1,  224,    2, 0x06,   63 /* Public */,
      44,    1,  227,    2, 0x06,   65 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
      46,    3,  230,    2, 0x0a,   67 /* Public */,
      50,    0,  237,    2, 0x0a,   71 /* Public */,
      51,    1,  238,    2, 0x0a,   72 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Double,    3,
    QMetaType::Void, QMetaType::Double,    5,
    QMetaType::Void, QMetaType::Double,    7,
    QMetaType::Void, QMetaType::Double,    9,
    QMetaType::Void, QMetaType::Double,   11,
    QMetaType::Void, QMetaType::Double,   13,
    QMetaType::Void, QMetaType::Double,   15,
    QMetaType::Void, QMetaType::QString,   17,
    QMetaType::Void, QMetaType::Bool,   19,
    QMetaType::Void, QMetaType::Bool,   21,
    QMetaType::Void, QMetaType::Double,   23,
    QMetaType::Void, QMetaType::Double,   25,
    QMetaType::Void, QMetaType::Double,   27,
    QMetaType::Void, QMetaType::Double,   29,
    QMetaType::Void, QMetaType::Double,   31,
    QMetaType::Void, QMetaType::Double,   33,
    QMetaType::Void, QMetaType::Double,   35,
    QMetaType::Void, QMetaType::Int,   37,
    QMetaType::Void, QMetaType::Int,   39,
    QMetaType::Void, QMetaType::Double,   41,
    QMetaType::Void, QMetaType::Double,   43,
    QMetaType::Void, QMetaType::QString,   45,

 // slots: parameters
    QMetaType::Bool, QMetaType::QString, QMetaType::QString, QMetaType::Int,   47,   48,   49,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   17,

 // properties: name, type, flags, notifyId, revision
       3, QMetaType::Double, 0x00015001, uint(0), 0,
       5, QMetaType::Double, 0x00015001, uint(1), 0,
       7, QMetaType::Double, 0x00015001, uint(2), 0,
       9, QMetaType::Double, 0x00015001, uint(3), 0,
      11, QMetaType::Double, 0x00015001, uint(4), 0,
      13, QMetaType::Double, 0x00015001, uint(5), 0,
      52, QMetaType::Double, 0x00015001, uint(6), 0,
      53, QMetaType::QString, 0x00015001, uint(7), 0,
      54, QMetaType::Bool, 0x00015001, uint(8), 0,
      55, QMetaType::Bool, 0x00015001, uint(9), 0,
      23, QMetaType::Double, 0x00015001, uint(10), 0,
      25, QMetaType::Double, 0x00015001, uint(11), 0,
      33, QMetaType::Double, 0x00015001, uint(15), 0,
      35, QMetaType::Double, 0x00015001, uint(16), 0,
      56, QMetaType::Int, 0x00015001, uint(17), 0,
      39, QMetaType::Int, 0x00015001, uint(18), 0,
      27, QMetaType::Double, 0x00015001, uint(12), 0,
      29, QMetaType::Double, 0x00015001, uint(13), 0,
      31, QMetaType::Double, 0x00015001, uint(14), 0,
      41, QMetaType::Double, 0x00015001, uint(19), 0,
      57, QMetaType::Double, 0x00015001, uint(20), 0,
      58, QMetaType::QString, 0x00015001, uint(21), 0,

       0        // eod
};

Q_CONSTINIT const QMetaObject GCSController::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_ZN13GCSControllerE.offsetsAndSizes,
    qt_meta_data_ZN13GCSControllerE,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_tag_ZN13GCSControllerE_t,
        // property 'latitude'
        QtPrivate::TypeAndForceComplete<double, std::true_type>,
        // property 'longitude'
        QtPrivate::TypeAndForceComplete<double, std::true_type>,
        // property 'altitude'
        QtPrivate::TypeAndForceComplete<double, std::true_type>,
        // property 'relativeAltitude'
        QtPrivate::TypeAndForceComplete<double, std::true_type>,
        // property 'voltage'
        QtPrivate::TypeAndForceComplete<double, std::true_type>,
        // property 'current'
        QtPrivate::TypeAndForceComplete<double, std::true_type>,
        // property 'batteryPercent'
        QtPrivate::TypeAndForceComplete<double, std::true_type>,
        // property 'flightMode'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // property 'isArmed'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'isConnected'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'airSpeed'
        QtPrivate::TypeAndForceComplete<double, std::true_type>,
        // property 'groundSpeed'
        QtPrivate::TypeAndForceComplete<double, std::true_type>,
        // property 'heading'
        QtPrivate::TypeAndForceComplete<double, std::true_type>,
        // property 'throttle'
        QtPrivate::TypeAndForceComplete<double, std::true_type>,
        // property 'gpsFixType'
        QtPrivate::TypeAndForceComplete<int, std::true_type>,
        // property 'satellites'
        QtPrivate::TypeAndForceComplete<int, std::true_type>,
        // property 'yaw'
        QtPrivate::TypeAndForceComplete<double, std::true_type>,
        // property 'roll'
        QtPrivate::TypeAndForceComplete<double, std::true_type>,
        // property 'pitch'
        QtPrivate::TypeAndForceComplete<double, std::true_type>,
        // property 'hdop'
        QtPrivate::TypeAndForceComplete<double, std::true_type>,
        // property 'distanceFromHome'
        QtPrivate::TypeAndForceComplete<double, std::true_type>,
        // property 'landedState'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<GCSController, std::true_type>,
        // method 'latitudeChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<double, std::false_type>,
        // method 'longitudeChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<double, std::false_type>,
        // method 'altitudeChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<double, std::false_type>,
        // method 'relativeAltitudeChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<double, std::false_type>,
        // method 'voltageChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<double, std::false_type>,
        // method 'currentChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<double, std::false_type>,
        // method 'batteryPercentChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<double, std::false_type>,
        // method 'flightModeChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'armedStateChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'connectionStateChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'airSpeedChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<double, std::false_type>,
        // method 'groundSpeedChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<double, std::false_type>,
        // method 'yawChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<double, std::false_type>,
        // method 'rollChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<double, std::false_type>,
        // method 'pitchChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<double, std::false_type>,
        // method 'headingChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<double, std::false_type>,
        // method 'throttleChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<double, std::false_type>,
        // method 'gpsFixTypeChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'satellitesChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'hdopChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<double, std::false_type>,
        // method 'distanceFromHomeChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<double, std::false_type>,
        // method 'landedStateChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'connectVehicle'
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'disconnectVehicle'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'setFlightMode'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>
    >,
    nullptr
} };

void GCSController::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<GCSController *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->latitudeChanged((*reinterpret_cast< std::add_pointer_t<double>>(_a[1]))); break;
        case 1: _t->longitudeChanged((*reinterpret_cast< std::add_pointer_t<double>>(_a[1]))); break;
        case 2: _t->altitudeChanged((*reinterpret_cast< std::add_pointer_t<double>>(_a[1]))); break;
        case 3: _t->relativeAltitudeChanged((*reinterpret_cast< std::add_pointer_t<double>>(_a[1]))); break;
        case 4: _t->voltageChanged((*reinterpret_cast< std::add_pointer_t<double>>(_a[1]))); break;
        case 5: _t->currentChanged((*reinterpret_cast< std::add_pointer_t<double>>(_a[1]))); break;
        case 6: _t->batteryPercentChanged((*reinterpret_cast< std::add_pointer_t<double>>(_a[1]))); break;
        case 7: _t->flightModeChanged((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 8: _t->armedStateChanged((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 9: _t->connectionStateChanged((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 10: _t->airSpeedChanged((*reinterpret_cast< std::add_pointer_t<double>>(_a[1]))); break;
        case 11: _t->groundSpeedChanged((*reinterpret_cast< std::add_pointer_t<double>>(_a[1]))); break;
        case 12: _t->yawChanged((*reinterpret_cast< std::add_pointer_t<double>>(_a[1]))); break;
        case 13: _t->rollChanged((*reinterpret_cast< std::add_pointer_t<double>>(_a[1]))); break;
        case 14: _t->pitchChanged((*reinterpret_cast< std::add_pointer_t<double>>(_a[1]))); break;
        case 15: _t->headingChanged((*reinterpret_cast< std::add_pointer_t<double>>(_a[1]))); break;
        case 16: _t->throttleChanged((*reinterpret_cast< std::add_pointer_t<double>>(_a[1]))); break;
        case 17: _t->gpsFixTypeChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 18: _t->satellitesChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 19: _t->hdopChanged((*reinterpret_cast< std::add_pointer_t<double>>(_a[1]))); break;
        case 20: _t->distanceFromHomeChanged((*reinterpret_cast< std::add_pointer_t<double>>(_a[1]))); break;
        case 21: _t->landedStateChanged((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 22: { bool _r = _t->connectVehicle((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[3])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 23: _t->disconnectVehicle(); break;
        case 24: _t->setFlightMode((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _q_method_type = void (GCSController::*)(double );
            if (_q_method_type _q_method = &GCSController::latitudeChanged; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _q_method_type = void (GCSController::*)(double );
            if (_q_method_type _q_method = &GCSController::longitudeChanged; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
        {
            using _q_method_type = void (GCSController::*)(double );
            if (_q_method_type _q_method = &GCSController::altitudeChanged; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 2;
                return;
            }
        }
        {
            using _q_method_type = void (GCSController::*)(double );
            if (_q_method_type _q_method = &GCSController::relativeAltitudeChanged; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 3;
                return;
            }
        }
        {
            using _q_method_type = void (GCSController::*)(double );
            if (_q_method_type _q_method = &GCSController::voltageChanged; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 4;
                return;
            }
        }
        {
            using _q_method_type = void (GCSController::*)(double );
            if (_q_method_type _q_method = &GCSController::currentChanged; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 5;
                return;
            }
        }
        {
            using _q_method_type = void (GCSController::*)(double );
            if (_q_method_type _q_method = &GCSController::batteryPercentChanged; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 6;
                return;
            }
        }
        {
            using _q_method_type = void (GCSController::*)(const QString & );
            if (_q_method_type _q_method = &GCSController::flightModeChanged; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 7;
                return;
            }
        }
        {
            using _q_method_type = void (GCSController::*)(bool );
            if (_q_method_type _q_method = &GCSController::armedStateChanged; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 8;
                return;
            }
        }
        {
            using _q_method_type = void (GCSController::*)(bool );
            if (_q_method_type _q_method = &GCSController::connectionStateChanged; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 9;
                return;
            }
        }
        {
            using _q_method_type = void (GCSController::*)(double );
            if (_q_method_type _q_method = &GCSController::airSpeedChanged; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 10;
                return;
            }
        }
        {
            using _q_method_type = void (GCSController::*)(double );
            if (_q_method_type _q_method = &GCSController::groundSpeedChanged; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 11;
                return;
            }
        }
        {
            using _q_method_type = void (GCSController::*)(double );
            if (_q_method_type _q_method = &GCSController::yawChanged; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 12;
                return;
            }
        }
        {
            using _q_method_type = void (GCSController::*)(double );
            if (_q_method_type _q_method = &GCSController::rollChanged; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 13;
                return;
            }
        }
        {
            using _q_method_type = void (GCSController::*)(double );
            if (_q_method_type _q_method = &GCSController::pitchChanged; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 14;
                return;
            }
        }
        {
            using _q_method_type = void (GCSController::*)(double );
            if (_q_method_type _q_method = &GCSController::headingChanged; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 15;
                return;
            }
        }
        {
            using _q_method_type = void (GCSController::*)(double );
            if (_q_method_type _q_method = &GCSController::throttleChanged; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 16;
                return;
            }
        }
        {
            using _q_method_type = void (GCSController::*)(int );
            if (_q_method_type _q_method = &GCSController::gpsFixTypeChanged; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 17;
                return;
            }
        }
        {
            using _q_method_type = void (GCSController::*)(int );
            if (_q_method_type _q_method = &GCSController::satellitesChanged; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 18;
                return;
            }
        }
        {
            using _q_method_type = void (GCSController::*)(double );
            if (_q_method_type _q_method = &GCSController::hdopChanged; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 19;
                return;
            }
        }
        {
            using _q_method_type = void (GCSController::*)(double );
            if (_q_method_type _q_method = &GCSController::distanceFromHomeChanged; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 20;
                return;
            }
        }
        {
            using _q_method_type = void (GCSController::*)(const QString & );
            if (_q_method_type _q_method = &GCSController::landedStateChanged; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 21;
                return;
            }
        }
    }
    if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< double*>(_v) = _t->latitude(); break;
        case 1: *reinterpret_cast< double*>(_v) = _t->longitude(); break;
        case 2: *reinterpret_cast< double*>(_v) = _t->altitude(); break;
        case 3: *reinterpret_cast< double*>(_v) = _t->relativeAltitude(); break;
        case 4: *reinterpret_cast< double*>(_v) = _t->voltage(); break;
        case 5: *reinterpret_cast< double*>(_v) = _t->current(); break;
        case 6: *reinterpret_cast< double*>(_v) = _t->batteryPercent(); break;
        case 7: *reinterpret_cast< QString*>(_v) = _t->flightMode(); break;
        case 8: *reinterpret_cast< bool*>(_v) = _t->isArmed(); break;
        case 9: *reinterpret_cast< bool*>(_v) = _t->isConnected(); break;
        case 10: *reinterpret_cast< double*>(_v) = _t->airSpeed(); break;
        case 11: *reinterpret_cast< double*>(_v) = _t->groundSpeed(); break;
        case 12: *reinterpret_cast< double*>(_v) = _t->heading(); break;
        case 13: *reinterpret_cast< double*>(_v) = _t->throttle(); break;
        case 14: *reinterpret_cast< int*>(_v) = _t->gpsFixType(); break;
        case 15: *reinterpret_cast< int*>(_v) = _t->satellites(); break;
        case 16: *reinterpret_cast< double*>(_v) = _t->yaw(); break;
        case 17: *reinterpret_cast< double*>(_v) = _t->roll(); break;
        case 18: *reinterpret_cast< double*>(_v) = _t->pitch(); break;
        case 19: *reinterpret_cast< double*>(_v) = _t->hdop(); break;
        case 20: *reinterpret_cast< double*>(_v) = _t->distanceFromHome(); break;
        case 21: *reinterpret_cast< QString*>(_v) = _t->landedState(); break;
        default: break;
        }
    }
}

const QMetaObject *GCSController::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *GCSController::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ZN13GCSControllerE.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int GCSController::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 25)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 25;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 25)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 25;
    }
    if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 22;
    }
    return _id;
}

// SIGNAL 0
void GCSController::latitudeChanged(double _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void GCSController::longitudeChanged(double _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void GCSController::altitudeChanged(double _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void GCSController::relativeAltitudeChanged(double _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void GCSController::voltageChanged(double _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void GCSController::currentChanged(double _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void GCSController::batteryPercentChanged(double _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void GCSController::flightModeChanged(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void GCSController::armedStateChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}

// SIGNAL 9
void GCSController::connectionStateChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 9, _a);
}

// SIGNAL 10
void GCSController::airSpeedChanged(double _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 10, _a);
}

// SIGNAL 11
void GCSController::groundSpeedChanged(double _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 11, _a);
}

// SIGNAL 12
void GCSController::yawChanged(double _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 12, _a);
}

// SIGNAL 13
void GCSController::rollChanged(double _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 13, _a);
}

// SIGNAL 14
void GCSController::pitchChanged(double _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 14, _a);
}

// SIGNAL 15
void GCSController::headingChanged(double _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 15, _a);
}

// SIGNAL 16
void GCSController::throttleChanged(double _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 16, _a);
}

// SIGNAL 17
void GCSController::gpsFixTypeChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 17, _a);
}

// SIGNAL 18
void GCSController::satellitesChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 18, _a);
}

// SIGNAL 19
void GCSController::hdopChanged(double _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 19, _a);
}

// SIGNAL 20
void GCSController::distanceFromHomeChanged(double _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 20, _a);
}

// SIGNAL 21
void GCSController::landedStateChanged(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 21, _a);
}
QT_WARNING_POP
