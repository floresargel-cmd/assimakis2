/****************************************************************************
** Meta object code from reading C++ file 'qserialport.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../qserialport.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qserialport.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_QSerialPort_t {
    QByteArrayData data[108];
    char stringdata0[1553];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QSerialPort_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QSerialPort_t qt_meta_stringdata_QSerialPort = {
    {
QT_MOC_LITERAL(0, 0, 11), // "QSerialPort"
QT_MOC_LITERAL(1, 12, 15), // "baudRateChanged"
QT_MOC_LITERAL(2, 28, 0), // ""
QT_MOC_LITERAL(3, 29, 8), // "baudRate"
QT_MOC_LITERAL(4, 38, 23), // "QSerialPort::Directions"
QT_MOC_LITERAL(5, 62, 10), // "directions"
QT_MOC_LITERAL(6, 73, 15), // "dataBitsChanged"
QT_MOC_LITERAL(7, 89, 21), // "QSerialPort::DataBits"
QT_MOC_LITERAL(8, 111, 8), // "dataBits"
QT_MOC_LITERAL(9, 120, 13), // "parityChanged"
QT_MOC_LITERAL(10, 134, 19), // "QSerialPort::Parity"
QT_MOC_LITERAL(11, 154, 6), // "parity"
QT_MOC_LITERAL(12, 161, 15), // "stopBitsChanged"
QT_MOC_LITERAL(13, 177, 21), // "QSerialPort::StopBits"
QT_MOC_LITERAL(14, 199, 8), // "stopBits"
QT_MOC_LITERAL(15, 208, 18), // "flowControlChanged"
QT_MOC_LITERAL(16, 227, 24), // "QSerialPort::FlowControl"
QT_MOC_LITERAL(17, 252, 11), // "flowControl"
QT_MOC_LITERAL(18, 264, 22), // "dataErrorPolicyChanged"
QT_MOC_LITERAL(19, 287, 28), // "QSerialPort::DataErrorPolicy"
QT_MOC_LITERAL(20, 316, 6), // "policy"
QT_MOC_LITERAL(21, 323, 24), // "dataTerminalReadyChanged"
QT_MOC_LITERAL(22, 348, 3), // "set"
QT_MOC_LITERAL(23, 352, 20), // "requestToSendChanged"
QT_MOC_LITERAL(24, 373, 5), // "error"
QT_MOC_LITERAL(25, 379, 28), // "QSerialPort::SerialPortError"
QT_MOC_LITERAL(26, 408, 15), // "serialPortError"
QT_MOC_LITERAL(27, 424, 30), // "settingsRestoredOnCloseChanged"
QT_MOC_LITERAL(28, 455, 7), // "restore"
QT_MOC_LITERAL(29, 463, 19), // "breakEnabledChanged"
QT_MOC_LITERAL(30, 483, 18), // "_q_startAsyncWrite"
QT_MOC_LITERAL(31, 502, 11), // "_q_notified"
QT_MOC_LITERAL(32, 514, 11), // "OVERLAPPED*"
QT_MOC_LITERAL(33, 526, 8), // "DataBits"
QT_MOC_LITERAL(34, 535, 6), // "Parity"
QT_MOC_LITERAL(35, 542, 8), // "StopBits"
QT_MOC_LITERAL(36, 551, 11), // "FlowControl"
QT_MOC_LITERAL(37, 563, 15), // "dataErrorPolicy"
QT_MOC_LITERAL(38, 579, 15), // "DataErrorPolicy"
QT_MOC_LITERAL(39, 595, 17), // "dataTerminalReady"
QT_MOC_LITERAL(40, 613, 13), // "requestToSend"
QT_MOC_LITERAL(41, 627, 15), // "SerialPortError"
QT_MOC_LITERAL(42, 643, 23), // "settingsRestoredOnClose"
QT_MOC_LITERAL(43, 667, 12), // "breakEnabled"
QT_MOC_LITERAL(44, 680, 9), // "Direction"
QT_MOC_LITERAL(45, 690, 5), // "Input"
QT_MOC_LITERAL(46, 696, 6), // "Output"
QT_MOC_LITERAL(47, 703, 13), // "AllDirections"
QT_MOC_LITERAL(48, 717, 8), // "BaudRate"
QT_MOC_LITERAL(49, 726, 8), // "Baud1200"
QT_MOC_LITERAL(50, 735, 8), // "Baud2400"
QT_MOC_LITERAL(51, 744, 8), // "Baud4800"
QT_MOC_LITERAL(52, 753, 8), // "Baud9600"
QT_MOC_LITERAL(53, 762, 9), // "Baud19200"
QT_MOC_LITERAL(54, 772, 9), // "Baud38400"
QT_MOC_LITERAL(55, 782, 9), // "Baud57600"
QT_MOC_LITERAL(56, 792, 10), // "Baud115200"
QT_MOC_LITERAL(57, 803, 11), // "UnknownBaud"
QT_MOC_LITERAL(58, 815, 5), // "Data5"
QT_MOC_LITERAL(59, 821, 5), // "Data6"
QT_MOC_LITERAL(60, 827, 5), // "Data7"
QT_MOC_LITERAL(61, 833, 5), // "Data8"
QT_MOC_LITERAL(62, 839, 15), // "UnknownDataBits"
QT_MOC_LITERAL(63, 855, 8), // "NoParity"
QT_MOC_LITERAL(64, 864, 10), // "EvenParity"
QT_MOC_LITERAL(65, 875, 9), // "OddParity"
QT_MOC_LITERAL(66, 885, 11), // "SpaceParity"
QT_MOC_LITERAL(67, 897, 10), // "MarkParity"
QT_MOC_LITERAL(68, 908, 13), // "UnknownParity"
QT_MOC_LITERAL(69, 922, 7), // "OneStop"
QT_MOC_LITERAL(70, 930, 14), // "OneAndHalfStop"
QT_MOC_LITERAL(71, 945, 7), // "TwoStop"
QT_MOC_LITERAL(72, 953, 15), // "UnknownStopBits"
QT_MOC_LITERAL(73, 969, 13), // "NoFlowControl"
QT_MOC_LITERAL(74, 983, 15), // "HardwareControl"
QT_MOC_LITERAL(75, 999, 15), // "SoftwareControl"
QT_MOC_LITERAL(76, 1015, 18), // "UnknownFlowControl"
QT_MOC_LITERAL(77, 1034, 12), // "PinoutSignal"
QT_MOC_LITERAL(78, 1047, 8), // "NoSignal"
QT_MOC_LITERAL(79, 1056, 21), // "TransmittedDataSignal"
QT_MOC_LITERAL(80, 1078, 18), // "ReceivedDataSignal"
QT_MOC_LITERAL(81, 1097, 23), // "DataTerminalReadySignal"
QT_MOC_LITERAL(82, 1121, 23), // "DataCarrierDetectSignal"
QT_MOC_LITERAL(83, 1145, 18), // "DataSetReadySignal"
QT_MOC_LITERAL(84, 1164, 19), // "RingIndicatorSignal"
QT_MOC_LITERAL(85, 1184, 19), // "RequestToSendSignal"
QT_MOC_LITERAL(86, 1204, 17), // "ClearToSendSignal"
QT_MOC_LITERAL(87, 1222, 30), // "SecondaryTransmittedDataSignal"
QT_MOC_LITERAL(88, 1253, 27), // "SecondaryReceivedDataSignal"
QT_MOC_LITERAL(89, 1281, 10), // "SkipPolicy"
QT_MOC_LITERAL(90, 1292, 14), // "PassZeroPolicy"
QT_MOC_LITERAL(91, 1307, 12), // "IgnorePolicy"
QT_MOC_LITERAL(92, 1320, 19), // "StopReceivingPolicy"
QT_MOC_LITERAL(93, 1340, 13), // "UnknownPolicy"
QT_MOC_LITERAL(94, 1354, 7), // "NoError"
QT_MOC_LITERAL(95, 1362, 19), // "DeviceNotFoundError"
QT_MOC_LITERAL(96, 1382, 15), // "PermissionError"
QT_MOC_LITERAL(97, 1398, 9), // "OpenError"
QT_MOC_LITERAL(98, 1408, 11), // "ParityError"
QT_MOC_LITERAL(99, 1420, 12), // "FramingError"
QT_MOC_LITERAL(100, 1433, 19), // "BreakConditionError"
QT_MOC_LITERAL(101, 1453, 10), // "WriteError"
QT_MOC_LITERAL(102, 1464, 9), // "ReadError"
QT_MOC_LITERAL(103, 1474, 13), // "ResourceError"
QT_MOC_LITERAL(104, 1488, 25), // "UnsupportedOperationError"
QT_MOC_LITERAL(105, 1514, 12), // "UnknownError"
QT_MOC_LITERAL(106, 1527, 12), // "TimeoutError"
QT_MOC_LITERAL(107, 1540, 12) // "NotOpenError"

    },
    "QSerialPort\0baudRateChanged\0\0baudRate\0"
    "QSerialPort::Directions\0directions\0"
    "dataBitsChanged\0QSerialPort::DataBits\0"
    "dataBits\0parityChanged\0QSerialPort::Parity\0"
    "parity\0stopBitsChanged\0QSerialPort::StopBits\0"
    "stopBits\0flowControlChanged\0"
    "QSerialPort::FlowControl\0flowControl\0"
    "dataErrorPolicyChanged\0"
    "QSerialPort::DataErrorPolicy\0policy\0"
    "dataTerminalReadyChanged\0set\0"
    "requestToSendChanged\0error\0"
    "QSerialPort::SerialPortError\0"
    "serialPortError\0settingsRestoredOnCloseChanged\0"
    "restore\0breakEnabledChanged\0"
    "_q_startAsyncWrite\0_q_notified\0"
    "OVERLAPPED*\0DataBits\0Parity\0StopBits\0"
    "FlowControl\0dataErrorPolicy\0DataErrorPolicy\0"
    "dataTerminalReady\0requestToSend\0"
    "SerialPortError\0settingsRestoredOnClose\0"
    "breakEnabled\0Direction\0Input\0Output\0"
    "AllDirections\0BaudRate\0Baud1200\0"
    "Baud2400\0Baud4800\0Baud9600\0Baud19200\0"
    "Baud38400\0Baud57600\0Baud115200\0"
    "UnknownBaud\0Data5\0Data6\0Data7\0Data8\0"
    "UnknownDataBits\0NoParity\0EvenParity\0"
    "OddParity\0SpaceParity\0MarkParity\0"
    "UnknownParity\0OneStop\0OneAndHalfStop\0"
    "TwoStop\0UnknownStopBits\0NoFlowControl\0"
    "HardwareControl\0SoftwareControl\0"
    "UnknownFlowControl\0PinoutSignal\0"
    "NoSignal\0TransmittedDataSignal\0"
    "ReceivedDataSignal\0DataTerminalReadySignal\0"
    "DataCarrierDetectSignal\0DataSetReadySignal\0"
    "RingIndicatorSignal\0RequestToSendSignal\0"
    "ClearToSendSignal\0SecondaryTransmittedDataSignal\0"
    "SecondaryReceivedDataSignal\0SkipPolicy\0"
    "PassZeroPolicy\0IgnorePolicy\0"
    "StopReceivingPolicy\0UnknownPolicy\0"
    "NoError\0DeviceNotFoundError\0PermissionError\0"
    "OpenError\0ParityError\0FramingError\0"
    "BreakConditionError\0WriteError\0ReadError\0"
    "ResourceError\0UnsupportedOperationError\0"
    "UnknownError\0TimeoutError\0NotOpenError"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QSerialPort[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      13,   14, // methods
      11,  122, // properties
       9,  166, // enums/sets
       0,    0, // constructors
       0,       // flags
      11,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,   79,    2, 0x06 /* Public */,
       6,    1,   84,    2, 0x06 /* Public */,
       9,    1,   87,    2, 0x06 /* Public */,
      12,    1,   90,    2, 0x06 /* Public */,
      15,    1,   93,    2, 0x06 /* Public */,
      18,    1,   96,    2, 0x06 /* Public */,
      21,    1,   99,    2, 0x06 /* Public */,
      23,    1,  102,    2, 0x06 /* Public */,
      24,    1,  105,    2, 0x06 /* Public */,
      27,    1,  108,    2, 0x06 /* Public */,
      29,    1,  111,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      30,    0,  114,    2, 0x08 /* Private */,
      31,    3,  115,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int, 0x80000000 | 4,    3,    5,
    QMetaType::Void, 0x80000000 | 7,    8,
    QMetaType::Void, 0x80000000 | 10,   11,
    QMetaType::Void, 0x80000000 | 13,   14,
    QMetaType::Void, 0x80000000 | 16,   17,
    QMetaType::Void, 0x80000000 | 19,   20,
    QMetaType::Void, QMetaType::Bool,   22,
    QMetaType::Void, QMetaType::Bool,   22,
    QMetaType::Void, 0x80000000 | 25,   26,
    QMetaType::Void, QMetaType::Bool,   28,
    QMetaType::Void, QMetaType::Bool,   22,

 // slots: parameters
    QMetaType::Bool,
    QMetaType::Void, QMetaType::UInt, QMetaType::UInt, 0x80000000 | 32,    2,    2,    2,

 // properties: name, type, flags
       3, QMetaType::Int, 0x00495103,
       8, 0x80000000 | 33, 0x0049510b,
      11, 0x80000000 | 34, 0x0049510b,
      14, 0x80000000 | 35, 0x0049510b,
      17, 0x80000000 | 36, 0x0049510b,
      37, 0x80000000 | 38, 0x0049510b,
      39, QMetaType::Bool, 0x00495103,
      40, QMetaType::Bool, 0x00495103,
      24, 0x80000000 | 41, 0x0049500d,
      42, QMetaType::Bool, 0x00495103,
      43, QMetaType::Bool, 0x00495103,

 // properties: notify_signal_id
       0,
       1,
       2,
       3,
       4,
       5,
       6,
       7,
       8,
       9,
      10,

 // enums: name, flags, count, data
      44, 0x1,    3,  202,
      48, 0x0,    9,  208,
      33, 0x0,    5,  226,
      34, 0x0,    6,  236,
      35, 0x0,    4,  248,
      36, 0x0,    4,  256,
      77, 0x1,   11,  264,
      38, 0x0,    5,  286,
      41, 0x0,   14,  296,

 // enum data: key, value
      45, uint(QSerialPort::Input),
      46, uint(QSerialPort::Output),
      47, uint(QSerialPort::AllDirections),
      49, uint(QSerialPort::Baud1200),
      50, uint(QSerialPort::Baud2400),
      51, uint(QSerialPort::Baud4800),
      52, uint(QSerialPort::Baud9600),
      53, uint(QSerialPort::Baud19200),
      54, uint(QSerialPort::Baud38400),
      55, uint(QSerialPort::Baud57600),
      56, uint(QSerialPort::Baud115200),
      57, uint(QSerialPort::UnknownBaud),
      58, uint(QSerialPort::Data5),
      59, uint(QSerialPort::Data6),
      60, uint(QSerialPort::Data7),
      61, uint(QSerialPort::Data8),
      62, uint(QSerialPort::UnknownDataBits),
      63, uint(QSerialPort::NoParity),
      64, uint(QSerialPort::EvenParity),
      65, uint(QSerialPort::OddParity),
      66, uint(QSerialPort::SpaceParity),
      67, uint(QSerialPort::MarkParity),
      68, uint(QSerialPort::UnknownParity),
      69, uint(QSerialPort::OneStop),
      70, uint(QSerialPort::OneAndHalfStop),
      71, uint(QSerialPort::TwoStop),
      72, uint(QSerialPort::UnknownStopBits),
      73, uint(QSerialPort::NoFlowControl),
      74, uint(QSerialPort::HardwareControl),
      75, uint(QSerialPort::SoftwareControl),
      76, uint(QSerialPort::UnknownFlowControl),
      78, uint(QSerialPort::NoSignal),
      79, uint(QSerialPort::TransmittedDataSignal),
      80, uint(QSerialPort::ReceivedDataSignal),
      81, uint(QSerialPort::DataTerminalReadySignal),
      82, uint(QSerialPort::DataCarrierDetectSignal),
      83, uint(QSerialPort::DataSetReadySignal),
      84, uint(QSerialPort::RingIndicatorSignal),
      85, uint(QSerialPort::RequestToSendSignal),
      86, uint(QSerialPort::ClearToSendSignal),
      87, uint(QSerialPort::SecondaryTransmittedDataSignal),
      88, uint(QSerialPort::SecondaryReceivedDataSignal),
      89, uint(QSerialPort::SkipPolicy),
      90, uint(QSerialPort::PassZeroPolicy),
      91, uint(QSerialPort::IgnorePolicy),
      92, uint(QSerialPort::StopReceivingPolicy),
      93, uint(QSerialPort::UnknownPolicy),
      94, uint(QSerialPort::NoError),
      95, uint(QSerialPort::DeviceNotFoundError),
      96, uint(QSerialPort::PermissionError),
      97, uint(QSerialPort::OpenError),
      98, uint(QSerialPort::ParityError),
      99, uint(QSerialPort::FramingError),
     100, uint(QSerialPort::BreakConditionError),
     101, uint(QSerialPort::WriteError),
     102, uint(QSerialPort::ReadError),
     103, uint(QSerialPort::ResourceError),
     104, uint(QSerialPort::UnsupportedOperationError),
     105, uint(QSerialPort::UnknownError),
     106, uint(QSerialPort::TimeoutError),
     107, uint(QSerialPort::NotOpenError),

       0        // eod
};

void QSerialPort::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        QSerialPort *_t = static_cast<QSerialPort *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->baudRateChanged((*reinterpret_cast< qint32(*)>(_a[1])),(*reinterpret_cast< QSerialPort::Directions(*)>(_a[2]))); break;
        case 1: _t->dataBitsChanged((*reinterpret_cast< QSerialPort::DataBits(*)>(_a[1]))); break;
        case 2: _t->parityChanged((*reinterpret_cast< QSerialPort::Parity(*)>(_a[1]))); break;
        case 3: _t->stopBitsChanged((*reinterpret_cast< QSerialPort::StopBits(*)>(_a[1]))); break;
        case 4: _t->flowControlChanged((*reinterpret_cast< QSerialPort::FlowControl(*)>(_a[1]))); break;
        case 5: _t->dataErrorPolicyChanged((*reinterpret_cast< QSerialPort::DataErrorPolicy(*)>(_a[1]))); break;
        case 6: _t->dataTerminalReadyChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 7: _t->requestToSendChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 8: _t->error((*reinterpret_cast< QSerialPort::SerialPortError(*)>(_a[1]))); break;
        case 9: _t->settingsRestoredOnCloseChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 10: _t->breakEnabledChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 11: { bool _r = _t->d_func()->_q_startAsyncWrite();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 12: _t->d_func()->_q_notified((*reinterpret_cast< quint32(*)>(_a[1])),(*reinterpret_cast< quint32(*)>(_a[2])),(*reinterpret_cast< OVERLAPPED*(*)>(_a[3]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (QSerialPort::*_t)(qint32 , QSerialPort::Directions );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QSerialPort::baudRateChanged)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (QSerialPort::*_t)(QSerialPort::DataBits );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QSerialPort::dataBitsChanged)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (QSerialPort::*_t)(QSerialPort::Parity );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QSerialPort::parityChanged)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (QSerialPort::*_t)(QSerialPort::StopBits );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QSerialPort::stopBitsChanged)) {
                *result = 3;
                return;
            }
        }
        {
            typedef void (QSerialPort::*_t)(QSerialPort::FlowControl );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QSerialPort::flowControlChanged)) {
                *result = 4;
                return;
            }
        }
        {
            typedef void (QSerialPort::*_t)(QSerialPort::DataErrorPolicy );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QSerialPort::dataErrorPolicyChanged)) {
                *result = 5;
                return;
            }
        }
        {
            typedef void (QSerialPort::*_t)(bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QSerialPort::dataTerminalReadyChanged)) {
                *result = 6;
                return;
            }
        }
        {
            typedef void (QSerialPort::*_t)(bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QSerialPort::requestToSendChanged)) {
                *result = 7;
                return;
            }
        }
        {
            typedef void (QSerialPort::*_t)(QSerialPort::SerialPortError );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QSerialPort::error)) {
                *result = 8;
                return;
            }
        }
        {
            typedef void (QSerialPort::*_t)(bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QSerialPort::settingsRestoredOnCloseChanged)) {
                *result = 9;
                return;
            }
        }
        {
            typedef void (QSerialPort::*_t)(bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QSerialPort::breakEnabledChanged)) {
                *result = 10;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        Q_ASSERT(staticMetaObject.cast(_o));
        QSerialPort *_t = static_cast<QSerialPort *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< qint32*>(_v) = _t->baudRate(); break;
        case 1: *reinterpret_cast< DataBits*>(_v) = _t->dataBits(); break;
        case 2: *reinterpret_cast< Parity*>(_v) = _t->parity(); break;
        case 3: *reinterpret_cast< StopBits*>(_v) = _t->stopBits(); break;
        case 4: *reinterpret_cast< FlowControl*>(_v) = _t->flowControl(); break;
        case 5: *reinterpret_cast< DataErrorPolicy*>(_v) = _t->dataErrorPolicy(); break;
        case 6: *reinterpret_cast< bool*>(_v) = _t->isDataTerminalReady(); break;
        case 7: *reinterpret_cast< bool*>(_v) = _t->isRequestToSend(); break;
        case 8: *reinterpret_cast< SerialPortError*>(_v) = _t->error(); break;
        case 9: *reinterpret_cast< bool*>(_v) = _t->settingsRestoredOnClose(); break;
        case 10: *reinterpret_cast< bool*>(_v) = _t->isBreakEnabled(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        Q_ASSERT(staticMetaObject.cast(_o));
        QSerialPort *_t = static_cast<QSerialPort *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setBaudRate(*reinterpret_cast< qint32*>(_v)); break;
        case 1: _t->setDataBits(*reinterpret_cast< DataBits*>(_v)); break;
        case 2: _t->setParity(*reinterpret_cast< Parity*>(_v)); break;
        case 3: _t->setStopBits(*reinterpret_cast< StopBits*>(_v)); break;
        case 4: _t->setFlowControl(*reinterpret_cast< FlowControl*>(_v)); break;
        case 5: _t->setDataErrorPolicy(*reinterpret_cast< DataErrorPolicy*>(_v)); break;
        case 6: _t->setDataTerminalReady(*reinterpret_cast< bool*>(_v)); break;
        case 7: _t->setRequestToSend(*reinterpret_cast< bool*>(_v)); break;
        case 9: _t->setSettingsRestoredOnClose(*reinterpret_cast< bool*>(_v)); break;
        case 10: _t->setBreakEnabled(*reinterpret_cast< bool*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
        Q_ASSERT(staticMetaObject.cast(_o));
        QSerialPort *_t = static_cast<QSerialPort *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 8: _t->clearError(); break;
        default: break;
        }
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject QSerialPort::staticMetaObject = {
    { &QIODevice::staticMetaObject, qt_meta_stringdata_QSerialPort.data,
      qt_meta_data_QSerialPort,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *QSerialPort::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QSerialPort::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_QSerialPort.stringdata0))
        return static_cast<void*>(const_cast< QSerialPort*>(this));
    return QIODevice::qt_metacast(_clname);
}

int QSerialPort::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QIODevice::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 13)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 13;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 13)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 13;
    }
#ifndef QT_NO_PROPERTIES
   else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 11;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 11;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 11;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 11;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 11;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void QSerialPort::baudRateChanged(qint32 _t1, QSerialPort::Directions _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QSerialPort::dataBitsChanged(QSerialPort::DataBits _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void QSerialPort::parityChanged(QSerialPort::Parity _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void QSerialPort::stopBitsChanged(QSerialPort::StopBits _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void QSerialPort::flowControlChanged(QSerialPort::FlowControl _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void QSerialPort::dataErrorPolicyChanged(QSerialPort::DataErrorPolicy _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void QSerialPort::dataTerminalReadyChanged(bool _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void QSerialPort::requestToSendChanged(bool _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void QSerialPort::error(QSerialPort::SerialPortError _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}

// SIGNAL 9
void QSerialPort::settingsRestoredOnCloseChanged(bool _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 9, _a);
}

// SIGNAL 10
void QSerialPort::breakEnabledChanged(bool _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 10, _a);
}
QT_END_MOC_NAMESPACE
