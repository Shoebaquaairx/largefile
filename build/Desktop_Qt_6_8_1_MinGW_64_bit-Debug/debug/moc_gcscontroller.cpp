/****************************************************************************
** Meta object code from reading C++ file 'gcscontroller.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/controller/gcscontroller.h"
#include <QtCore/qmetatype.h>
#include <QtCore/QList>

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
    "recordingTimeChanged",
    "",
    "errorMessage",
    "message",
    "recordingFailed",
    "recording_already_started",
    "b2_unable_disable",
    "state",
    "b1_unable_disable",
    "latitudeChanged",
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
    "servoOutputChanged",
    "QVariantList",
    "values",
    "depthChanged",
    "depth",
    "waterTemperatureChanged",
    "temp",
    "rangefinderDistanceChanged",
    "distance",
    "escDataChanged",
    "imuTemperaturesChanged",
    "pressureChanged",
    "abs_pressure",
    "diff_pressure",
    "sequenceMotorChanged",
    "motorNumber",
    "distanceFromHomeChanged",
    "landedStateChanged",
    "notificationsChanged",
    "errorsChanged",
    "parameterValueChanged",
    "name",
    "value",
    "modeChanged",
    "uint8_t",
    "base_mode",
    "uint32_t",
    "custom_mode",
    "vehicle_type",
    "homePositionChanged",
    "lat",
    "lon",
    "alt",
    "vehicleTypeChanged",
    "type",
    "vehicleStateChanged",
    "preArmChecksChanged",
    "sensorsHealthyChanged",
    "healthy",
    "missionProgressChanged",
    "progress",
    "missionTransferCompleted",
    "missionTransferFailed",
    "reason",
    "missionUpdated",
    "parametersChanged",
    "parameterSaveResult",
    "success",
    "savedCount",
    "failedCount",
    "parameterLoadProgress",
    "percentage",
    "parameterProgressChanged",
    "localRSSIChanged",
    "rssi",
    "remoteRSSIChanged",
    "localNoiseChanged",
    "noise",
    "remoteNoiseChanged",
    "errorsFixedChanged",
    "count",
    "txBufferChanged",
    "size",
    "rxErrorChanged",
    "accelCalibratingChanged",
    "calibrating",
    "accelCalibrationProgressChanged",
    "accelCalibrationStepChanged",
    "step",
    "accelCalibrationStatusChanged",
    "status",
    "accelCalibrationPositionChanged",
    "position",
    "accelCalibrationComplete",
    "compassCalibratingChanged",
    "compassCalibrationProgressChanged",
    "compassCalibrationStatusChanged",
    "compassCalibrationStepChanged",
    "compassCalibrationComplete",
    "rcCalibratingChanged",
    "rcCalibrationProgressChanged",
    "rcCalibrationStatusChanged",
    "rcCalibrationChannelChanged",
    "channel",
    "min",
    "max",
    "trim",
    "rcCalibrationComplete",
    "rcChannelsChanged",
    "rcChannelUpdated",
    "escCalibratingChanged",
    "escCalibrationProgressChanged",
    "escCalibrationStatusChanged",
    "escCalibrationMotorValue",
    "motorId",
    "escCalibrationComplete",
    "escMotorValuesChanged",
    "motorTestComplete",
    "captureModeChanged",
    "textReceived",
    "text",
    "capture_mode_changed",
    "connectVehicle",
    "address",
    "port",
    "baudRate",
    "disconnectVehicle",
    "setFlightMode",
    "getAvailableSerialPorts",
    "connectSerialPort",
    "portName",
    "armVehicle",
    "disarmVehicle",
    "openFolderDialog",
    "setRecordingMode",
    "capture_auto",
    "sec",
    "getRecordingMode",
    "getCaptureMode",
    "getESCData",
    "getIMUTemperatures",
    "getServoOutputValues",
    "modes",
    "QString&",
    "startRecording",
    "rtspLink",
    "filePath",
    "filename",
    "stopRecording",
    "capture_image",
    "button_1_clicked",
    "button_2_clicked",
    "setDroneStatus",
    "takeoff",
    "land",
    "returnToLaunch",
    "setHomePosition",
    "repositionVehicle",
    "writeMissionToVehicle",
    "readMissionFromVehicle",
    "clearMission",
    "saveMission",
    "loadMission",
    "addMissionItem",
    "command",
    "frame",
    "updateMissionItem",
    "index",
    "param1",
    "param2",
    "param3",
    "param4",
    "removeMissionItem",
    "getMissionItems",
    "createMissionItems",
    "items",
    "getParameterGroups",
    "getParametersByGroup",
    "group",
    "setParameterValue",
    "QVariant",
    "saveAllParameters",
    "getParameterDescription",
    "getParameterUnits",
    "getParameterDefault",
    "getParameterOptions",
    "getParameterValue",
    "defaultValue",
    "refreshParameters",
    "hasModifiedParameters",
    "cancelParameterRequest",
    "startAccelCalibration",
    "startLevelCalibration",
    "startSimpleCalibration",
    "cancelAccelCalibration",
    "confirmAccelCalibrationPosition",
    "startCompassCalibration",
    "cancelCompassCalibration",
    "retryCompassCalibration",
    "rebootVehicle",
    "startRCCalibration",
    "cancelRCCalibration",
    "saveRCCalibration",
    "setRCReversed",
    "reversed",
    "getRCCalibrationData",
    "startESCCalibration",
    "cancelESCCalibration",
    "saveESCCalibration",
    "setESCSafetyChecks",
    "passed",
    "getESCCalibrationData",
    "testMotor",
    "throttlePercent",
    "durationSec",
    "testAllMotors",
    "testMotorsInSequence",
    "stopAllMotors",
    "setMotorSpinArm",
    "setMotorSpinMin",
    "textPasted",
    "handleServoOutputChanged",
    "QList<uint16_t>",
    "servoValues",
    "startRecordingTime",
    "stopRecordingTime",
    "getRCChannelValues",
    "batteryPercent",
    "flightMode",
    "isArmed",
    "isConnected",
    "localRSSI",
    "remoteRSSI",
    "localNoise",
    "remoteNoise",
    "errorsFixed",
    "txBuffer",
    "rxError",
    "servoOutputValues",
    "waterTemperature",
    "rangefinderDistance",
    "pressureAbs",
    "pressureDiff",
    "escData",
    "imuTemperatures",
    "gpsFixType",
    "distanceFromHome",
    "landedState",
    "notifications",
    "errors",
    "homeLatitude",
    "homeLongitude",
    "homeAltitude",
    "vehicleType",
    "vehicleState",
    "preArmChecks",
    "sensorsHealthy",
    "missionProgress",
    "missionUploadInProgress",
    "parameterProgress",
    "accelCalibrating",
    "accelCalibrationProgress",
    "accelCalibrationStep",
    "accelCalibrationStatus",
    "positionConfirmed",
    "compassCalibrating",
    "compassCalibrationProgress",
    "compassCalibrationStatus",
    "rcCalibrating",
    "rcCalibrationProgress",
    "rcCalibrationStatus",
    "rcChannelValues",
    "isRCDataAvailable",
    "escCalibrating",
    "escCalibrationProgress",
    "escCalibrationStatus",
    "escMotorValues",
    "currentMode",
    "captureMode",
    "formattedTime",
    "startTime",
    "endTime"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA

Q_CONSTINIT static const uint qt_meta_data_ZN13GCSControllerE[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
     178,   14, // methods
      73, 1654, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      89,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0, 1082,    2, 0x06,   74 /* Public */,
       3,    1, 1083,    2, 0x06,   75 /* Public */,
       5,    0, 1086,    2, 0x06,   77 /* Public */,
       6,    0, 1087,    2, 0x06,   78 /* Public */,
       7,    1, 1088,    2, 0x06,   79 /* Public */,
       9,    1, 1091,    2, 0x06,   81 /* Public */,
      10,    1, 1094,    2, 0x06,   83 /* Public */,
      12,    1, 1097,    2, 0x06,   85 /* Public */,
      14,    1, 1100,    2, 0x06,   87 /* Public */,
      16,    1, 1103,    2, 0x06,   89 /* Public */,
      18,    1, 1106,    2, 0x06,   91 /* Public */,
      20,    1, 1109,    2, 0x06,   93 /* Public */,
      22,    1, 1112,    2, 0x06,   95 /* Public */,
      24,    1, 1115,    2, 0x06,   97 /* Public */,
      26,    1, 1118,    2, 0x06,   99 /* Public */,
      28,    1, 1121,    2, 0x06,  101 /* Public */,
      30,    1, 1124,    2, 0x06,  103 /* Public */,
      32,    1, 1127,    2, 0x06,  105 /* Public */,
      34,    1, 1130,    2, 0x06,  107 /* Public */,
      36,    1, 1133,    2, 0x06,  109 /* Public */,
      38,    1, 1136,    2, 0x06,  111 /* Public */,
      40,    1, 1139,    2, 0x06,  113 /* Public */,
      42,    1, 1142,    2, 0x06,  115 /* Public */,
      44,    1, 1145,    2, 0x06,  117 /* Public */,
      46,    1, 1148,    2, 0x06,  119 /* Public */,
      48,    1, 1151,    2, 0x06,  121 /* Public */,
      50,    1, 1154,    2, 0x06,  123 /* Public */,
      53,    1, 1157,    2, 0x06,  125 /* Public */,
      55,    1, 1160,    2, 0x06,  127 /* Public */,
      57,    1, 1163,    2, 0x06,  129 /* Public */,
      59,    0, 1166,    2, 0x06,  131 /* Public */,
      60,    0, 1167,    2, 0x06,  132 /* Public */,
      61,    2, 1168,    2, 0x06,  133 /* Public */,
      64,    1, 1173,    2, 0x06,  136 /* Public */,
      66,    1, 1176,    2, 0x06,  138 /* Public */,
      67,    1, 1179,    2, 0x06,  140 /* Public */,
      68,    0, 1182,    2, 0x06,  142 /* Public */,
      69,    0, 1183,    2, 0x06,  143 /* Public */,
      70,    2, 1184,    2, 0x06,  144 /* Public */,
      73,    3, 1189,    2, 0x06,  147 /* Public */,
      79,    3, 1196,    2, 0x06,  151 /* Public */,
      83,    1, 1203,    2, 0x06,  155 /* Public */,
      85,    1, 1206,    2, 0x06,  157 /* Public */,
      86,    0, 1209,    2, 0x06,  159 /* Public */,
      87,    1, 1210,    2, 0x06,  160 /* Public */,
      89,    1, 1213,    2, 0x06,  162 /* Public */,
      91,    0, 1216,    2, 0x06,  164 /* Public */,
      92,    1, 1217,    2, 0x06,  165 /* Public */,
      94,    0, 1220,    2, 0x06,  167 /* Public */,
      95,    0, 1221,    2, 0x06,  168 /* Public */,
      96,    3, 1222,    2, 0x06,  169 /* Public */,
     100,    1, 1229,    2, 0x06,  173 /* Public */,
     102,    1, 1232,    2, 0x06,  175 /* Public */,
     103,    1, 1235,    2, 0x06,  177 /* Public */,
     105,    1, 1238,    2, 0x06,  179 /* Public */,
     106,    1, 1241,    2, 0x06,  181 /* Public */,
     108,    1, 1244,    2, 0x06,  183 /* Public */,
     109,    1, 1247,    2, 0x06,  185 /* Public */,
     111,    1, 1250,    2, 0x06,  187 /* Public */,
     113,    1, 1253,    2, 0x06,  189 /* Public */,
     114,    1, 1256,    2, 0x06,  191 /* Public */,
     116,    1, 1259,    2, 0x06,  193 /* Public */,
     117,    1, 1262,    2, 0x06,  195 /* Public */,
     119,    1, 1265,    2, 0x06,  197 /* Public */,
     121,    1, 1268,    2, 0x06,  199 /* Public */,
     123,    1, 1271,    2, 0x06,  201 /* Public */,
     124,    1, 1274,    2, 0x06,  203 /* Public */,
     125,    1, 1277,    2, 0x06,  205 /* Public */,
     126,    1, 1280,    2, 0x06,  207 /* Public */,
     127,    1, 1283,    2, 0x06,  209 /* Public */,
     128,    1, 1286,    2, 0x06,  211 /* Public */,
     129,    1, 1289,    2, 0x06,  213 /* Public */,
     130,    1, 1292,    2, 0x06,  215 /* Public */,
     131,    1, 1295,    2, 0x06,  217 /* Public */,
     132,    5, 1298,    2, 0x06,  219 /* Public */,
     137,    1, 1309,    2, 0x06,  225 /* Public */,
     138,    0, 1312,    2, 0x06,  227 /* Public */,
     139,    5, 1313,    2, 0x06,  228 /* Public */,
     140,    1, 1324,    2, 0x06,  234 /* Public */,
     141,    1, 1327,    2, 0x06,  236 /* Public */,
     142,    1, 1330,    2, 0x06,  238 /* Public */,
     143,    2, 1333,    2, 0x06,  240 /* Public */,
     145,    1, 1338,    2, 0x06,  243 /* Public */,
     146,    0, 1341,    2, 0x06,  245 /* Public */,
     147,    2, 1342,    2, 0x06,  246 /* Public */,
      73,    0, 1347,    2, 0x06,  249 /* Public */,
     148,    0, 1348,    2, 0x06,  250 /* Public */,
     149,    1, 1349,    2, 0x06,  251 /* Public */,
     151,    0, 1352,    2, 0x06,  253 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
     152,    4, 1353,    2, 0x0a,  254 /* Public */,
     152,    3, 1362,    2, 0x2a,  259 /* Public | MethodCloned */,
     156,    0, 1369,    2, 0x0a,  263 /* Public */,
     157,    1, 1370,    2, 0x0a,  264 /* Public */,
     158,    0, 1373,    2, 0x0a,  266 /* Public */,
     159,    2, 1374,    2, 0x0a,  267 /* Public */,
     161,    0, 1379,    2, 0x0a,  270 /* Public */,
     162,    0, 1380,    2, 0x0a,  271 /* Public */,
     163,    0, 1381,    2, 0x0a,  272 /* Public */,
     164,    1, 1382,    2, 0x0a,  273 /* Public */,
     165,    2, 1385,    2, 0x0a,  275 /* Public */,
     167,    0, 1390,    2, 0x10a,  278 /* Public | MethodIsConst  */,
     168,    0, 1391,    2, 0x10a,  279 /* Public | MethodIsConst  */,
     169,    0, 1392,    2, 0x10a,  280 /* Public | MethodIsConst  */,
     170,    0, 1393,    2, 0x10a,  281 /* Public | MethodIsConst  */,
     171,    0, 1394,    2, 0x10a,  282 /* Public | MethodIsConst  */,
     172,    1, 1395,    2, 0x0a,  283 /* Public */,
     174,    3, 1398,    2, 0x0a,  285 /* Public */,
     178,    0, 1405,    2, 0x0a,  289 /* Public */,
     179,    3, 1406,    2, 0x0a,  290 /* Public */,
     180,    1, 1413,    2, 0x0a,  294 /* Public */,
     181,    1, 1416,    2, 0x0a,  296 /* Public */,
     182,    1, 1419,    2, 0x0a,  298 /* Public */,
     183,    1, 1422,    2, 0x0a,  300 /* Public */,
     184,    0, 1425,    2, 0x0a,  302 /* Public */,
     185,    0, 1426,    2, 0x0a,  303 /* Public */,
     186,    3, 1427,    2, 0x0a,  304 /* Public */,
     187,    4, 1434,    2, 0x0a,  308 /* Public */,
     187,    3, 1443,    2, 0x2a,  313 /* Public | MethodCloned */,
     188,    0, 1450,    2, 0x0a,  317 /* Public */,
     189,    0, 1451,    2, 0x0a,  318 /* Public */,
     190,    0, 1452,    2, 0x0a,  319 /* Public */,
     191,    1, 1453,    2, 0x0a,  320 /* Public */,
     192,    1, 1456,    2, 0x0a,  322 /* Public */,
     193,    5, 1459,    2, 0x0a,  324 /* Public */,
     193,    4, 1470,    2, 0x2a,  330 /* Public | MethodCloned */,
     196,    9, 1479,    2, 0x0a,  335 /* Public */,
     196,    8, 1498,    2, 0x2a,  345 /* Public | MethodCloned */,
     196,    7, 1515,    2, 0x2a,  354 /* Public | MethodCloned */,
     196,    6, 1530,    2, 0x2a,  362 /* Public | MethodCloned */,
     196,    5, 1543,    2, 0x2a,  369 /* Public | MethodCloned */,
     202,    1, 1554,    2, 0x0a,  375 /* Public */,
     203,    0, 1557,    2, 0x10a,  377 /* Public | MethodIsConst  */,
     204,    1, 1558,    2, 0x0a,  378 /* Public */,
     206,    0, 1561,    2, 0x0a,  380 /* Public */,
     207,    1, 1562,    2, 0x0a,  381 /* Public */,
     209,    2, 1565,    2, 0x0a,  383 /* Public */,
     211,    0, 1570,    2, 0x0a,  386 /* Public */,
     212,    1, 1571,    2, 0x10a,  387 /* Public | MethodIsConst  */,
     213,    1, 1574,    2, 0x10a,  389 /* Public | MethodIsConst  */,
     214,    1, 1577,    2, 0x10a,  391 /* Public | MethodIsConst  */,
     215,    1, 1580,    2, 0x10a,  393 /* Public | MethodIsConst  */,
     216,    2, 1583,    2, 0x0a,  395 /* Public */,
     216,    1, 1588,    2, 0x2a,  398 /* Public | MethodCloned */,
     218,    0, 1591,    2, 0x0a,  400 /* Public */,
     219,    0, 1592,    2, 0x10a,  401 /* Public | MethodIsConst  */,
     220,    0, 1593,    2, 0x0a,  402 /* Public */,
     221,    0, 1594,    2, 0x0a,  403 /* Public */,
     222,    0, 1595,    2, 0x0a,  404 /* Public */,
     223,    0, 1596,    2, 0x0a,  405 /* Public */,
     224,    0, 1597,    2, 0x0a,  406 /* Public */,
     225,    0, 1598,    2, 0x0a,  407 /* Public */,
     226,    0, 1599,    2, 0x0a,  408 /* Public */,
     227,    0, 1600,    2, 0x0a,  409 /* Public */,
     228,    0, 1601,    2, 0x0a,  410 /* Public */,
     229,    0, 1602,    2, 0x0a,  411 /* Public */,
     230,    0, 1603,    2, 0x0a,  412 /* Public */,
     231,    0, 1604,    2, 0x0a,  413 /* Public */,
     232,    0, 1605,    2, 0x0a,  414 /* Public */,
     233,    2, 1606,    2, 0x0a,  415 /* Public */,
     235,    0, 1611,    2, 0x10a,  418 /* Public | MethodIsConst  */,
     236,    0, 1612,    2, 0x0a,  419 /* Public */,
     237,    0, 1613,    2, 0x0a,  420 /* Public */,
     238,    0, 1614,    2, 0x0a,  421 /* Public */,
     239,    1, 1615,    2, 0x0a,  422 /* Public */,
     241,    0, 1618,    2, 0x10a,  424 /* Public | MethodIsConst  */,
     242,    3, 1619,    2, 0x0a,  425 /* Public */,
     245,    2, 1626,    2, 0x0a,  429 /* Public */,
     246,    2, 1631,    2, 0x0a,  432 /* Public */,
     247,    0, 1636,    2, 0x0a,  435 /* Public */,
     248,    1, 1637,    2, 0x0a,  436 /* Public */,
     248,    0, 1640,    2, 0x2a,  438 /* Public | MethodCloned */,
     249,    1, 1641,    2, 0x0a,  439 /* Public */,
     249,    0, 1644,    2, 0x2a,  441 /* Public | MethodCloned */,
     250,    1, 1645,    2, 0x0a,  442 /* Public */,
     251,    1, 1648,    2, 0x08,  444 /* Private */,

 // methods: name, argc, parameters, tag, flags, initial metatype offsets
     254,    0, 1651,    2, 0x02,  446 /* Public */,
     255,    0, 1652,    2, 0x02,  447 /* Public */,
     256,    0, 1653,    2, 0x102,  448 /* Public | MethodIsConst  */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    4,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    8,
    QMetaType::Void, QMetaType::QString,    8,
    QMetaType::Void, QMetaType::Double,   11,
    QMetaType::Void, QMetaType::Double,   13,
    QMetaType::Void, QMetaType::Double,   15,
    QMetaType::Void, QMetaType::Double,   17,
    QMetaType::Void, QMetaType::Double,   19,
    QMetaType::Void, QMetaType::Double,   21,
    QMetaType::Void, QMetaType::Double,   23,
    QMetaType::Void, QMetaType::QString,   25,
    QMetaType::Void, QMetaType::Bool,   27,
    QMetaType::Void, QMetaType::Bool,   29,
    QMetaType::Void, QMetaType::Double,   31,
    QMetaType::Void, QMetaType::Double,   33,
    QMetaType::Void, QMetaType::Double,   35,
    QMetaType::Void, QMetaType::Double,   37,
    QMetaType::Void, QMetaType::Double,   39,
    QMetaType::Void, QMetaType::Double,   41,
    QMetaType::Void, QMetaType::Double,   43,
    QMetaType::Void, QMetaType::Int,   45,
    QMetaType::Void, QMetaType::Int,   47,
    QMetaType::Void, QMetaType::Double,   49,
    QMetaType::Void, 0x80000000 | 51,   52,
    QMetaType::Void, QMetaType::Float,   54,
    QMetaType::Void, QMetaType::Float,   56,
    QMetaType::Void, QMetaType::Float,   58,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Float, QMetaType::Float,   62,   63,
    QMetaType::Void, QMetaType::Int,   65,
    QMetaType::Void, QMetaType::Double,   58,
    QMetaType::Void, QMetaType::QString,    8,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString, QMetaType::Float,   71,   72,
    QMetaType::Void, 0x80000000 | 74, 0x80000000 | 76, 0x80000000 | 74,   75,   77,   78,
    QMetaType::Void, QMetaType::Double, QMetaType::Double, QMetaType::Double,   80,   81,   82,
    QMetaType::Void, QMetaType::Int,   84,
    QMetaType::Void, QMetaType::QString,    8,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   88,
    QMetaType::Void, QMetaType::Float,   90,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   93,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool, QMetaType::Int, QMetaType::Int,   97,   98,   99,
    QMetaType::Void, QMetaType::Float,  101,
    QMetaType::Void, QMetaType::Float,   90,
    QMetaType::Void, QMetaType::Int,  104,
    QMetaType::Void, QMetaType::Int,  104,
    QMetaType::Void, QMetaType::Int,  107,
    QMetaType::Void, QMetaType::Int,  107,
    QMetaType::Void, QMetaType::Int,  110,
    QMetaType::Void, QMetaType::Int,  112,
    QMetaType::Void, QMetaType::Int,  110,
    QMetaType::Void, QMetaType::Bool,  115,
    QMetaType::Void, QMetaType::Float,   90,
    QMetaType::Void, QMetaType::Int,  118,
    QMetaType::Void, QMetaType::QString,  120,
    QMetaType::Void, QMetaType::Int,  122,
    QMetaType::Void, QMetaType::Bool,   97,
    QMetaType::Void, QMetaType::Bool,  115,
    QMetaType::Void, 0x80000000 | 51,   90,
    QMetaType::Void, QMetaType::QString,  120,
    QMetaType::Void, QMetaType::QString,  118,
    QMetaType::Void, QMetaType::Bool,   97,
    QMetaType::Void, QMetaType::Bool,  115,
    QMetaType::Void, QMetaType::Float,   90,
    QMetaType::Void, QMetaType::QString,  120,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::Int, QMetaType::Int, QMetaType::Int,  133,   72,  134,  135,  136,
    QMetaType::Void, QMetaType::Bool,   97,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::Int, QMetaType::Int, QMetaType::Int,  133,   72,  134,  135,  136,
    QMetaType::Void, QMetaType::Bool,  115,
    QMetaType::Void, QMetaType::Float,   90,
    QMetaType::Void, QMetaType::QString,  120,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,  144,   72,
    QMetaType::Void, QMetaType::Bool,   97,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool, QMetaType::QString,   97,    4,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,  150,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Bool, QMetaType::QString, QMetaType::QString, QMetaType::Int, QMetaType::Int,   84,  153,  154,  155,
    QMetaType::Bool, QMetaType::QString, QMetaType::QString, QMetaType::Int,   84,  153,  154,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   25,
    QMetaType::QStringList,
    QMetaType::Bool, QMetaType::QString, QMetaType::Int,  160,  155,
    QMetaType::Bool,
    QMetaType::Bool,
    QMetaType::QString,
    QMetaType::QString, QMetaType::QString,   25,
    QMetaType::QString, QMetaType::QString, QMetaType::QString,   25,  166,
    QMetaType::QString,
    QMetaType::QString,
    0x80000000 | 51,
    0x80000000 | 51,
    0x80000000 | 51,
    QMetaType::Void, 0x80000000 | 173,   25,
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::QString,  175,  176,  177,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::QString,  175,  176,  177,
    QMetaType::Void, QMetaType::QString,    4,
    QMetaType::Void, QMetaType::QString,    4,
    QMetaType::Void, QMetaType::QString,  120,
    QMetaType::Bool, QMetaType::Float,   15,
    QMetaType::Bool,
    QMetaType::Bool,
    QMetaType::Bool, QMetaType::Double, QMetaType::Double, QMetaType::Float,   80,   81,   82,
    QMetaType::Bool, QMetaType::Double, QMetaType::Double, QMetaType::Float, QMetaType::Float,   80,   81,   82,   35,
    QMetaType::Bool, QMetaType::Double, QMetaType::Double, QMetaType::Float,   80,   81,   82,
    QMetaType::Bool,
    QMetaType::Bool,
    QMetaType::Bool,
    QMetaType::Bool, QMetaType::QString,  177,
    QMetaType::Bool, QMetaType::QString,  177,
    QMetaType::Void, QMetaType::Double, QMetaType::Double, QMetaType::Float, QMetaType::Int, QMetaType::Int,   80,   81,   82,  194,  195,
    QMetaType::Void, QMetaType::Double, QMetaType::Double, QMetaType::Float, QMetaType::Int,   80,   81,   82,  194,
    QMetaType::Void, QMetaType::Int, QMetaType::Double, QMetaType::Double, QMetaType::Float, QMetaType::Int, QMetaType::Float, QMetaType::Float, QMetaType::Float, QMetaType::Float,  197,   80,   81,   82,  194,  198,  199,  200,  201,
    QMetaType::Void, QMetaType::Int, QMetaType::Double, QMetaType::Double, QMetaType::Float, QMetaType::Int, QMetaType::Float, QMetaType::Float, QMetaType::Float,  197,   80,   81,   82,  194,  198,  199,  200,
    QMetaType::Void, QMetaType::Int, QMetaType::Double, QMetaType::Double, QMetaType::Float, QMetaType::Int, QMetaType::Float, QMetaType::Float,  197,   80,   81,   82,  194,  198,  199,
    QMetaType::Void, QMetaType::Int, QMetaType::Double, QMetaType::Double, QMetaType::Float, QMetaType::Int, QMetaType::Float,  197,   80,   81,   82,  194,  198,
    QMetaType::Void, QMetaType::Int, QMetaType::Double, QMetaType::Double, QMetaType::Float, QMetaType::Int,  197,   80,   81,   82,  194,
    QMetaType::Void, QMetaType::Int,  197,
    0x80000000 | 51,
    QMetaType::Void, 0x80000000 | 51,  205,
    0x80000000 | 51,
    0x80000000 | 51, QMetaType::QString,  208,
    QMetaType::Bool, QMetaType::QString, 0x80000000 | 210,   71,   72,
    QMetaType::Bool,
    QMetaType::QString, QMetaType::QString,   71,
    QMetaType::QString, QMetaType::QString,   71,
    0x80000000 | 210, QMetaType::QString,   71,
    0x80000000 | 51, QMetaType::QString,   71,
    QMetaType::Float, QMetaType::QString, QMetaType::Float,   71,  217,
    QMetaType::Float, QMetaType::QString,   71,
    QMetaType::Bool,
    QMetaType::Bool,
    QMetaType::Void,
    QMetaType::Bool,
    QMetaType::Bool,
    QMetaType::Bool,
    QMetaType::Bool,
    QMetaType::Void,
    QMetaType::Bool,
    QMetaType::Bool,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Bool,
    QMetaType::Bool,
    QMetaType::Bool,
    QMetaType::Void, QMetaType::Int, QMetaType::Bool,  133,  234,
    0x80000000 | 51,
    QMetaType::Bool,
    QMetaType::Bool,
    QMetaType::Bool,
    QMetaType::Bool, QMetaType::Bool,  240,
    0x80000000 | 51,
    QMetaType::Bool, QMetaType::Int, QMetaType::Int, QMetaType::Int,   65,  243,  244,
    QMetaType::Bool, QMetaType::Int, QMetaType::Int,  243,  244,
    QMetaType::Bool, QMetaType::Int, QMetaType::Int,  243,  244,
    QMetaType::Bool,
    QMetaType::Bool, QMetaType::Float,   72,
    QMetaType::Bool,
    QMetaType::Bool, QMetaType::Float,   72,
    QMetaType::Bool,
    QMetaType::Void, QMetaType::QString,  150,
    QMetaType::Void, 0x80000000 | 252,  253,

 // methods: parameters
    QMetaType::Void,
    QMetaType::Void,
    0x80000000 | 51,

 // properties: name, type, flags, notifyId, revision
      11, QMetaType::Double, 0x00015001, uint(6), 0,
      13, QMetaType::Double, 0x00015001, uint(7), 0,
      15, QMetaType::Double, 0x00015001, uint(8), 0,
      17, QMetaType::Double, 0x00015001, uint(9), 0,
      19, QMetaType::Double, 0x00015001, uint(10), 0,
      21, QMetaType::Double, 0x00015001, uint(11), 0,
     257, QMetaType::Double, 0x00015001, uint(12), 0,
     258, QMetaType::QString, 0x00015001, uint(13), 0,
     259, QMetaType::Bool, 0x00015001, uint(14), 0,
     260, QMetaType::Bool, 0x00015001, uint(15), 0,
      31, QMetaType::Double, 0x00015001, uint(16), 0,
     261, QMetaType::Int, 0x00015001, uint(53), 0,
     262, QMetaType::Int, 0x00015001, uint(54), 0,
     263, QMetaType::Int, 0x00015001, uint(55), 0,
     264, QMetaType::Int, 0x00015001, uint(56), 0,
     265, QMetaType::Int, 0x00015001, uint(57), 0,
     266, QMetaType::Int, 0x00015001, uint(58), 0,
     267, QMetaType::Int, 0x00015001, uint(59), 0,
     268, 0x80000000 | 51, 0x00015009, uint(26), 0,
      54, QMetaType::Float, 0x00015001, uint(27), 0,
     269, QMetaType::Float, 0x00015001, uint(28), 0,
     270, QMetaType::Float, 0x00015001, uint(29), 0,
     271, QMetaType::Float, 0x00015001, uint(32), 0,
     272, QMetaType::Float, 0x00015001, uint(32), 0,
     273, 0x80000000 | 51, 0x00015009, uint(30), 0,
     274, 0x80000000 | 51, 0x00015009, uint(31), 0,
      33, QMetaType::Double, 0x00015001, uint(17), 0,
      41, QMetaType::Double, 0x00015001, uint(21), 0,
      43, QMetaType::Double, 0x00015001, uint(22), 0,
     275, QMetaType::Int, 0x00015001, uint(23), 0,
      47, QMetaType::Int, 0x00015001, uint(24), 0,
      35, QMetaType::Double, 0x00015001, uint(18), 0,
      37, QMetaType::Double, 0x00015001, uint(19), 0,
      39, QMetaType::Double, 0x00015001, uint(20), 0,
      49, QMetaType::Double, 0x00015001, uint(25), 0,
     276, QMetaType::Double, 0x00015001, uint(34), 0,
     277, QMetaType::QString, 0x00015001, uint(35), 0,
     278, QMetaType::QStringList, 0x00015001, uint(36), 0,
     279, QMetaType::QStringList, 0x00015001, uint(37), 0,
     280, QMetaType::Double, 0x00015001, uint(40), 0,
     281, QMetaType::Double, 0x00015001, uint(40), 0,
     282, QMetaType::Double, 0x00015001, uint(40), 0,
     283, QMetaType::Int, 0x00015001, uint(41), 0,
     259, QMetaType::Bool, 0x00015001, uint(14), 0,
     284, QMetaType::QString, 0x00015001, uint(42), 0,
     285, QMetaType::QStringList, 0x00015001, uint(43), 0,
     286, QMetaType::Bool, 0x00015001, uint(44), 0,
     287, QMetaType::Float, 0x00015001, uint(45), 0,
     288, QMetaType::Bool, 0x00015001, uint(45), 0,
     219, QMetaType::Bool, 0x00015001, uint(49), 0,
     289, QMetaType::Float, 0x00015001, uint(52), 0,
     290, QMetaType::Bool, 0x00015001, uint(60), 0,
     291, QMetaType::Float, 0x00015001, uint(61), 0,
     292, QMetaType::Int, 0x00015001, uint(62), 0,
     293, QMetaType::QString, 0x00015001, uint(63), 0,
     294, 0x80000000 | 51, 0x00015009, uint(64), 0,
     295, QMetaType::Bool, 0x00015001, uint(66), 0,
     296, 0x80000000 | 51, 0x00015009, uint(67), 0,
     297, QMetaType::QString, 0x00015001, uint(68), 0,
     298, QMetaType::Bool, 0x00015001, uint(71), 0,
     299, QMetaType::Float, 0x00015001, uint(72), 0,
     300, QMetaType::QString, 0x00015001, uint(73), 0,
     301, 0x80000000 | 51, 0x00015009, uint(76), 0,
     302, QMetaType::Bool, 0x00015001, uint(76), 0,
     303, QMetaType::Bool, 0x00015001, uint(78), 0,
     304, QMetaType::Float, 0x00015001, uint(79), 0,
     305, QMetaType::QString, 0x00015001, uint(80), 0,
     306, 0x80000000 | 51, 0x00015009, uint(83), 0,
     307, QMetaType::QString, 0x00015001, uint(39), 0,
     308, QMetaType::QString, 0x00015001, uint(86), 0,
     309, QMetaType::QString, 0x00015001, uint(0), 0,
     310, QMetaType::QString, 0x00015001, uint(0), 0,
     311, QMetaType::QString, 0x00015001, uint(0), 0,

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
        // property 'localRSSI'
        QtPrivate::TypeAndForceComplete<int, std::true_type>,
        // property 'remoteRSSI'
        QtPrivate::TypeAndForceComplete<int, std::true_type>,
        // property 'localNoise'
        QtPrivate::TypeAndForceComplete<int, std::true_type>,
        // property 'remoteNoise'
        QtPrivate::TypeAndForceComplete<int, std::true_type>,
        // property 'errorsFixed'
        QtPrivate::TypeAndForceComplete<int, std::true_type>,
        // property 'txBuffer'
        QtPrivate::TypeAndForceComplete<int, std::true_type>,
        // property 'rxError'
        QtPrivate::TypeAndForceComplete<int, std::true_type>,
        // property 'servoOutputValues'
        QtPrivate::TypeAndForceComplete<QVariantList, std::true_type>,
        // property 'depth'
        QtPrivate::TypeAndForceComplete<float, std::true_type>,
        // property 'waterTemperature'
        QtPrivate::TypeAndForceComplete<float, std::true_type>,
        // property 'rangefinderDistance'
        QtPrivate::TypeAndForceComplete<float, std::true_type>,
        // property 'pressureAbs'
        QtPrivate::TypeAndForceComplete<float, std::true_type>,
        // property 'pressureDiff'
        QtPrivate::TypeAndForceComplete<float, std::true_type>,
        // property 'escData'
        QtPrivate::TypeAndForceComplete<QVariantList, std::true_type>,
        // property 'imuTemperatures'
        QtPrivate::TypeAndForceComplete<QVariantList, std::true_type>,
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
        // property 'notifications'
        QtPrivate::TypeAndForceComplete<QStringList, std::true_type>,
        // property 'errors'
        QtPrivate::TypeAndForceComplete<QStringList, std::true_type>,
        // property 'homeLatitude'
        QtPrivate::TypeAndForceComplete<double, std::true_type>,
        // property 'homeLongitude'
        QtPrivate::TypeAndForceComplete<double, std::true_type>,
        // property 'homeAltitude'
        QtPrivate::TypeAndForceComplete<double, std::true_type>,
        // property 'vehicleType'
        QtPrivate::TypeAndForceComplete<int, std::true_type>,
        // property 'isArmed'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'vehicleState'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // property 'preArmChecks'
        QtPrivate::TypeAndForceComplete<QStringList, std::true_type>,
        // property 'sensorsHealthy'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'missionProgress'
        QtPrivate::TypeAndForceComplete<float, std::true_type>,
        // property 'missionUploadInProgress'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'hasModifiedParameters'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'parameterProgress'
        QtPrivate::TypeAndForceComplete<float, std::true_type>,
        // property 'accelCalibrating'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'accelCalibrationProgress'
        QtPrivate::TypeAndForceComplete<float, std::true_type>,
        // property 'accelCalibrationStep'
        QtPrivate::TypeAndForceComplete<int, std::true_type>,
        // property 'accelCalibrationStatus'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // property 'positionConfirmed'
        QtPrivate::TypeAndForceComplete<QVariantList, std::true_type>,
        // property 'compassCalibrating'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'compassCalibrationProgress'
        QtPrivate::TypeAndForceComplete<QVariantList, std::true_type>,
        // property 'compassCalibrationStatus'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // property 'rcCalibrating'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'rcCalibrationProgress'
        QtPrivate::TypeAndForceComplete<float, std::true_type>,
        // property 'rcCalibrationStatus'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // property 'rcChannelValues'
        QtPrivate::TypeAndForceComplete<QVariantList, std::true_type>,
        // property 'isRCDataAvailable'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'escCalibrating'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'escCalibrationProgress'
        QtPrivate::TypeAndForceComplete<float, std::true_type>,
        // property 'escCalibrationStatus'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // property 'escMotorValues'
        QtPrivate::TypeAndForceComplete<QVariantList, std::true_type>,
        // property 'currentMode'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // property 'captureMode'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // property 'formattedTime'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // property 'startTime'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // property 'endTime'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<GCSController, std::true_type>,
        // method 'recordingTimeChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'errorMessage'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'recordingFailed'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'recording_already_started'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'b2_unable_disable'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'b1_unable_disable'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
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
        // method 'servoOutputChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QVariantList &, std::false_type>,
        // method 'depthChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<float, std::false_type>,
        // method 'waterTemperatureChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<float, std::false_type>,
        // method 'rangefinderDistanceChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<float, std::false_type>,
        // method 'escDataChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'imuTemperaturesChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'pressureChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<float, std::false_type>,
        QtPrivate::TypeAndForceComplete<float, std::false_type>,
        // method 'sequenceMotorChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'distanceFromHomeChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<double, std::false_type>,
        // method 'landedStateChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'notificationsChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'errorsChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'parameterValueChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        QtPrivate::TypeAndForceComplete<float, std::false_type>,
        // method 'modeChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<uint8_t, std::false_type>,
        QtPrivate::TypeAndForceComplete<uint32_t, std::false_type>,
        QtPrivate::TypeAndForceComplete<uint8_t, std::false_type>,
        // method 'homePositionChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<double, std::false_type>,
        QtPrivate::TypeAndForceComplete<double, std::false_type>,
        QtPrivate::TypeAndForceComplete<double, std::false_type>,
        // method 'vehicleTypeChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'vehicleStateChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'preArmChecksChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'sensorsHealthyChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'missionProgressChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<float, std::false_type>,
        // method 'missionTransferCompleted'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'missionTransferFailed'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'missionUpdated'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'parametersChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'parameterSaveResult'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'parameterLoadProgress'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<float, std::false_type>,
        // method 'parameterProgressChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<float, std::false_type>,
        // method 'localRSSIChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'remoteRSSIChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'localNoiseChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'remoteNoiseChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'errorsFixedChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'txBufferChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'rxErrorChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'accelCalibratingChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'accelCalibrationProgressChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<float, std::false_type>,
        // method 'accelCalibrationStepChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'accelCalibrationStatusChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'accelCalibrationPositionChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'accelCalibrationComplete'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'compassCalibratingChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'compassCalibrationProgressChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QVariantList &, std::false_type>,
        // method 'compassCalibrationStatusChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'compassCalibrationStepChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'compassCalibrationComplete'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'rcCalibratingChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'rcCalibrationProgressChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<float, std::false_type>,
        // method 'rcCalibrationStatusChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
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
        // method 'rcChannelsChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'rcChannelUpdated'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'escCalibratingChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'escCalibrationProgressChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<float, std::false_type>,
        // method 'escCalibrationStatusChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'escCalibrationMotorValue'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'escCalibrationComplete'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'escMotorValuesChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'motorTestComplete'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'modeChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'captureModeChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'textReceived'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'capture_mode_changed'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'connectVehicle'
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'connectVehicle'
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'disconnectVehicle'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'setFlightMode'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'getAvailableSerialPorts'
        QtPrivate::TypeAndForceComplete<QStringList, std::false_type>,
        // method 'connectSerialPort'
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'armVehicle'
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'disarmVehicle'
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'openFolderDialog'
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'setRecordingMode'
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'capture_auto'
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'getRecordingMode'
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'getCaptureMode'
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'getESCData'
        QtPrivate::TypeAndForceComplete<QVariantList, std::false_type>,
        // method 'getIMUTemperatures'
        QtPrivate::TypeAndForceComplete<QVariantList, std::false_type>,
        // method 'getServoOutputValues'
        QtPrivate::TypeAndForceComplete<QVariantList, std::false_type>,
        // method 'modes'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString &, std::false_type>,
        // method 'startRecording'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'stopRecording'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'capture_image'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'button_1_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'button_2_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'setDroneStatus'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'takeoff'
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        QtPrivate::TypeAndForceComplete<float, std::false_type>,
        // method 'land'
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'returnToLaunch'
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'setHomePosition'
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        QtPrivate::TypeAndForceComplete<double, std::false_type>,
        QtPrivate::TypeAndForceComplete<double, std::false_type>,
        QtPrivate::TypeAndForceComplete<float, std::false_type>,
        // method 'repositionVehicle'
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        QtPrivate::TypeAndForceComplete<double, std::false_type>,
        QtPrivate::TypeAndForceComplete<double, std::false_type>,
        QtPrivate::TypeAndForceComplete<float, std::false_type>,
        QtPrivate::TypeAndForceComplete<float, std::false_type>,
        // method 'repositionVehicle'
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        QtPrivate::TypeAndForceComplete<double, std::false_type>,
        QtPrivate::TypeAndForceComplete<double, std::false_type>,
        QtPrivate::TypeAndForceComplete<float, std::false_type>,
        // method 'writeMissionToVehicle'
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'readMissionFromVehicle'
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'clearMission'
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'saveMission'
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'loadMission'
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'addMissionItem'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<double, std::false_type>,
        QtPrivate::TypeAndForceComplete<double, std::false_type>,
        QtPrivate::TypeAndForceComplete<float, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'addMissionItem'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<double, std::false_type>,
        QtPrivate::TypeAndForceComplete<double, std::false_type>,
        QtPrivate::TypeAndForceComplete<float, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'updateMissionItem'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<double, std::false_type>,
        QtPrivate::TypeAndForceComplete<double, std::false_type>,
        QtPrivate::TypeAndForceComplete<float, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<float, std::false_type>,
        QtPrivate::TypeAndForceComplete<float, std::false_type>,
        QtPrivate::TypeAndForceComplete<float, std::false_type>,
        QtPrivate::TypeAndForceComplete<float, std::false_type>,
        // method 'updateMissionItem'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<double, std::false_type>,
        QtPrivate::TypeAndForceComplete<double, std::false_type>,
        QtPrivate::TypeAndForceComplete<float, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<float, std::false_type>,
        QtPrivate::TypeAndForceComplete<float, std::false_type>,
        QtPrivate::TypeAndForceComplete<float, std::false_type>,
        // method 'updateMissionItem'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<double, std::false_type>,
        QtPrivate::TypeAndForceComplete<double, std::false_type>,
        QtPrivate::TypeAndForceComplete<float, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<float, std::false_type>,
        QtPrivate::TypeAndForceComplete<float, std::false_type>,
        // method 'updateMissionItem'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<double, std::false_type>,
        QtPrivate::TypeAndForceComplete<double, std::false_type>,
        QtPrivate::TypeAndForceComplete<float, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<float, std::false_type>,
        // method 'updateMissionItem'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<double, std::false_type>,
        QtPrivate::TypeAndForceComplete<double, std::false_type>,
        QtPrivate::TypeAndForceComplete<float, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'removeMissionItem'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'getMissionItems'
        QtPrivate::TypeAndForceComplete<QVariantList, std::false_type>,
        // method 'createMissionItems'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QVariantList &, std::false_type>,
        // method 'getParameterGroups'
        QtPrivate::TypeAndForceComplete<QVariantList, std::false_type>,
        // method 'getParametersByGroup'
        QtPrivate::TypeAndForceComplete<QVariantList, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'setParameterValue'
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        QtPrivate::TypeAndForceComplete<QVariant, std::false_type>,
        // method 'saveAllParameters'
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'getParameterDescription'
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'getParameterUnits'
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'getParameterDefault'
        QtPrivate::TypeAndForceComplete<QVariant, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'getParameterOptions'
        QtPrivate::TypeAndForceComplete<QVariantList, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'getParameterValue'
        QtPrivate::TypeAndForceComplete<float, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        QtPrivate::TypeAndForceComplete<float, std::false_type>,
        // method 'getParameterValue'
        QtPrivate::TypeAndForceComplete<float, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'refreshParameters'
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'hasModifiedParameters'
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'cancelParameterRequest'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'startAccelCalibration'
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'startLevelCalibration'
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'startSimpleCalibration'
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'cancelAccelCalibration'
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'confirmAccelCalibrationPosition'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'startCompassCalibration'
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'cancelCompassCalibration'
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'retryCompassCalibration'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'rebootVehicle'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'startRCCalibration'
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'cancelRCCalibration'
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'saveRCCalibration'
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'setRCReversed'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'getRCCalibrationData'
        QtPrivate::TypeAndForceComplete<QVariantList, std::false_type>,
        // method 'startESCCalibration'
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'cancelESCCalibration'
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'saveESCCalibration'
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'setESCSafetyChecks'
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'getESCCalibrationData'
        QtPrivate::TypeAndForceComplete<QVariantList, std::false_type>,
        // method 'testMotor'
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'testAllMotors'
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'testMotorsInSequence'
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'stopAllMotors'
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'setMotorSpinArm'
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        QtPrivate::TypeAndForceComplete<float, std::false_type>,
        // method 'setMotorSpinArm'
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'setMotorSpinMin'
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        QtPrivate::TypeAndForceComplete<float, std::false_type>,
        // method 'setMotorSpinMin'
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'textPasted'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'handleServoOutputChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QVector<uint16_t> &, std::false_type>,
        // method 'startRecordingTime'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'stopRecordingTime'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'getRCChannelValues'
        QtPrivate::TypeAndForceComplete<QVariantList, std::false_type>
    >,
    nullptr
} };

void GCSController::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<GCSController *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->recordingTimeChanged(); break;
        case 1: _t->errorMessage((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 2: _t->recordingFailed(); break;
        case 3: _t->recording_already_started(); break;
        case 4: _t->b2_unable_disable((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 5: _t->b1_unable_disable((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 6: _t->latitudeChanged((*reinterpret_cast< std::add_pointer_t<double>>(_a[1]))); break;
        case 7: _t->longitudeChanged((*reinterpret_cast< std::add_pointer_t<double>>(_a[1]))); break;
        case 8: _t->altitudeChanged((*reinterpret_cast< std::add_pointer_t<double>>(_a[1]))); break;
        case 9: _t->relativeAltitudeChanged((*reinterpret_cast< std::add_pointer_t<double>>(_a[1]))); break;
        case 10: _t->voltageChanged((*reinterpret_cast< std::add_pointer_t<double>>(_a[1]))); break;
        case 11: _t->currentChanged((*reinterpret_cast< std::add_pointer_t<double>>(_a[1]))); break;
        case 12: _t->batteryPercentChanged((*reinterpret_cast< std::add_pointer_t<double>>(_a[1]))); break;
        case 13: _t->flightModeChanged((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 14: _t->armedStateChanged((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 15: _t->connectionStateChanged((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 16: _t->airSpeedChanged((*reinterpret_cast< std::add_pointer_t<double>>(_a[1]))); break;
        case 17: _t->groundSpeedChanged((*reinterpret_cast< std::add_pointer_t<double>>(_a[1]))); break;
        case 18: _t->yawChanged((*reinterpret_cast< std::add_pointer_t<double>>(_a[1]))); break;
        case 19: _t->rollChanged((*reinterpret_cast< std::add_pointer_t<double>>(_a[1]))); break;
        case 20: _t->pitchChanged((*reinterpret_cast< std::add_pointer_t<double>>(_a[1]))); break;
        case 21: _t->headingChanged((*reinterpret_cast< std::add_pointer_t<double>>(_a[1]))); break;
        case 22: _t->throttleChanged((*reinterpret_cast< std::add_pointer_t<double>>(_a[1]))); break;
        case 23: _t->gpsFixTypeChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 24: _t->satellitesChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 25: _t->hdopChanged((*reinterpret_cast< std::add_pointer_t<double>>(_a[1]))); break;
        case 26: _t->servoOutputChanged((*reinterpret_cast< std::add_pointer_t<QVariantList>>(_a[1]))); break;
        case 27: _t->depthChanged((*reinterpret_cast< std::add_pointer_t<float>>(_a[1]))); break;
        case 28: _t->waterTemperatureChanged((*reinterpret_cast< std::add_pointer_t<float>>(_a[1]))); break;
        case 29: _t->rangefinderDistanceChanged((*reinterpret_cast< std::add_pointer_t<float>>(_a[1]))); break;
        case 30: _t->escDataChanged(); break;
        case 31: _t->imuTemperaturesChanged(); break;
        case 32: _t->pressureChanged((*reinterpret_cast< std::add_pointer_t<float>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<float>>(_a[2]))); break;
        case 33: _t->sequenceMotorChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 34: _t->distanceFromHomeChanged((*reinterpret_cast< std::add_pointer_t<double>>(_a[1]))); break;
        case 35: _t->landedStateChanged((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 36: _t->notificationsChanged(); break;
        case 37: _t->errorsChanged(); break;
        case 38: _t->parameterValueChanged((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<float>>(_a[2]))); break;
        case 39: _t->modeChanged((*reinterpret_cast< std::add_pointer_t<uint8_t>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<uint32_t>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<uint8_t>>(_a[3]))); break;
        case 40: _t->homePositionChanged((*reinterpret_cast< std::add_pointer_t<double>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<double>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<double>>(_a[3]))); break;
        case 41: _t->vehicleTypeChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 42: _t->vehicleStateChanged((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 43: _t->preArmChecksChanged(); break;
        case 44: _t->sensorsHealthyChanged((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 45: _t->missionProgressChanged((*reinterpret_cast< std::add_pointer_t<float>>(_a[1]))); break;
        case 46: _t->missionTransferCompleted(); break;
        case 47: _t->missionTransferFailed((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 48: _t->missionUpdated(); break;
        case 49: _t->parametersChanged(); break;
        case 50: _t->parameterSaveResult((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[3]))); break;
        case 51: _t->parameterLoadProgress((*reinterpret_cast< std::add_pointer_t<float>>(_a[1]))); break;
        case 52: _t->parameterProgressChanged((*reinterpret_cast< std::add_pointer_t<float>>(_a[1]))); break;
        case 53: _t->localRSSIChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 54: _t->remoteRSSIChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 55: _t->localNoiseChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 56: _t->remoteNoiseChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 57: _t->errorsFixedChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 58: _t->txBufferChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 59: _t->rxErrorChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 60: _t->accelCalibratingChanged((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 61: _t->accelCalibrationProgressChanged((*reinterpret_cast< std::add_pointer_t<float>>(_a[1]))); break;
        case 62: _t->accelCalibrationStepChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 63: _t->accelCalibrationStatusChanged((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 64: _t->accelCalibrationPositionChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 65: _t->accelCalibrationComplete((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 66: _t->compassCalibratingChanged((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 67: _t->compassCalibrationProgressChanged((*reinterpret_cast< std::add_pointer_t<QVariantList>>(_a[1]))); break;
        case 68: _t->compassCalibrationStatusChanged((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 69: _t->compassCalibrationStepChanged((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 70: _t->compassCalibrationComplete((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 71: _t->rcCalibratingChanged((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 72: _t->rcCalibrationProgressChanged((*reinterpret_cast< std::add_pointer_t<float>>(_a[1]))); break;
        case 73: _t->rcCalibrationStatusChanged((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 74: _t->rcCalibrationChannelChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[3])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[4])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[5]))); break;
        case 75: _t->rcCalibrationComplete((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 76: _t->rcChannelsChanged(); break;
        case 77: _t->rcChannelUpdated((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[3])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[4])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[5]))); break;
        case 78: _t->escCalibratingChanged((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 79: _t->escCalibrationProgressChanged((*reinterpret_cast< std::add_pointer_t<float>>(_a[1]))); break;
        case 80: _t->escCalibrationStatusChanged((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 81: _t->escCalibrationMotorValue((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2]))); break;
        case 82: _t->escCalibrationComplete((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 83: _t->escMotorValuesChanged(); break;
        case 84: _t->motorTestComplete((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2]))); break;
        case 85: _t->modeChanged(); break;
        case 86: _t->captureModeChanged(); break;
        case 87: _t->textReceived((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 88: _t->capture_mode_changed(); break;
        case 89: { bool _r = _t->connectVehicle((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[3])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[4])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 90: { bool _r = _t->connectVehicle((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[3])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 91: _t->disconnectVehicle(); break;
        case 92: _t->setFlightMode((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 93: { QStringList _r = _t->getAvailableSerialPorts();
            if (_a[0]) *reinterpret_cast< QStringList*>(_a[0]) = std::move(_r); }  break;
        case 94: { bool _r = _t->connectSerialPort((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 95: { bool _r = _t->armVehicle();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 96: { bool _r = _t->disarmVehicle();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 97: { QString _r = _t->openFolderDialog();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 98: { QString _r = _t->setRecordingMode((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 99: { QString _r = _t->capture_auto((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 100: { QString _r = _t->getRecordingMode();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 101: { QString _r = _t->getCaptureMode();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 102: { QVariantList _r = _t->getESCData();
            if (_a[0]) *reinterpret_cast< QVariantList*>(_a[0]) = std::move(_r); }  break;
        case 103: { QVariantList _r = _t->getIMUTemperatures();
            if (_a[0]) *reinterpret_cast< QVariantList*>(_a[0]) = std::move(_r); }  break;
        case 104: { QVariantList _r = _t->getServoOutputValues();
            if (_a[0]) *reinterpret_cast< QVariantList*>(_a[0]) = std::move(_r); }  break;
        case 105: _t->modes((*reinterpret_cast< std::add_pointer_t<QString&>>(_a[1]))); break;
        case 106: _t->startRecording((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[3]))); break;
        case 107: _t->stopRecording(); break;
        case 108: _t->capture_image((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[3]))); break;
        case 109: _t->button_1_clicked((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 110: _t->button_2_clicked((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 111: _t->setDroneStatus((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 112: { bool _r = _t->takeoff((*reinterpret_cast< std::add_pointer_t<float>>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 113: { bool _r = _t->land();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 114: { bool _r = _t->returnToLaunch();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 115: { bool _r = _t->setHomePosition((*reinterpret_cast< std::add_pointer_t<double>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<double>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<float>>(_a[3])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 116: { bool _r = _t->repositionVehicle((*reinterpret_cast< std::add_pointer_t<double>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<double>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<float>>(_a[3])),(*reinterpret_cast< std::add_pointer_t<float>>(_a[4])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 117: { bool _r = _t->repositionVehicle((*reinterpret_cast< std::add_pointer_t<double>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<double>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<float>>(_a[3])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 118: { bool _r = _t->writeMissionToVehicle();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 119: { bool _r = _t->readMissionFromVehicle();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 120: { bool _r = _t->clearMission();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 121: { bool _r = _t->saveMission((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 122: { bool _r = _t->loadMission((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 123: _t->addMissionItem((*reinterpret_cast< std::add_pointer_t<double>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<double>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<float>>(_a[3])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[4])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[5]))); break;
        case 124: _t->addMissionItem((*reinterpret_cast< std::add_pointer_t<double>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<double>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<float>>(_a[3])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[4]))); break;
        case 125: _t->updateMissionItem((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<double>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<double>>(_a[3])),(*reinterpret_cast< std::add_pointer_t<float>>(_a[4])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[5])),(*reinterpret_cast< std::add_pointer_t<float>>(_a[6])),(*reinterpret_cast< std::add_pointer_t<float>>(_a[7])),(*reinterpret_cast< std::add_pointer_t<float>>(_a[8])),(*reinterpret_cast< std::add_pointer_t<float>>(_a[9]))); break;
        case 126: _t->updateMissionItem((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<double>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<double>>(_a[3])),(*reinterpret_cast< std::add_pointer_t<float>>(_a[4])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[5])),(*reinterpret_cast< std::add_pointer_t<float>>(_a[6])),(*reinterpret_cast< std::add_pointer_t<float>>(_a[7])),(*reinterpret_cast< std::add_pointer_t<float>>(_a[8]))); break;
        case 127: _t->updateMissionItem((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<double>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<double>>(_a[3])),(*reinterpret_cast< std::add_pointer_t<float>>(_a[4])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[5])),(*reinterpret_cast< std::add_pointer_t<float>>(_a[6])),(*reinterpret_cast< std::add_pointer_t<float>>(_a[7]))); break;
        case 128: _t->updateMissionItem((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<double>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<double>>(_a[3])),(*reinterpret_cast< std::add_pointer_t<float>>(_a[4])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[5])),(*reinterpret_cast< std::add_pointer_t<float>>(_a[6]))); break;
        case 129: _t->updateMissionItem((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<double>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<double>>(_a[3])),(*reinterpret_cast< std::add_pointer_t<float>>(_a[4])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[5]))); break;
        case 130: _t->removeMissionItem((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 131: { QVariantList _r = _t->getMissionItems();
            if (_a[0]) *reinterpret_cast< QVariantList*>(_a[0]) = std::move(_r); }  break;
        case 132: _t->createMissionItems((*reinterpret_cast< std::add_pointer_t<QVariantList>>(_a[1]))); break;
        case 133: { QVariantList _r = _t->getParameterGroups();
            if (_a[0]) *reinterpret_cast< QVariantList*>(_a[0]) = std::move(_r); }  break;
        case 134: { QVariantList _r = _t->getParametersByGroup((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])));
            if (_a[0]) *reinterpret_cast< QVariantList*>(_a[0]) = std::move(_r); }  break;
        case 135: { bool _r = _t->setParameterValue((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QVariant>>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 136: { bool _r = _t->saveAllParameters();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 137: { QString _r = _t->getParameterDescription((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 138: { QString _r = _t->getParameterUnits((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 139: { QVariant _r = _t->getParameterDefault((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])));
            if (_a[0]) *reinterpret_cast< QVariant*>(_a[0]) = std::move(_r); }  break;
        case 140: { QVariantList _r = _t->getParameterOptions((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])));
            if (_a[0]) *reinterpret_cast< QVariantList*>(_a[0]) = std::move(_r); }  break;
        case 141: { float _r = _t->getParameterValue((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<float>>(_a[2])));
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 142: { float _r = _t->getParameterValue((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])));
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 143: { bool _r = _t->refreshParameters();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 144: { bool _r = _t->hasModifiedParameters();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 145: _t->cancelParameterRequest(); break;
        case 146: { bool _r = _t->startAccelCalibration();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 147: { bool _r = _t->startLevelCalibration();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 148: { bool _r = _t->startSimpleCalibration();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 149: { bool _r = _t->cancelAccelCalibration();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 150: _t->confirmAccelCalibrationPosition(); break;
        case 151: { bool _r = _t->startCompassCalibration();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 152: { bool _r = _t->cancelCompassCalibration();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 153: _t->retryCompassCalibration(); break;
        case 154: _t->rebootVehicle(); break;
        case 155: { bool _r = _t->startRCCalibration();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 156: { bool _r = _t->cancelRCCalibration();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 157: { bool _r = _t->saveRCCalibration();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 158: _t->setRCReversed((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<bool>>(_a[2]))); break;
        case 159: { QVariantList _r = _t->getRCCalibrationData();
            if (_a[0]) *reinterpret_cast< QVariantList*>(_a[0]) = std::move(_r); }  break;
        case 160: { bool _r = _t->startESCCalibration();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 161: { bool _r = _t->cancelESCCalibration();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 162: { bool _r = _t->saveESCCalibration();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 163: { bool _r = _t->setESCSafetyChecks((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 164: { QVariantList _r = _t->getESCCalibrationData();
            if (_a[0]) *reinterpret_cast< QVariantList*>(_a[0]) = std::move(_r); }  break;
        case 165: { bool _r = _t->testMotor((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[3])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 166: { bool _r = _t->testAllMotors((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 167: { bool _r = _t->testMotorsInSequence((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 168: { bool _r = _t->stopAllMotors();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 169: { bool _r = _t->setMotorSpinArm((*reinterpret_cast< std::add_pointer_t<float>>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 170: { bool _r = _t->setMotorSpinArm();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 171: { bool _r = _t->setMotorSpinMin((*reinterpret_cast< std::add_pointer_t<float>>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 172: { bool _r = _t->setMotorSpinMin();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 173: _t->textPasted((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 174: _t->handleServoOutputChanged((*reinterpret_cast< std::add_pointer_t<QList<uint16_t>>>(_a[1]))); break;
        case 175: _t->startRecordingTime(); break;
        case 176: _t->stopRecordingTime(); break;
        case 177: { QVariantList _r = _t->getRCChannelValues();
            if (_a[0]) *reinterpret_cast< QVariantList*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _q_method_type = void (GCSController::*)();
            if (_q_method_type _q_method = &GCSController::recordingTimeChanged; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _q_method_type = void (GCSController::*)(const QString & );
            if (_q_method_type _q_method = &GCSController::errorMessage; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
        {
            using _q_method_type = void (GCSController::*)();
            if (_q_method_type _q_method = &GCSController::recordingFailed; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 2;
                return;
            }
        }
        {
            using _q_method_type = void (GCSController::*)();
            if (_q_method_type _q_method = &GCSController::recording_already_started; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 3;
                return;
            }
        }
        {
            using _q_method_type = void (GCSController::*)(const QString & );
            if (_q_method_type _q_method = &GCSController::b2_unable_disable; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 4;
                return;
            }
        }
        {
            using _q_method_type = void (GCSController::*)(const QString & );
            if (_q_method_type _q_method = &GCSController::b1_unable_disable; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 5;
                return;
            }
        }
        {
            using _q_method_type = void (GCSController::*)(double );
            if (_q_method_type _q_method = &GCSController::latitudeChanged; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 6;
                return;
            }
        }
        {
            using _q_method_type = void (GCSController::*)(double );
            if (_q_method_type _q_method = &GCSController::longitudeChanged; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 7;
                return;
            }
        }
        {
            using _q_method_type = void (GCSController::*)(double );
            if (_q_method_type _q_method = &GCSController::altitudeChanged; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 8;
                return;
            }
        }
        {
            using _q_method_type = void (GCSController::*)(double );
            if (_q_method_type _q_method = &GCSController::relativeAltitudeChanged; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 9;
                return;
            }
        }
        {
            using _q_method_type = void (GCSController::*)(double );
            if (_q_method_type _q_method = &GCSController::voltageChanged; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 10;
                return;
            }
        }
        {
            using _q_method_type = void (GCSController::*)(double );
            if (_q_method_type _q_method = &GCSController::currentChanged; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 11;
                return;
            }
        }
        {
            using _q_method_type = void (GCSController::*)(double );
            if (_q_method_type _q_method = &GCSController::batteryPercentChanged; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 12;
                return;
            }
        }
        {
            using _q_method_type = void (GCSController::*)(const QString & );
            if (_q_method_type _q_method = &GCSController::flightModeChanged; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 13;
                return;
            }
        }
        {
            using _q_method_type = void (GCSController::*)(bool );
            if (_q_method_type _q_method = &GCSController::armedStateChanged; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 14;
                return;
            }
        }
        {
            using _q_method_type = void (GCSController::*)(bool );
            if (_q_method_type _q_method = &GCSController::connectionStateChanged; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 15;
                return;
            }
        }
        {
            using _q_method_type = void (GCSController::*)(double );
            if (_q_method_type _q_method = &GCSController::airSpeedChanged; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 16;
                return;
            }
        }
        {
            using _q_method_type = void (GCSController::*)(double );
            if (_q_method_type _q_method = &GCSController::groundSpeedChanged; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 17;
                return;
            }
        }
        {
            using _q_method_type = void (GCSController::*)(double );
            if (_q_method_type _q_method = &GCSController::yawChanged; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 18;
                return;
            }
        }
        {
            using _q_method_type = void (GCSController::*)(double );
            if (_q_method_type _q_method = &GCSController::rollChanged; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 19;
                return;
            }
        }
        {
            using _q_method_type = void (GCSController::*)(double );
            if (_q_method_type _q_method = &GCSController::pitchChanged; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 20;
                return;
            }
        }
        {
            using _q_method_type = void (GCSController::*)(double );
            if (_q_method_type _q_method = &GCSController::headingChanged; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 21;
                return;
            }
        }
        {
            using _q_method_type = void (GCSController::*)(double );
            if (_q_method_type _q_method = &GCSController::throttleChanged; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 22;
                return;
            }
        }
        {
            using _q_method_type = void (GCSController::*)(int );
            if (_q_method_type _q_method = &GCSController::gpsFixTypeChanged; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 23;
                return;
            }
        }
        {
            using _q_method_type = void (GCSController::*)(int );
            if (_q_method_type _q_method = &GCSController::satellitesChanged; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 24;
                return;
            }
        }
        {
            using _q_method_type = void (GCSController::*)(double );
            if (_q_method_type _q_method = &GCSController::hdopChanged; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 25;
                return;
            }
        }
        {
            using _q_method_type = void (GCSController::*)(const QVariantList & );
            if (_q_method_type _q_method = &GCSController::servoOutputChanged; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 26;
                return;
            }
        }
        {
            using _q_method_type = void (GCSController::*)(float );
            if (_q_method_type _q_method = &GCSController::depthChanged; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 27;
                return;
            }
        }
        {
            using _q_method_type = void (GCSController::*)(float );
            if (_q_method_type _q_method = &GCSController::waterTemperatureChanged; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 28;
                return;
            }
        }
        {
            using _q_method_type = void (GCSController::*)(float );
            if (_q_method_type _q_method = &GCSController::rangefinderDistanceChanged; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 29;
                return;
            }
        }
        {
            using _q_method_type = void (GCSController::*)();
            if (_q_method_type _q_method = &GCSController::escDataChanged; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 30;
                return;
            }
        }
        {
            using _q_method_type = void (GCSController::*)();
            if (_q_method_type _q_method = &GCSController::imuTemperaturesChanged; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 31;
                return;
            }
        }
        {
            using _q_method_type = void (GCSController::*)(float , float );
            if (_q_method_type _q_method = &GCSController::pressureChanged; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 32;
                return;
            }
        }
        {
            using _q_method_type = void (GCSController::*)(int );
            if (_q_method_type _q_method = &GCSController::sequenceMotorChanged; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 33;
                return;
            }
        }
        {
            using _q_method_type = void (GCSController::*)(double );
            if (_q_method_type _q_method = &GCSController::distanceFromHomeChanged; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 34;
                return;
            }
        }
        {
            using _q_method_type = void (GCSController::*)(const QString & );
            if (_q_method_type _q_method = &GCSController::landedStateChanged; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 35;
                return;
            }
        }
        {
            using _q_method_type = void (GCSController::*)();
            if (_q_method_type _q_method = &GCSController::notificationsChanged; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 36;
                return;
            }
        }
        {
            using _q_method_type = void (GCSController::*)();
            if (_q_method_type _q_method = &GCSController::errorsChanged; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 37;
                return;
            }
        }
        {
            using _q_method_type = void (GCSController::*)(QString , float );
            if (_q_method_type _q_method = &GCSController::parameterValueChanged; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 38;
                return;
            }
        }
        {
            using _q_method_type = void (GCSController::*)(uint8_t , uint32_t , uint8_t );
            if (_q_method_type _q_method = &GCSController::modeChanged; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 39;
                return;
            }
        }
        {
            using _q_method_type = void (GCSController::*)(double , double , double );
            if (_q_method_type _q_method = &GCSController::homePositionChanged; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 40;
                return;
            }
        }
        {
            using _q_method_type = void (GCSController::*)(int );
            if (_q_method_type _q_method = &GCSController::vehicleTypeChanged; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 41;
                return;
            }
        }
        {
            using _q_method_type = void (GCSController::*)(const QString & );
            if (_q_method_type _q_method = &GCSController::vehicleStateChanged; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 42;
                return;
            }
        }
        {
            using _q_method_type = void (GCSController::*)();
            if (_q_method_type _q_method = &GCSController::preArmChecksChanged; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 43;
                return;
            }
        }
        {
            using _q_method_type = void (GCSController::*)(bool );
            if (_q_method_type _q_method = &GCSController::sensorsHealthyChanged; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 44;
                return;
            }
        }
        {
            using _q_method_type = void (GCSController::*)(float );
            if (_q_method_type _q_method = &GCSController::missionProgressChanged; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 45;
                return;
            }
        }
        {
            using _q_method_type = void (GCSController::*)();
            if (_q_method_type _q_method = &GCSController::missionTransferCompleted; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 46;
                return;
            }
        }
        {
            using _q_method_type = void (GCSController::*)(QString );
            if (_q_method_type _q_method = &GCSController::missionTransferFailed; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 47;
                return;
            }
        }
        {
            using _q_method_type = void (GCSController::*)();
            if (_q_method_type _q_method = &GCSController::missionUpdated; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 48;
                return;
            }
        }
        {
            using _q_method_type = void (GCSController::*)();
            if (_q_method_type _q_method = &GCSController::parametersChanged; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 49;
                return;
            }
        }
        {
            using _q_method_type = void (GCSController::*)(bool , int , int );
            if (_q_method_type _q_method = &GCSController::parameterSaveResult; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 50;
                return;
            }
        }
        {
            using _q_method_type = void (GCSController::*)(float );
            if (_q_method_type _q_method = &GCSController::parameterLoadProgress; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 51;
                return;
            }
        }
        {
            using _q_method_type = void (GCSController::*)(float );
            if (_q_method_type _q_method = &GCSController::parameterProgressChanged; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 52;
                return;
            }
        }
        {
            using _q_method_type = void (GCSController::*)(int );
            if (_q_method_type _q_method = &GCSController::localRSSIChanged; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 53;
                return;
            }
        }
        {
            using _q_method_type = void (GCSController::*)(int );
            if (_q_method_type _q_method = &GCSController::remoteRSSIChanged; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 54;
                return;
            }
        }
        {
            using _q_method_type = void (GCSController::*)(int );
            if (_q_method_type _q_method = &GCSController::localNoiseChanged; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 55;
                return;
            }
        }
        {
            using _q_method_type = void (GCSController::*)(int );
            if (_q_method_type _q_method = &GCSController::remoteNoiseChanged; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 56;
                return;
            }
        }
        {
            using _q_method_type = void (GCSController::*)(int );
            if (_q_method_type _q_method = &GCSController::errorsFixedChanged; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 57;
                return;
            }
        }
        {
            using _q_method_type = void (GCSController::*)(int );
            if (_q_method_type _q_method = &GCSController::txBufferChanged; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 58;
                return;
            }
        }
        {
            using _q_method_type = void (GCSController::*)(int );
            if (_q_method_type _q_method = &GCSController::rxErrorChanged; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 59;
                return;
            }
        }
        {
            using _q_method_type = void (GCSController::*)(bool );
            if (_q_method_type _q_method = &GCSController::accelCalibratingChanged; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 60;
                return;
            }
        }
        {
            using _q_method_type = void (GCSController::*)(float );
            if (_q_method_type _q_method = &GCSController::accelCalibrationProgressChanged; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 61;
                return;
            }
        }
        {
            using _q_method_type = void (GCSController::*)(int );
            if (_q_method_type _q_method = &GCSController::accelCalibrationStepChanged; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 62;
                return;
            }
        }
        {
            using _q_method_type = void (GCSController::*)(const QString & );
            if (_q_method_type _q_method = &GCSController::accelCalibrationStatusChanged; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 63;
                return;
            }
        }
        {
            using _q_method_type = void (GCSController::*)(int );
            if (_q_method_type _q_method = &GCSController::accelCalibrationPositionChanged; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 64;
                return;
            }
        }
        {
            using _q_method_type = void (GCSController::*)(bool );
            if (_q_method_type _q_method = &GCSController::accelCalibrationComplete; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 65;
                return;
            }
        }
        {
            using _q_method_type = void (GCSController::*)(bool );
            if (_q_method_type _q_method = &GCSController::compassCalibratingChanged; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 66;
                return;
            }
        }
        {
            using _q_method_type = void (GCSController::*)(const QVariantList & );
            if (_q_method_type _q_method = &GCSController::compassCalibrationProgressChanged; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 67;
                return;
            }
        }
        {
            using _q_method_type = void (GCSController::*)(const QString & );
            if (_q_method_type _q_method = &GCSController::compassCalibrationStatusChanged; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 68;
                return;
            }
        }
        {
            using _q_method_type = void (GCSController::*)(const QString & );
            if (_q_method_type _q_method = &GCSController::compassCalibrationStepChanged; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 69;
                return;
            }
        }
        {
            using _q_method_type = void (GCSController::*)(bool );
            if (_q_method_type _q_method = &GCSController::compassCalibrationComplete; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 70;
                return;
            }
        }
        {
            using _q_method_type = void (GCSController::*)(bool );
            if (_q_method_type _q_method = &GCSController::rcCalibratingChanged; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 71;
                return;
            }
        }
        {
            using _q_method_type = void (GCSController::*)(float );
            if (_q_method_type _q_method = &GCSController::rcCalibrationProgressChanged; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 72;
                return;
            }
        }
        {
            using _q_method_type = void (GCSController::*)(const QString & );
            if (_q_method_type _q_method = &GCSController::rcCalibrationStatusChanged; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 73;
                return;
            }
        }
        {
            using _q_method_type = void (GCSController::*)(int , int , int , int , int );
            if (_q_method_type _q_method = &GCSController::rcCalibrationChannelChanged; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 74;
                return;
            }
        }
        {
            using _q_method_type = void (GCSController::*)(bool );
            if (_q_method_type _q_method = &GCSController::rcCalibrationComplete; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 75;
                return;
            }
        }
        {
            using _q_method_type = void (GCSController::*)();
            if (_q_method_type _q_method = &GCSController::rcChannelsChanged; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 76;
                return;
            }
        }
        {
            using _q_method_type = void (GCSController::*)(int , int , int , int , int );
            if (_q_method_type _q_method = &GCSController::rcChannelUpdated; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 77;
                return;
            }
        }
        {
            using _q_method_type = void (GCSController::*)(bool );
            if (_q_method_type _q_method = &GCSController::escCalibratingChanged; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 78;
                return;
            }
        }
        {
            using _q_method_type = void (GCSController::*)(float );
            if (_q_method_type _q_method = &GCSController::escCalibrationProgressChanged; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 79;
                return;
            }
        }
        {
            using _q_method_type = void (GCSController::*)(const QString & );
            if (_q_method_type _q_method = &GCSController::escCalibrationStatusChanged; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 80;
                return;
            }
        }
        {
            using _q_method_type = void (GCSController::*)(int , int );
            if (_q_method_type _q_method = &GCSController::escCalibrationMotorValue; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 81;
                return;
            }
        }
        {
            using _q_method_type = void (GCSController::*)(bool );
            if (_q_method_type _q_method = &GCSController::escCalibrationComplete; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 82;
                return;
            }
        }
        {
            using _q_method_type = void (GCSController::*)();
            if (_q_method_type _q_method = &GCSController::escMotorValuesChanged; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 83;
                return;
            }
        }
        {
            using _q_method_type = void (GCSController::*)(bool , QString );
            if (_q_method_type _q_method = &GCSController::motorTestComplete; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 84;
                return;
            }
        }
        {
            using _q_method_type = void (GCSController::*)();
            if (_q_method_type _q_method = &GCSController::modeChanged; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 85;
                return;
            }
        }
        {
            using _q_method_type = void (GCSController::*)();
            if (_q_method_type _q_method = &GCSController::captureModeChanged; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 86;
                return;
            }
        }
        {
            using _q_method_type = void (GCSController::*)(QString );
            if (_q_method_type _q_method = &GCSController::textReceived; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 87;
                return;
            }
        }
        {
            using _q_method_type = void (GCSController::*)();
            if (_q_method_type _q_method = &GCSController::capture_mode_changed; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 88;
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
        case 11: *reinterpret_cast< int*>(_v) = _t->localRSSI(); break;
        case 12: *reinterpret_cast< int*>(_v) = _t->remoteRSSI(); break;
        case 13: *reinterpret_cast< int*>(_v) = _t->localNoise(); break;
        case 14: *reinterpret_cast< int*>(_v) = _t->remoteNoise(); break;
        case 15: *reinterpret_cast< int*>(_v) = _t->errorsFixed(); break;
        case 16: *reinterpret_cast< int*>(_v) = _t->txBuffer(); break;
        case 17: *reinterpret_cast< int*>(_v) = _t->rxError(); break;
        case 18: *reinterpret_cast< QVariantList*>(_v) = _t->getServoOutputValues(); break;
        case 19: *reinterpret_cast< float*>(_v) = _t->depth(); break;
        case 20: *reinterpret_cast< float*>(_v) = _t->waterTemperature(); break;
        case 21: *reinterpret_cast< float*>(_v) = _t->rangefinderDistance(); break;
        case 22: *reinterpret_cast< float*>(_v) = _t->pressureAbs(); break;
        case 23: *reinterpret_cast< float*>(_v) = _t->pressureDiff(); break;
        case 24: *reinterpret_cast< QVariantList*>(_v) = _t->getESCData(); break;
        case 25: *reinterpret_cast< QVariantList*>(_v) = _t->getIMUTemperatures(); break;
        case 26: *reinterpret_cast< double*>(_v) = _t->groundSpeed(); break;
        case 27: *reinterpret_cast< double*>(_v) = _t->heading(); break;
        case 28: *reinterpret_cast< double*>(_v) = _t->throttle(); break;
        case 29: *reinterpret_cast< int*>(_v) = _t->gpsFixType(); break;
        case 30: *reinterpret_cast< int*>(_v) = _t->satellites(); break;
        case 31: *reinterpret_cast< double*>(_v) = _t->yaw(); break;
        case 32: *reinterpret_cast< double*>(_v) = _t->roll(); break;
        case 33: *reinterpret_cast< double*>(_v) = _t->pitch(); break;
        case 34: *reinterpret_cast< double*>(_v) = _t->hdop(); break;
        case 35: *reinterpret_cast< double*>(_v) = _t->distanceFromHome(); break;
        case 36: *reinterpret_cast< QString*>(_v) = _t->landedState(); break;
        case 37: *reinterpret_cast< QStringList*>(_v) = _t->notifications(); break;
        case 38: *reinterpret_cast< QStringList*>(_v) = _t->errors(); break;
        case 39: *reinterpret_cast< double*>(_v) = _t->homeLatitude(); break;
        case 40: *reinterpret_cast< double*>(_v) = _t->homeLongitude(); break;
        case 41: *reinterpret_cast< double*>(_v) = _t->homeAltitude(); break;
        case 42: *reinterpret_cast< int*>(_v) = _t->vehicleType(); break;
        case 43: *reinterpret_cast< bool*>(_v) = _t->isArmed(); break;
        case 44: *reinterpret_cast< QString*>(_v) = _t->vehicleState(); break;
        case 45: *reinterpret_cast< QStringList*>(_v) = _t->preArmChecks(); break;
        case 46: *reinterpret_cast< bool*>(_v) = _t->sensorsHealthy(); break;
        case 47: *reinterpret_cast< float*>(_v) = _t->missionProgress(); break;
        case 48: *reinterpret_cast< bool*>(_v) = _t->isMissionUploadInProgress(); break;
        case 49: *reinterpret_cast< bool*>(_v) = _t->hasModifiedParameters(); break;
        case 50: *reinterpret_cast< float*>(_v) = _t->parameterProgress(); break;
        case 51: *reinterpret_cast< bool*>(_v) = _t->isAccelCalibrating(); break;
        case 52: *reinterpret_cast< float*>(_v) = _t->accelCalibrationProgress(); break;
        case 53: *reinterpret_cast< int*>(_v) = _t->accelCalibrationStep(); break;
        case 54: *reinterpret_cast< QString*>(_v) = _t->accelCalibrationStatus(); break;
        case 55: *reinterpret_cast< QVariantList*>(_v) = _t->getPositionConfirmed(); break;
        case 56: *reinterpret_cast< bool*>(_v) = _t->isCompassCalibrating(); break;
        case 57: *reinterpret_cast< QVariantList*>(_v) = _t->compassCalibrationProgress(); break;
        case 58: *reinterpret_cast< QString*>(_v) = _t->compassCalibrationStatus(); break;
        case 59: *reinterpret_cast< bool*>(_v) = _t->isRCCalibrating(); break;
        case 60: *reinterpret_cast< float*>(_v) = _t->rcCalibrationProgress(); break;
        case 61: *reinterpret_cast< QString*>(_v) = _t->rcCalibrationStatus(); break;
        case 62: *reinterpret_cast< QVariantList*>(_v) = _t->getRCChannelValues(); break;
        case 63: *reinterpret_cast< bool*>(_v) = _t->isRCDataAvailable(); break;
        case 64: *reinterpret_cast< bool*>(_v) = _t->isESCCalibrating(); break;
        case 65: *reinterpret_cast< float*>(_v) = _t->escCalibrationProgress(); break;
        case 66: *reinterpret_cast< QString*>(_v) = _t->escCalibrationStatus(); break;
        case 67: *reinterpret_cast< QVariantList*>(_v) = _t->getESCMotorValues(); break;
        case 68: *reinterpret_cast< QString*>(_v) = _t->getRecordingMode(); break;
        case 69: *reinterpret_cast< QString*>(_v) = _t->getCaptureMode(); break;
        case 70: *reinterpret_cast< QString*>(_v) = _t->getFormattedTime(); break;
        case 71: *reinterpret_cast< QString*>(_v) = _t->getStartTime(); break;
        case 72: *reinterpret_cast< QString*>(_v) = _t->getEndTime(); break;
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
        if (_id < 178)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 178;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 178)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 178;
    }
    if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 73;
    }
    return _id;
}

// SIGNAL 0
void GCSController::recordingTimeChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void GCSController::errorMessage(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void GCSController::recordingFailed()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void GCSController::recording_already_started()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void GCSController::b2_unable_disable(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void GCSController::b1_unable_disable(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void GCSController::latitudeChanged(double _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void GCSController::longitudeChanged(double _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void GCSController::altitudeChanged(double _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}

// SIGNAL 9
void GCSController::relativeAltitudeChanged(double _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 9, _a);
}

// SIGNAL 10
void GCSController::voltageChanged(double _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 10, _a);
}

// SIGNAL 11
void GCSController::currentChanged(double _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 11, _a);
}

// SIGNAL 12
void GCSController::batteryPercentChanged(double _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 12, _a);
}

// SIGNAL 13
void GCSController::flightModeChanged(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 13, _a);
}

// SIGNAL 14
void GCSController::armedStateChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 14, _a);
}

// SIGNAL 15
void GCSController::connectionStateChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 15, _a);
}

// SIGNAL 16
void GCSController::airSpeedChanged(double _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 16, _a);
}

// SIGNAL 17
void GCSController::groundSpeedChanged(double _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 17, _a);
}

// SIGNAL 18
void GCSController::yawChanged(double _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 18, _a);
}

// SIGNAL 19
void GCSController::rollChanged(double _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 19, _a);
}

// SIGNAL 20
void GCSController::pitchChanged(double _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 20, _a);
}

// SIGNAL 21
void GCSController::headingChanged(double _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 21, _a);
}

// SIGNAL 22
void GCSController::throttleChanged(double _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 22, _a);
}

// SIGNAL 23
void GCSController::gpsFixTypeChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 23, _a);
}

// SIGNAL 24
void GCSController::satellitesChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 24, _a);
}

// SIGNAL 25
void GCSController::hdopChanged(double _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 25, _a);
}

// SIGNAL 26
void GCSController::servoOutputChanged(const QVariantList & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 26, _a);
}

// SIGNAL 27
void GCSController::depthChanged(float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 27, _a);
}

// SIGNAL 28
void GCSController::waterTemperatureChanged(float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 28, _a);
}

// SIGNAL 29
void GCSController::rangefinderDistanceChanged(float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 29, _a);
}

// SIGNAL 30
void GCSController::escDataChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 30, nullptr);
}

// SIGNAL 31
void GCSController::imuTemperaturesChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 31, nullptr);
}

// SIGNAL 32
void GCSController::pressureChanged(float _t1, float _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 32, _a);
}

// SIGNAL 33
void GCSController::sequenceMotorChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 33, _a);
}

// SIGNAL 34
void GCSController::distanceFromHomeChanged(double _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 34, _a);
}

// SIGNAL 35
void GCSController::landedStateChanged(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 35, _a);
}

// SIGNAL 36
void GCSController::notificationsChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 36, nullptr);
}

// SIGNAL 37
void GCSController::errorsChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 37, nullptr);
}

// SIGNAL 38
void GCSController::parameterValueChanged(QString _t1, float _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 38, _a);
}

// SIGNAL 39
void GCSController::modeChanged(uint8_t _t1, uint32_t _t2, uint8_t _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))) };
    QMetaObject::activate(this, &staticMetaObject, 39, _a);
}

// SIGNAL 40
void GCSController::homePositionChanged(double _t1, double _t2, double _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))) };
    QMetaObject::activate(this, &staticMetaObject, 40, _a);
}

// SIGNAL 41
void GCSController::vehicleTypeChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 41, _a);
}

// SIGNAL 42
void GCSController::vehicleStateChanged(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 42, _a);
}

// SIGNAL 43
void GCSController::preArmChecksChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 43, nullptr);
}

// SIGNAL 44
void GCSController::sensorsHealthyChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 44, _a);
}

// SIGNAL 45
void GCSController::missionProgressChanged(float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 45, _a);
}

// SIGNAL 46
void GCSController::missionTransferCompleted()
{
    QMetaObject::activate(this, &staticMetaObject, 46, nullptr);
}

// SIGNAL 47
void GCSController::missionTransferFailed(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 47, _a);
}

// SIGNAL 48
void GCSController::missionUpdated()
{
    QMetaObject::activate(this, &staticMetaObject, 48, nullptr);
}

// SIGNAL 49
void GCSController::parametersChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 49, nullptr);
}

// SIGNAL 50
void GCSController::parameterSaveResult(bool _t1, int _t2, int _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))) };
    QMetaObject::activate(this, &staticMetaObject, 50, _a);
}

// SIGNAL 51
void GCSController::parameterLoadProgress(float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 51, _a);
}

// SIGNAL 52
void GCSController::parameterProgressChanged(float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 52, _a);
}

// SIGNAL 53
void GCSController::localRSSIChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 53, _a);
}

// SIGNAL 54
void GCSController::remoteRSSIChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 54, _a);
}

// SIGNAL 55
void GCSController::localNoiseChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 55, _a);
}

// SIGNAL 56
void GCSController::remoteNoiseChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 56, _a);
}

// SIGNAL 57
void GCSController::errorsFixedChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 57, _a);
}

// SIGNAL 58
void GCSController::txBufferChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 58, _a);
}

// SIGNAL 59
void GCSController::rxErrorChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 59, _a);
}

// SIGNAL 60
void GCSController::accelCalibratingChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 60, _a);
}

// SIGNAL 61
void GCSController::accelCalibrationProgressChanged(float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 61, _a);
}

// SIGNAL 62
void GCSController::accelCalibrationStepChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 62, _a);
}

// SIGNAL 63
void GCSController::accelCalibrationStatusChanged(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 63, _a);
}

// SIGNAL 64
void GCSController::accelCalibrationPositionChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 64, _a);
}

// SIGNAL 65
void GCSController::accelCalibrationComplete(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 65, _a);
}

// SIGNAL 66
void GCSController::compassCalibratingChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 66, _a);
}

// SIGNAL 67
void GCSController::compassCalibrationProgressChanged(const QVariantList & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 67, _a);
}

// SIGNAL 68
void GCSController::compassCalibrationStatusChanged(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 68, _a);
}

// SIGNAL 69
void GCSController::compassCalibrationStepChanged(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 69, _a);
}

// SIGNAL 70
void GCSController::compassCalibrationComplete(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 70, _a);
}

// SIGNAL 71
void GCSController::rcCalibratingChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 71, _a);
}

// SIGNAL 72
void GCSController::rcCalibrationProgressChanged(float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 72, _a);
}

// SIGNAL 73
void GCSController::rcCalibrationStatusChanged(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 73, _a);
}

// SIGNAL 74
void GCSController::rcCalibrationChannelChanged(int _t1, int _t2, int _t3, int _t4, int _t5)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t4))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t5))) };
    QMetaObject::activate(this, &staticMetaObject, 74, _a);
}

// SIGNAL 75
void GCSController::rcCalibrationComplete(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 75, _a);
}

// SIGNAL 76
void GCSController::rcChannelsChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 76, nullptr);
}

// SIGNAL 77
void GCSController::rcChannelUpdated(int _t1, int _t2, int _t3, int _t4, int _t5)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t4))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t5))) };
    QMetaObject::activate(this, &staticMetaObject, 77, _a);
}

// SIGNAL 78
void GCSController::escCalibratingChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 78, _a);
}

// SIGNAL 79
void GCSController::escCalibrationProgressChanged(float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 79, _a);
}

// SIGNAL 80
void GCSController::escCalibrationStatusChanged(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 80, _a);
}

// SIGNAL 81
void GCSController::escCalibrationMotorValue(int _t1, int _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 81, _a);
}

// SIGNAL 82
void GCSController::escCalibrationComplete(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 82, _a);
}

// SIGNAL 83
void GCSController::escMotorValuesChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 83, nullptr);
}

// SIGNAL 84
void GCSController::motorTestComplete(bool _t1, QString _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 84, _a);
}

// SIGNAL 85
void GCSController::modeChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 85, nullptr);
}

// SIGNAL 86
void GCSController::captureModeChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 86, nullptr);
}

// SIGNAL 87
void GCSController::textReceived(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 87, _a);
}

// SIGNAL 88
void GCSController::capture_mode_changed()
{
    QMetaObject::activate(this, &staticMetaObject, 88, nullptr);
}
QT_WARNING_POP
