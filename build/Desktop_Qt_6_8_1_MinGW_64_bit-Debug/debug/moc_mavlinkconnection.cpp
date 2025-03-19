/****************************************************************************
** Meta object code from reading C++ file 'mavlinkconnection.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/mavlink/mavlinkconnection.h"
#include <QtCore/qmetatype.h>
#include <QtCore/QList>

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
    "speedUpdated",
    "airspeed",
    "groundspeed",
    "depthChanged",
    "depth",
    "waterTemperatureChanged",
    "temperature",
    "escDataChanged",
    "id",
    "rpm",
    "servoOutputChanged",
    "QList<uint16_t>",
    "servoValues",
    "imuTemperatureChanged",
    "imuDataChanged",
    "accel_x",
    "accel_y",
    "accel_z",
    "gyro_x",
    "gyro_y",
    "gyro_z",
    "mag_x",
    "mag_y",
    "mag_z",
    "pressureChanged",
    "abs_pressure",
    "diff_pressure",
    "rangefinderDistanceChanged",
    "distance",
    "modeChanged",
    "uint8_t",
    "base_mode",
    "uint32_t",
    "custom_mode",
    "globalPositionReceived",
    "latitude",
    "longitude",
    "vfrHudReceived",
    "heading",
    "throttle",
    "attitudeReceived",
    "roll",
    "pitch",
    "yaw",
    "gpsRawReceived",
    "satellites",
    "hdop",
    "signalDataChanged",
    "localRSSI",
    "remoteRSSI",
    "localNoise",
    "remoteNoise",
    "errorsFixed",
    "txBuffer",
    "rxError",
    "gpsFixTypeChanged",
    "fix_type",
    "homePositionChanged",
    "lat",
    "lon",
    "alt",
    "distanceFromHomeChanged",
    "systemStatusChanged",
    "mavlink_sys_status_t",
    "status",
    "linkQualityChanged",
    "quality",
    "landedStateChanged",
    "landed_state",
    "extendedStateChanged",
    "vtol_state",
    "statusTextReceived",
    "severity",
    "text",
    "notificationReceived",
    "errorReceived",
    "parameterReceived",
    "name",
    "value",
    "parametersComplete",
    "homePositionUpdated",
    "fromVehicle",
    "vehicleTypeChanged",
    "type",
    "commandFailed",
    "message",
    "initializationStarted",
    "armingStateChanged",
    "armed",
    "vehicleStateChanged",
    "VehicleState",
    "state",
    "preArmCheckFailed",
    "preArmCheckPassed",
    "sensorHealthChanged",
    "healthy",
    "missionUploadProgress",
    "progress",
    "missionDownloadProgress",
    "missionTransferComplete",
    "missionTransferFailed",
    "reason",
    "parameterSetSuccess",
    "parameterSetFailed",
    "calibrationStep",
    "step",
    "completed",
    "calibrationMessage",
    "accelCalibrationProgress",
    "accelCalibrationPositionRequired",
    "position",
    "accelCalibrationStatus",
    "accelCalibrationComplete",
    "success",
    "compassCalibrationProgress",
    "progress0",
    "progress1",
    "progress2",
    "compassCalibrationStep",
    "instruction",
    "compassCalibrationStatus",
    "compassCalibrationCompleted",
    "rcCalibrationProgress",
    "rcCalibrationStatus",
    "rcCalibrationChannelChanged",
    "channel",
    "min",
    "max",
    "trim",
    "rcCalibrationComplete",
    "rcRawChannelChanged",
    "escCalibrationProgress",
    "escCalibrationStatus",
    "escCalibrationMotorValue",
    "motorId",
    "escCalibrationComplete",
    "handleTcpData",
    "handleUdpData",
    "handleSerialData",
    "sendHeartbeat",
    "checkConnectionHealth",
    "handleSerialError",
    "QSerialPort::SerialPortError",
    "error",
    "setupHeartbeat",
    "initializeStreamRates",
    "setStreamRates",
    "ConnectionType",
    "initializeVehicleConnection",
    "resetSerialPort",
    "attemptReconnection",
    "handleCompassCalTimeout",
    "processCompassCalibrationStatus",
    "mavlink_message_t",
    "msg",
    "VEHICLE_UNKNOWN",
    "VEHICLE_NOT_READY",
    "VEHICLE_READY",
    "VEHICLE_ARMED",
    "VEHICLE_FLYING",
    "VEHICLE_LANDING",
    "VEHICLE_LANDED"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA

Q_CONSTINIT static const uint qt_meta_data_ZN17MAVLinkConnectionE[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
      80,   14, // methods
       0,    0, // properties
       1,  818, // enums/sets
       0,    0, // constructors
       0,       // flags
      66,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,  494,    2, 0x06,    2 /* Public */,
       4,    1,  497,    2, 0x06,    4 /* Public */,
       6,    1,  500,    2, 0x06,    6 /* Public */,
       8,    3,  503,    2, 0x06,    8 /* Public */,
      12,    1,  510,    2, 0x06,   12 /* Public */,
      15,    2,  513,    2, 0x06,   14 /* Public */,
      18,    1,  518,    2, 0x06,   17 /* Public */,
      20,    1,  521,    2, 0x06,   19 /* Public */,
      22,    5,  524,    2, 0x06,   21 /* Public */,
      25,    1,  535,    2, 0x06,   27 /* Public */,
      28,    2,  538,    2, 0x06,   29 /* Public */,
      29,   10,  543,    2, 0x06,   32 /* Public */,
      39,    2,  564,    2, 0x06,   43 /* Public */,
      42,    1,  569,    2, 0x06,   46 /* Public */,
      44,    2,  572,    2, 0x06,   48 /* Public */,
      49,    3,  577,    2, 0x06,   51 /* Public */,
      52,    4,  584,    2, 0x06,   55 /* Public */,
      55,    3,  593,    2, 0x06,   60 /* Public */,
      59,    2,  600,    2, 0x06,   64 /* Public */,
      62,    7,  605,    2, 0x06,   67 /* Public */,
      70,    1,  620,    2, 0x06,   75 /* Public */,
      72,    3,  623,    2, 0x06,   77 /* Public */,
      76,    1,  630,    2, 0x06,   81 /* Public */,
      77,    1,  633,    2, 0x06,   83 /* Public */,
      80,    1,  636,    2, 0x06,   85 /* Public */,
      82,    1,  639,    2, 0x06,   87 /* Public */,
      84,    2,  642,    2, 0x06,   89 /* Public */,
      86,    2,  647,    2, 0x06,   92 /* Public */,
      89,    1,  652,    2, 0x06,   95 /* Public */,
      90,    1,  655,    2, 0x06,   97 /* Public */,
      91,    2,  658,    2, 0x06,   99 /* Public */,
      94,    0,  663,    2, 0x06,  102 /* Public */,
      95,    4,  664,    2, 0x06,  103 /* Public */,
      97,    1,  673,    2, 0x06,  108 /* Public */,
      99,    1,  676,    2, 0x06,  110 /* Public */,
     101,    0,  679,    2, 0x06,  112 /* Public */,
     102,    1,  680,    2, 0x06,  113 /* Public */,
     104,    1,  683,    2, 0x06,  115 /* Public */,
     107,    1,  686,    2, 0x06,  117 /* Public */,
     108,    1,  689,    2, 0x06,  119 /* Public */,
     109,    1,  692,    2, 0x06,  121 /* Public */,
     111,    1,  695,    2, 0x06,  123 /* Public */,
     113,    1,  698,    2, 0x06,  125 /* Public */,
     114,    0,  701,    2, 0x06,  127 /* Public */,
     115,    1,  702,    2, 0x06,  128 /* Public */,
     117,    2,  705,    2, 0x06,  130 /* Public */,
     118,    1,  710,    2, 0x06,  133 /* Public */,
     119,    2,  713,    2, 0x06,  135 /* Public */,
     122,    1,  718,    2, 0x06,  138 /* Public */,
     123,    2,  721,    2, 0x06,  140 /* Public */,
     124,    1,  726,    2, 0x06,  143 /* Public */,
     126,    2,  729,    2, 0x06,  145 /* Public */,
     127,    1,  734,    2, 0x06,  148 /* Public */,
     129,    3,  737,    2, 0x06,  150 /* Public */,
     133,    1,  744,    2, 0x06,  154 /* Public */,
     135,    2,  747,    2, 0x06,  156 /* Public */,
     136,    1,  752,    2, 0x06,  159 /* Public */,
     137,    1,  755,    2, 0x06,  161 /* Public */,
     138,    2,  758,    2, 0x06,  163 /* Public */,
     139,    5,  763,    2, 0x06,  166 /* Public */,
     144,    1,  774,    2, 0x06,  172 /* Public */,
     145,    2,  777,    2, 0x06,  174 /* Public */,
     146,    1,  782,    2, 0x06,  177 /* Public */,
     147,    2,  785,    2, 0x06,  179 /* Public */,
     148,    2,  790,    2, 0x06,  182 /* Public */,
     150,    1,  795,    2, 0x06,  185 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
     151,    0,  798,    2, 0x08,  187 /* Private */,
     152,    0,  799,    2, 0x08,  188 /* Private */,
     153,    0,  800,    2, 0x08,  189 /* Private */,
     154,    0,  801,    2, 0x08,  190 /* Private */,
     155,    0,  802,    2, 0x08,  191 /* Private */,
     156,    1,  803,    2, 0x08,  192 /* Private */,
     159,    0,  806,    2, 0x08,  194 /* Private */,
     160,    0,  807,    2, 0x08,  195 /* Private */,
     161,    1,  808,    2, 0x08,  196 /* Private */,
     163,    0,  811,    2, 0x08,  198 /* Private */,
     164,    0,  812,    2, 0x08,  199 /* Private */,
     165,    0,  813,    2, 0x08,  200 /* Private */,
     166,    0,  814,    2, 0x08,  201 /* Private */,
     167,    1,  815,    2, 0x08,  202 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, QMetaType::Float,    5,
    QMetaType::Void, QMetaType::Float,    7,
    QMetaType::Void, QMetaType::Float, QMetaType::Float, QMetaType::Float,    9,   10,   11,
    QMetaType::Void, 0x80000000 | 13,   14,
    QMetaType::Void, QMetaType::Float, QMetaType::Float,   16,   17,
    QMetaType::Void, QMetaType::Float,   19,
    QMetaType::Void, QMetaType::Float,   21,
    QMetaType::Void, QMetaType::Int, QMetaType::Float, QMetaType::Float, QMetaType::Float, QMetaType::Float,   23,    9,   10,   21,   24,
    QMetaType::Void, 0x80000000 | 26,   27,
    QMetaType::Void, QMetaType::Int, QMetaType::Float,   23,   21,
    QMetaType::Void, QMetaType::Int, QMetaType::Float, QMetaType::Float, QMetaType::Float, QMetaType::Float, QMetaType::Float, QMetaType::Float, QMetaType::Float, QMetaType::Float, QMetaType::Float,   23,   30,   31,   32,   33,   34,   35,   36,   37,   38,
    QMetaType::Void, QMetaType::Float, QMetaType::Float,   40,   41,
    QMetaType::Void, QMetaType::Float,   43,
    QMetaType::Void, 0x80000000 | 45, 0x80000000 | 47,   46,   48,
    QMetaType::Void, QMetaType::Double, QMetaType::Double, QMetaType::Float,   50,   51,    5,
    QMetaType::Void, QMetaType::Float, QMetaType::Float, QMetaType::Float, QMetaType::Float,   16,   17,   53,   54,
    QMetaType::Void, QMetaType::Float, QMetaType::Float, QMetaType::Float,   56,   57,   58,
    QMetaType::Void, QMetaType::Int, QMetaType::Float,   60,   61,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::Int, QMetaType::Int, QMetaType::Int, QMetaType::Int, QMetaType::Int,   63,   64,   65,   66,   67,   68,   69,
    QMetaType::Void, QMetaType::Int,   71,
    QMetaType::Void, QMetaType::Double, QMetaType::Double, QMetaType::Float,   73,   74,   75,
    QMetaType::Void, QMetaType::Float,   43,
    QMetaType::Void, 0x80000000 | 78,   79,
    QMetaType::Void, QMetaType::Int,   81,
    QMetaType::Void, 0x80000000 | 45,   83,
    QMetaType::Void, 0x80000000 | 45, 0x80000000 | 45,   85,   83,
    QMetaType::Void, QMetaType::Int, QMetaType::QString,   87,   88,
    QMetaType::Void, QMetaType::QString,   88,
    QMetaType::Void, QMetaType::QString,   88,
    QMetaType::Void, QMetaType::QString, QMetaType::Float,   92,   93,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Double, QMetaType::Double, QMetaType::Float, QMetaType::Bool,   50,   51,    5,   96,
    QMetaType::Void, QMetaType::Int,   98,
    QMetaType::Void, QMetaType::QString,  100,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,  103,
    QMetaType::Void, 0x80000000 | 105,  106,
    QMetaType::Void, QMetaType::QString,  100,
    QMetaType::Void, QMetaType::QString,  100,
    QMetaType::Void, QMetaType::Bool,  110,
    QMetaType::Void, QMetaType::Float,  112,
    QMetaType::Void, QMetaType::Float,  112,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,  116,
    QMetaType::Void, QMetaType::QString, QMetaType::Float,   92,   93,
    QMetaType::Void, QMetaType::QString,   92,
    QMetaType::Void, QMetaType::QString, QMetaType::Bool,  120,  121,
    QMetaType::Void, QMetaType::QString,  100,
    QMetaType::Void, QMetaType::Float, QMetaType::Int,  112,  120,
    QMetaType::Void, QMetaType::Int,  125,
    QMetaType::Void, QMetaType::Int, QMetaType::QString,  106,  100,
    QMetaType::Void, QMetaType::Bool,  128,
    QMetaType::Void, QMetaType::Float, QMetaType::Float, QMetaType::Float,  130,  131,  132,
    QMetaType::Void, QMetaType::QString,  134,
    QMetaType::Void, QMetaType::Int, QMetaType::QString,  106,  100,
    QMetaType::Void, QMetaType::Bool,  128,
    QMetaType::Void, QMetaType::Float,  112,
    QMetaType::Void, QMetaType::Int, QMetaType::QString,  106,  100,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::Int, QMetaType::Int, QMetaType::Int,  140,   93,  141,  142,  143,
    QMetaType::Void, QMetaType::Bool,  128,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,  140,   93,
    QMetaType::Void, QMetaType::Float,  112,
    QMetaType::Void, QMetaType::Int, QMetaType::QString,  106,  100,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,  149,   93,
    QMetaType::Void, QMetaType::Bool,  128,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 157,  158,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 162,   98,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 168,  169,

 // enums: name, alias, flags, count, data
     105,  105, 0x0,    7,  823,

 // enum data: key, value
     170, uint(MAVLinkConnection::VEHICLE_UNKNOWN),
     171, uint(MAVLinkConnection::VEHICLE_NOT_READY),
     172, uint(MAVLinkConnection::VEHICLE_READY),
     173, uint(MAVLinkConnection::VEHICLE_ARMED),
     174, uint(MAVLinkConnection::VEHICLE_FLYING),
     175, uint(MAVLinkConnection::VEHICLE_LANDING),
     176, uint(MAVLinkConnection::VEHICLE_LANDED),

       0        // eod
};

Q_CONSTINIT const QMetaObject MAVLinkConnection::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_ZN17MAVLinkConnectionE.offsetsAndSizes,
    qt_meta_data_ZN17MAVLinkConnectionE,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_tag_ZN17MAVLinkConnectionE_t,
        // enum 'VehicleState'
        QtPrivate::TypeAndForceComplete<MAVLinkConnection::VehicleState, std::true_type>,
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
        // method 'speedUpdated'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<float, std::false_type>,
        QtPrivate::TypeAndForceComplete<float, std::false_type>,
        // method 'depthChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<float, std::false_type>,
        // method 'waterTemperatureChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<float, std::false_type>,
        // method 'escDataChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<float, std::false_type>,
        QtPrivate::TypeAndForceComplete<float, std::false_type>,
        QtPrivate::TypeAndForceComplete<float, std::false_type>,
        QtPrivate::TypeAndForceComplete<float, std::false_type>,
        // method 'servoOutputChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QVector<uint16_t>, std::false_type>,
        // method 'imuTemperatureChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<float, std::false_type>,
        // method 'imuDataChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<float, std::false_type>,
        QtPrivate::TypeAndForceComplete<float, std::false_type>,
        QtPrivate::TypeAndForceComplete<float, std::false_type>,
        QtPrivate::TypeAndForceComplete<float, std::false_type>,
        QtPrivate::TypeAndForceComplete<float, std::false_type>,
        QtPrivate::TypeAndForceComplete<float, std::false_type>,
        QtPrivate::TypeAndForceComplete<float, std::false_type>,
        QtPrivate::TypeAndForceComplete<float, std::false_type>,
        QtPrivate::TypeAndForceComplete<float, std::false_type>,
        // method 'pressureChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<float, std::false_type>,
        QtPrivate::TypeAndForceComplete<float, std::false_type>,
        // method 'rangefinderDistanceChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<float, std::false_type>,
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
        // method 'signalDataChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
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
        // method 'statusTextReceived'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'notificationReceived'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'errorReceived'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'parameterReceived'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        QtPrivate::TypeAndForceComplete<float, std::false_type>,
        // method 'parametersComplete'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'homePositionUpdated'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<double, std::false_type>,
        QtPrivate::TypeAndForceComplete<double, std::false_type>,
        QtPrivate::TypeAndForceComplete<float, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'vehicleTypeChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'commandFailed'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'initializationStarted'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'armingStateChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'vehicleStateChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<VehicleState, std::false_type>,
        // method 'preArmCheckFailed'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'preArmCheckPassed'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'sensorHealthChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'missionUploadProgress'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<float, std::false_type>,
        // method 'missionDownloadProgress'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<float, std::false_type>,
        // method 'missionTransferComplete'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'missionTransferFailed'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'parameterSetSuccess'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        QtPrivate::TypeAndForceComplete<float, std::false_type>,
        // method 'parameterSetFailed'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'calibrationStep'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'calibrationMessage'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'accelCalibrationProgress'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<float, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'accelCalibrationPositionRequired'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'accelCalibrationStatus'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'accelCalibrationComplete'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'compassCalibrationProgress'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<float, std::false_type>,
        QtPrivate::TypeAndForceComplete<float, std::false_type>,
        QtPrivate::TypeAndForceComplete<float, std::false_type>,
        // method 'compassCalibrationStep'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'compassCalibrationStatus'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'compassCalibrationCompleted'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'rcCalibrationProgress'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<float, std::false_type>,
        // method 'rcCalibrationStatus'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'rcCalibrationChannelChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'rcCalibrationComplete'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'rcRawChannelChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'escCalibrationProgress'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<float, std::false_type>,
        // method 'escCalibrationStatus'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'escCalibrationMotorValue'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'escCalibrationComplete'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'handleTcpData'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'handleUdpData'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'handleSerialData'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'sendHeartbeat'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'checkConnectionHealth'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'handleSerialError'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QSerialPort::SerialPortError, std::false_type>,
        // method 'setupHeartbeat'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'initializeStreamRates'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'setStreamRates'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<ConnectionType, std::false_type>,
        // method 'initializeVehicleConnection'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'resetSerialPort'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'attemptReconnection'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'handleCompassCalTimeout'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'processCompassCalibrationStatus'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const mavlink_message_t &, std::false_type>
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
        case 5: _t->speedUpdated((*reinterpret_cast< std::add_pointer_t<float>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<float>>(_a[2]))); break;
        case 6: _t->depthChanged((*reinterpret_cast< std::add_pointer_t<float>>(_a[1]))); break;
        case 7: _t->waterTemperatureChanged((*reinterpret_cast< std::add_pointer_t<float>>(_a[1]))); break;
        case 8: _t->escDataChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<float>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<float>>(_a[3])),(*reinterpret_cast< std::add_pointer_t<float>>(_a[4])),(*reinterpret_cast< std::add_pointer_t<float>>(_a[5]))); break;
        case 9: _t->servoOutputChanged((*reinterpret_cast< std::add_pointer_t<QList<uint16_t>>>(_a[1]))); break;
        case 10: _t->imuTemperatureChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<float>>(_a[2]))); break;
        case 11: _t->imuDataChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<float>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<float>>(_a[3])),(*reinterpret_cast< std::add_pointer_t<float>>(_a[4])),(*reinterpret_cast< std::add_pointer_t<float>>(_a[5])),(*reinterpret_cast< std::add_pointer_t<float>>(_a[6])),(*reinterpret_cast< std::add_pointer_t<float>>(_a[7])),(*reinterpret_cast< std::add_pointer_t<float>>(_a[8])),(*reinterpret_cast< std::add_pointer_t<float>>(_a[9])),(*reinterpret_cast< std::add_pointer_t<float>>(_a[10]))); break;
        case 12: _t->pressureChanged((*reinterpret_cast< std::add_pointer_t<float>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<float>>(_a[2]))); break;
        case 13: _t->rangefinderDistanceChanged((*reinterpret_cast< std::add_pointer_t<float>>(_a[1]))); break;
        case 14: _t->modeChanged((*reinterpret_cast< std::add_pointer_t<uint8_t>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<uint32_t>>(_a[2]))); break;
        case 15: _t->globalPositionReceived((*reinterpret_cast< std::add_pointer_t<double>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<double>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<float>>(_a[3]))); break;
        case 16: _t->vfrHudReceived((*reinterpret_cast< std::add_pointer_t<float>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<float>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<float>>(_a[3])),(*reinterpret_cast< std::add_pointer_t<float>>(_a[4]))); break;
        case 17: _t->attitudeReceived((*reinterpret_cast< std::add_pointer_t<float>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<float>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<float>>(_a[3]))); break;
        case 18: _t->gpsRawReceived((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<float>>(_a[2]))); break;
        case 19: _t->signalDataChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[3])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[4])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[5])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[6])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[7]))); break;
        case 20: _t->gpsFixTypeChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 21: _t->homePositionChanged((*reinterpret_cast< std::add_pointer_t<double>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<double>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<float>>(_a[3]))); break;
        case 22: _t->distanceFromHomeChanged((*reinterpret_cast< std::add_pointer_t<float>>(_a[1]))); break;
        case 23: _t->systemStatusChanged((*reinterpret_cast< std::add_pointer_t<mavlink_sys_status_t>>(_a[1]))); break;
        case 24: _t->linkQualityChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 25: _t->landedStateChanged((*reinterpret_cast< std::add_pointer_t<uint8_t>>(_a[1]))); break;
        case 26: _t->extendedStateChanged((*reinterpret_cast< std::add_pointer_t<uint8_t>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<uint8_t>>(_a[2]))); break;
        case 27: _t->statusTextReceived((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2]))); break;
        case 28: _t->notificationReceived((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 29: _t->errorReceived((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 30: _t->parameterReceived((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<float>>(_a[2]))); break;
        case 31: _t->parametersComplete(); break;
        case 32: _t->homePositionUpdated((*reinterpret_cast< std::add_pointer_t<double>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<double>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<float>>(_a[3])),(*reinterpret_cast< std::add_pointer_t<bool>>(_a[4]))); break;
        case 33: _t->vehicleTypeChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 34: _t->commandFailed((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 35: _t->initializationStarted(); break;
        case 36: _t->armingStateChanged((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 37: _t->vehicleStateChanged((*reinterpret_cast< std::add_pointer_t<VehicleState>>(_a[1]))); break;
        case 38: _t->preArmCheckFailed((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 39: _t->preArmCheckPassed((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 40: _t->sensorHealthChanged((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 41: _t->missionUploadProgress((*reinterpret_cast< std::add_pointer_t<float>>(_a[1]))); break;
        case 42: _t->missionDownloadProgress((*reinterpret_cast< std::add_pointer_t<float>>(_a[1]))); break;
        case 43: _t->missionTransferComplete(); break;
        case 44: _t->missionTransferFailed((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 45: _t->parameterSetSuccess((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<float>>(_a[2]))); break;
        case 46: _t->parameterSetFailed((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 47: _t->calibrationStep((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<bool>>(_a[2]))); break;
        case 48: _t->calibrationMessage((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 49: _t->accelCalibrationProgress((*reinterpret_cast< std::add_pointer_t<float>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2]))); break;
        case 50: _t->accelCalibrationPositionRequired((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 51: _t->accelCalibrationStatus((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2]))); break;
        case 52: _t->accelCalibrationComplete((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 53: _t->compassCalibrationProgress((*reinterpret_cast< std::add_pointer_t<float>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<float>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<float>>(_a[3]))); break;
        case 54: _t->compassCalibrationStep((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 55: _t->compassCalibrationStatus((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2]))); break;
        case 56: _t->compassCalibrationCompleted((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 57: _t->rcCalibrationProgress((*reinterpret_cast< std::add_pointer_t<float>>(_a[1]))); break;
        case 58: _t->rcCalibrationStatus((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2]))); break;
        case 59: _t->rcCalibrationChannelChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[3])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[4])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[5]))); break;
        case 60: _t->rcCalibrationComplete((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 61: _t->rcRawChannelChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2]))); break;
        case 62: _t->escCalibrationProgress((*reinterpret_cast< std::add_pointer_t<float>>(_a[1]))); break;
        case 63: _t->escCalibrationStatus((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2]))); break;
        case 64: _t->escCalibrationMotorValue((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2]))); break;
        case 65: _t->escCalibrationComplete((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 66: _t->handleTcpData(); break;
        case 67: _t->handleUdpData(); break;
        case 68: _t->handleSerialData(); break;
        case 69: _t->sendHeartbeat(); break;
        case 70: _t->checkConnectionHealth(); break;
        case 71: _t->handleSerialError((*reinterpret_cast< std::add_pointer_t<QSerialPort::SerialPortError>>(_a[1]))); break;
        case 72: _t->setupHeartbeat(); break;
        case 73: _t->initializeStreamRates(); break;
        case 74: _t->setStreamRates((*reinterpret_cast< std::add_pointer_t<ConnectionType>>(_a[1]))); break;
        case 75: _t->initializeVehicleConnection(); break;
        case 76: _t->resetSerialPort(); break;
        case 77: _t->attemptReconnection(); break;
        case 78: _t->handleCompassCalTimeout(); break;
        case 79: _t->processCompassCalibrationStatus((*reinterpret_cast< std::add_pointer_t<mavlink_message_t>>(_a[1]))); break;
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
            using _q_method_type = void (MAVLinkConnection::*)(float , float );
            if (_q_method_type _q_method = &MAVLinkConnection::speedUpdated; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 5;
                return;
            }
        }
        {
            using _q_method_type = void (MAVLinkConnection::*)(float );
            if (_q_method_type _q_method = &MAVLinkConnection::depthChanged; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 6;
                return;
            }
        }
        {
            using _q_method_type = void (MAVLinkConnection::*)(float );
            if (_q_method_type _q_method = &MAVLinkConnection::waterTemperatureChanged; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 7;
                return;
            }
        }
        {
            using _q_method_type = void (MAVLinkConnection::*)(int , float , float , float , float );
            if (_q_method_type _q_method = &MAVLinkConnection::escDataChanged; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 8;
                return;
            }
        }
        {
            using _q_method_type = void (MAVLinkConnection::*)(QVector<uint16_t> );
            if (_q_method_type _q_method = &MAVLinkConnection::servoOutputChanged; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 9;
                return;
            }
        }
        {
            using _q_method_type = void (MAVLinkConnection::*)(int , float );
            if (_q_method_type _q_method = &MAVLinkConnection::imuTemperatureChanged; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 10;
                return;
            }
        }
        {
            using _q_method_type = void (MAVLinkConnection::*)(int , float , float , float , float , float , float , float , float , float );
            if (_q_method_type _q_method = &MAVLinkConnection::imuDataChanged; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 11;
                return;
            }
        }
        {
            using _q_method_type = void (MAVLinkConnection::*)(float , float );
            if (_q_method_type _q_method = &MAVLinkConnection::pressureChanged; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 12;
                return;
            }
        }
        {
            using _q_method_type = void (MAVLinkConnection::*)(float );
            if (_q_method_type _q_method = &MAVLinkConnection::rangefinderDistanceChanged; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 13;
                return;
            }
        }
        {
            using _q_method_type = void (MAVLinkConnection::*)(uint8_t , uint32_t );
            if (_q_method_type _q_method = &MAVLinkConnection::modeChanged; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 14;
                return;
            }
        }
        {
            using _q_method_type = void (MAVLinkConnection::*)(double , double , float );
            if (_q_method_type _q_method = &MAVLinkConnection::globalPositionReceived; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 15;
                return;
            }
        }
        {
            using _q_method_type = void (MAVLinkConnection::*)(float , float , float , float );
            if (_q_method_type _q_method = &MAVLinkConnection::vfrHudReceived; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 16;
                return;
            }
        }
        {
            using _q_method_type = void (MAVLinkConnection::*)(float , float , float );
            if (_q_method_type _q_method = &MAVLinkConnection::attitudeReceived; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 17;
                return;
            }
        }
        {
            using _q_method_type = void (MAVLinkConnection::*)(int , float );
            if (_q_method_type _q_method = &MAVLinkConnection::gpsRawReceived; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 18;
                return;
            }
        }
        {
            using _q_method_type = void (MAVLinkConnection::*)(int , int , int , int , int , int , int );
            if (_q_method_type _q_method = &MAVLinkConnection::signalDataChanged; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 19;
                return;
            }
        }
        {
            using _q_method_type = void (MAVLinkConnection::*)(int );
            if (_q_method_type _q_method = &MAVLinkConnection::gpsFixTypeChanged; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 20;
                return;
            }
        }
        {
            using _q_method_type = void (MAVLinkConnection::*)(double , double , float );
            if (_q_method_type _q_method = &MAVLinkConnection::homePositionChanged; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 21;
                return;
            }
        }
        {
            using _q_method_type = void (MAVLinkConnection::*)(float );
            if (_q_method_type _q_method = &MAVLinkConnection::distanceFromHomeChanged; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 22;
                return;
            }
        }
        {
            using _q_method_type = void (MAVLinkConnection::*)(const mavlink_sys_status_t & );
            if (_q_method_type _q_method = &MAVLinkConnection::systemStatusChanged; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 23;
                return;
            }
        }
        {
            using _q_method_type = void (MAVLinkConnection::*)(int );
            if (_q_method_type _q_method = &MAVLinkConnection::linkQualityChanged; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 24;
                return;
            }
        }
        {
            using _q_method_type = void (MAVLinkConnection::*)(uint8_t );
            if (_q_method_type _q_method = &MAVLinkConnection::landedStateChanged; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 25;
                return;
            }
        }
        {
            using _q_method_type = void (MAVLinkConnection::*)(uint8_t , uint8_t );
            if (_q_method_type _q_method = &MAVLinkConnection::extendedStateChanged; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 26;
                return;
            }
        }
        {
            using _q_method_type = void (MAVLinkConnection::*)(int , QString );
            if (_q_method_type _q_method = &MAVLinkConnection::statusTextReceived; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 27;
                return;
            }
        }
        {
            using _q_method_type = void (MAVLinkConnection::*)(QString );
            if (_q_method_type _q_method = &MAVLinkConnection::notificationReceived; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 28;
                return;
            }
        }
        {
            using _q_method_type = void (MAVLinkConnection::*)(QString );
            if (_q_method_type _q_method = &MAVLinkConnection::errorReceived; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 29;
                return;
            }
        }
        {
            using _q_method_type = void (MAVLinkConnection::*)(QString , float );
            if (_q_method_type _q_method = &MAVLinkConnection::parameterReceived; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 30;
                return;
            }
        }
        {
            using _q_method_type = void (MAVLinkConnection::*)();
            if (_q_method_type _q_method = &MAVLinkConnection::parametersComplete; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 31;
                return;
            }
        }
        {
            using _q_method_type = void (MAVLinkConnection::*)(double , double , float , bool );
            if (_q_method_type _q_method = &MAVLinkConnection::homePositionUpdated; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 32;
                return;
            }
        }
        {
            using _q_method_type = void (MAVLinkConnection::*)(int );
            if (_q_method_type _q_method = &MAVLinkConnection::vehicleTypeChanged; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 33;
                return;
            }
        }
        {
            using _q_method_type = void (MAVLinkConnection::*)(QString );
            if (_q_method_type _q_method = &MAVLinkConnection::commandFailed; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 34;
                return;
            }
        }
        {
            using _q_method_type = void (MAVLinkConnection::*)();
            if (_q_method_type _q_method = &MAVLinkConnection::initializationStarted; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 35;
                return;
            }
        }
        {
            using _q_method_type = void (MAVLinkConnection::*)(bool );
            if (_q_method_type _q_method = &MAVLinkConnection::armingStateChanged; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 36;
                return;
            }
        }
        {
            using _q_method_type = void (MAVLinkConnection::*)(VehicleState );
            if (_q_method_type _q_method = &MAVLinkConnection::vehicleStateChanged; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 37;
                return;
            }
        }
        {
            using _q_method_type = void (MAVLinkConnection::*)(const QString & );
            if (_q_method_type _q_method = &MAVLinkConnection::preArmCheckFailed; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 38;
                return;
            }
        }
        {
            using _q_method_type = void (MAVLinkConnection::*)(const QString & );
            if (_q_method_type _q_method = &MAVLinkConnection::preArmCheckPassed; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 39;
                return;
            }
        }
        {
            using _q_method_type = void (MAVLinkConnection::*)(bool );
            if (_q_method_type _q_method = &MAVLinkConnection::sensorHealthChanged; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 40;
                return;
            }
        }
        {
            using _q_method_type = void (MAVLinkConnection::*)(float );
            if (_q_method_type _q_method = &MAVLinkConnection::missionUploadProgress; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 41;
                return;
            }
        }
        {
            using _q_method_type = void (MAVLinkConnection::*)(float );
            if (_q_method_type _q_method = &MAVLinkConnection::missionDownloadProgress; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 42;
                return;
            }
        }
        {
            using _q_method_type = void (MAVLinkConnection::*)();
            if (_q_method_type _q_method = &MAVLinkConnection::missionTransferComplete; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 43;
                return;
            }
        }
        {
            using _q_method_type = void (MAVLinkConnection::*)(QString );
            if (_q_method_type _q_method = &MAVLinkConnection::missionTransferFailed; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 44;
                return;
            }
        }
        {
            using _q_method_type = void (MAVLinkConnection::*)(QString , float );
            if (_q_method_type _q_method = &MAVLinkConnection::parameterSetSuccess; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 45;
                return;
            }
        }
        {
            using _q_method_type = void (MAVLinkConnection::*)(QString );
            if (_q_method_type _q_method = &MAVLinkConnection::parameterSetFailed; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 46;
                return;
            }
        }
        {
            using _q_method_type = void (MAVLinkConnection::*)(QString , bool );
            if (_q_method_type _q_method = &MAVLinkConnection::calibrationStep; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 47;
                return;
            }
        }
        {
            using _q_method_type = void (MAVLinkConnection::*)(QString );
            if (_q_method_type _q_method = &MAVLinkConnection::calibrationMessage; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 48;
                return;
            }
        }
        {
            using _q_method_type = void (MAVLinkConnection::*)(float , int );
            if (_q_method_type _q_method = &MAVLinkConnection::accelCalibrationProgress; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 49;
                return;
            }
        }
        {
            using _q_method_type = void (MAVLinkConnection::*)(int );
            if (_q_method_type _q_method = &MAVLinkConnection::accelCalibrationPositionRequired; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 50;
                return;
            }
        }
        {
            using _q_method_type = void (MAVLinkConnection::*)(int , QString );
            if (_q_method_type _q_method = &MAVLinkConnection::accelCalibrationStatus; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 51;
                return;
            }
        }
        {
            using _q_method_type = void (MAVLinkConnection::*)(bool );
            if (_q_method_type _q_method = &MAVLinkConnection::accelCalibrationComplete; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 52;
                return;
            }
        }
        {
            using _q_method_type = void (MAVLinkConnection::*)(float , float , float );
            if (_q_method_type _q_method = &MAVLinkConnection::compassCalibrationProgress; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 53;
                return;
            }
        }
        {
            using _q_method_type = void (MAVLinkConnection::*)(QString );
            if (_q_method_type _q_method = &MAVLinkConnection::compassCalibrationStep; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 54;
                return;
            }
        }
        {
            using _q_method_type = void (MAVLinkConnection::*)(int , QString );
            if (_q_method_type _q_method = &MAVLinkConnection::compassCalibrationStatus; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 55;
                return;
            }
        }
        {
            using _q_method_type = void (MAVLinkConnection::*)(bool );
            if (_q_method_type _q_method = &MAVLinkConnection::compassCalibrationCompleted; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 56;
                return;
            }
        }
        {
            using _q_method_type = void (MAVLinkConnection::*)(float );
            if (_q_method_type _q_method = &MAVLinkConnection::rcCalibrationProgress; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 57;
                return;
            }
        }
        {
            using _q_method_type = void (MAVLinkConnection::*)(int , QString );
            if (_q_method_type _q_method = &MAVLinkConnection::rcCalibrationStatus; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 58;
                return;
            }
        }
        {
            using _q_method_type = void (MAVLinkConnection::*)(int , int , int , int , int );
            if (_q_method_type _q_method = &MAVLinkConnection::rcCalibrationChannelChanged; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 59;
                return;
            }
        }
        {
            using _q_method_type = void (MAVLinkConnection::*)(bool );
            if (_q_method_type _q_method = &MAVLinkConnection::rcCalibrationComplete; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 60;
                return;
            }
        }
        {
            using _q_method_type = void (MAVLinkConnection::*)(int , int );
            if (_q_method_type _q_method = &MAVLinkConnection::rcRawChannelChanged; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 61;
                return;
            }
        }
        {
            using _q_method_type = void (MAVLinkConnection::*)(float );
            if (_q_method_type _q_method = &MAVLinkConnection::escCalibrationProgress; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 62;
                return;
            }
        }
        {
            using _q_method_type = void (MAVLinkConnection::*)(int , QString );
            if (_q_method_type _q_method = &MAVLinkConnection::escCalibrationStatus; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 63;
                return;
            }
        }
        {
            using _q_method_type = void (MAVLinkConnection::*)(int , int );
            if (_q_method_type _q_method = &MAVLinkConnection::escCalibrationMotorValue; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 64;
                return;
            }
        }
        {
            using _q_method_type = void (MAVLinkConnection::*)(bool );
            if (_q_method_type _q_method = &MAVLinkConnection::escCalibrationComplete; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 65;
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
        if (_id < 80)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 80;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 80)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 80;
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
void MAVLinkConnection::speedUpdated(float _t1, float _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void MAVLinkConnection::depthChanged(float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void MAVLinkConnection::waterTemperatureChanged(float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void MAVLinkConnection::escDataChanged(int _t1, float _t2, float _t3, float _t4, float _t5)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t4))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t5))) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}

// SIGNAL 9
void MAVLinkConnection::servoOutputChanged(QVector<uint16_t> _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 9, _a);
}

// SIGNAL 10
void MAVLinkConnection::imuTemperatureChanged(int _t1, float _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 10, _a);
}

// SIGNAL 11
void MAVLinkConnection::imuDataChanged(int _t1, float _t2, float _t3, float _t4, float _t5, float _t6, float _t7, float _t8, float _t9, float _t10)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t4))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t5))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t6))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t7))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t8))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t9))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t10))) };
    QMetaObject::activate(this, &staticMetaObject, 11, _a);
}

// SIGNAL 12
void MAVLinkConnection::pressureChanged(float _t1, float _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 12, _a);
}

// SIGNAL 13
void MAVLinkConnection::rangefinderDistanceChanged(float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 13, _a);
}

// SIGNAL 14
void MAVLinkConnection::modeChanged(uint8_t _t1, uint32_t _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 14, _a);
}

// SIGNAL 15
void MAVLinkConnection::globalPositionReceived(double _t1, double _t2, float _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))) };
    QMetaObject::activate(this, &staticMetaObject, 15, _a);
}

// SIGNAL 16
void MAVLinkConnection::vfrHudReceived(float _t1, float _t2, float _t3, float _t4)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t4))) };
    QMetaObject::activate(this, &staticMetaObject, 16, _a);
}

// SIGNAL 17
void MAVLinkConnection::attitudeReceived(float _t1, float _t2, float _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))) };
    QMetaObject::activate(this, &staticMetaObject, 17, _a);
}

// SIGNAL 18
void MAVLinkConnection::gpsRawReceived(int _t1, float _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 18, _a);
}

// SIGNAL 19
void MAVLinkConnection::signalDataChanged(int _t1, int _t2, int _t3, int _t4, int _t5, int _t6, int _t7)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t4))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t5))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t6))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t7))) };
    QMetaObject::activate(this, &staticMetaObject, 19, _a);
}

// SIGNAL 20
void MAVLinkConnection::gpsFixTypeChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 20, _a);
}

// SIGNAL 21
void MAVLinkConnection::homePositionChanged(double _t1, double _t2, float _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))) };
    QMetaObject::activate(this, &staticMetaObject, 21, _a);
}

// SIGNAL 22
void MAVLinkConnection::distanceFromHomeChanged(float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 22, _a);
}

// SIGNAL 23
void MAVLinkConnection::systemStatusChanged(const mavlink_sys_status_t & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 23, _a);
}

// SIGNAL 24
void MAVLinkConnection::linkQualityChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 24, _a);
}

// SIGNAL 25
void MAVLinkConnection::landedStateChanged(uint8_t _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 25, _a);
}

// SIGNAL 26
void MAVLinkConnection::extendedStateChanged(uint8_t _t1, uint8_t _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 26, _a);
}

// SIGNAL 27
void MAVLinkConnection::statusTextReceived(int _t1, QString _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 27, _a);
}

// SIGNAL 28
void MAVLinkConnection::notificationReceived(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 28, _a);
}

// SIGNAL 29
void MAVLinkConnection::errorReceived(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 29, _a);
}

// SIGNAL 30
void MAVLinkConnection::parameterReceived(QString _t1, float _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 30, _a);
}

// SIGNAL 31
void MAVLinkConnection::parametersComplete()
{
    QMetaObject::activate(this, &staticMetaObject, 31, nullptr);
}

// SIGNAL 32
void MAVLinkConnection::homePositionUpdated(double _t1, double _t2, float _t3, bool _t4)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t4))) };
    QMetaObject::activate(this, &staticMetaObject, 32, _a);
}

// SIGNAL 33
void MAVLinkConnection::vehicleTypeChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 33, _a);
}

// SIGNAL 34
void MAVLinkConnection::commandFailed(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 34, _a);
}

// SIGNAL 35
void MAVLinkConnection::initializationStarted()
{
    QMetaObject::activate(this, &staticMetaObject, 35, nullptr);
}

// SIGNAL 36
void MAVLinkConnection::armingStateChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 36, _a);
}

// SIGNAL 37
void MAVLinkConnection::vehicleStateChanged(VehicleState _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 37, _a);
}

// SIGNAL 38
void MAVLinkConnection::preArmCheckFailed(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 38, _a);
}

// SIGNAL 39
void MAVLinkConnection::preArmCheckPassed(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 39, _a);
}

// SIGNAL 40
void MAVLinkConnection::sensorHealthChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 40, _a);
}

// SIGNAL 41
void MAVLinkConnection::missionUploadProgress(float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 41, _a);
}

// SIGNAL 42
void MAVLinkConnection::missionDownloadProgress(float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 42, _a);
}

// SIGNAL 43
void MAVLinkConnection::missionTransferComplete()
{
    QMetaObject::activate(this, &staticMetaObject, 43, nullptr);
}

// SIGNAL 44
void MAVLinkConnection::missionTransferFailed(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 44, _a);
}

// SIGNAL 45
void MAVLinkConnection::parameterSetSuccess(QString _t1, float _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 45, _a);
}

// SIGNAL 46
void MAVLinkConnection::parameterSetFailed(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 46, _a);
}

// SIGNAL 47
void MAVLinkConnection::calibrationStep(QString _t1, bool _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 47, _a);
}

// SIGNAL 48
void MAVLinkConnection::calibrationMessage(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 48, _a);
}

// SIGNAL 49
void MAVLinkConnection::accelCalibrationProgress(float _t1, int _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 49, _a);
}

// SIGNAL 50
void MAVLinkConnection::accelCalibrationPositionRequired(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 50, _a);
}

// SIGNAL 51
void MAVLinkConnection::accelCalibrationStatus(int _t1, QString _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 51, _a);
}

// SIGNAL 52
void MAVLinkConnection::accelCalibrationComplete(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 52, _a);
}

// SIGNAL 53
void MAVLinkConnection::compassCalibrationProgress(float _t1, float _t2, float _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))) };
    QMetaObject::activate(this, &staticMetaObject, 53, _a);
}

// SIGNAL 54
void MAVLinkConnection::compassCalibrationStep(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 54, _a);
}

// SIGNAL 55
void MAVLinkConnection::compassCalibrationStatus(int _t1, QString _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 55, _a);
}

// SIGNAL 56
void MAVLinkConnection::compassCalibrationCompleted(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 56, _a);
}

// SIGNAL 57
void MAVLinkConnection::rcCalibrationProgress(float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 57, _a);
}

// SIGNAL 58
void MAVLinkConnection::rcCalibrationStatus(int _t1, QString _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 58, _a);
}

// SIGNAL 59
void MAVLinkConnection::rcCalibrationChannelChanged(int _t1, int _t2, int _t3, int _t4, int _t5)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t4))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t5))) };
    QMetaObject::activate(this, &staticMetaObject, 59, _a);
}

// SIGNAL 60
void MAVLinkConnection::rcCalibrationComplete(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 60, _a);
}

// SIGNAL 61
void MAVLinkConnection::rcRawChannelChanged(int _t1, int _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 61, _a);
}

// SIGNAL 62
void MAVLinkConnection::escCalibrationProgress(float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 62, _a);
}

// SIGNAL 63
void MAVLinkConnection::escCalibrationStatus(int _t1, QString _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 63, _a);
}

// SIGNAL 64
void MAVLinkConnection::escCalibrationMotorValue(int _t1, int _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 64, _a);
}

// SIGNAL 65
void MAVLinkConnection::escCalibrationComplete(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 65, _a);
}
QT_WARNING_POP
