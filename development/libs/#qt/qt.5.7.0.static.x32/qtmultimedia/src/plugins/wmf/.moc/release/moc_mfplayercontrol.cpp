/****************************************************************************
** Meta object code from reading C++ file 'mfplayercontrol.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../player/mfplayercontrol.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mfplayercontrol.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_MFPlayerControl_t {
    QByteArrayData data[14];
    char stringdata0[201];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MFPlayerControl_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MFPlayerControl_t qt_meta_stringdata_MFPlayerControl = {
    {
QT_MOC_LITERAL(0, 0, 15), // "MFPlayerControl"
QT_MOC_LITERAL(1, 16, 19), // "handleStatusChanged"
QT_MOC_LITERAL(2, 36, 0), // ""
QT_MOC_LITERAL(3, 37, 20), // "handleVideoAvailable"
QT_MOC_LITERAL(4, 58, 20), // "handleAudioAvailable"
QT_MOC_LITERAL(5, 79, 20), // "handleDurationUpdate"
QT_MOC_LITERAL(6, 100, 8), // "duration"
QT_MOC_LITERAL(7, 109, 20), // "handleSeekableUpdate"
QT_MOC_LITERAL(8, 130, 8), // "seekable"
QT_MOC_LITERAL(9, 139, 11), // "handleError"
QT_MOC_LITERAL(10, 151, 19), // "QMediaPlayer::Error"
QT_MOC_LITERAL(11, 171, 9), // "errorCode"
QT_MOC_LITERAL(12, 181, 11), // "errorString"
QT_MOC_LITERAL(13, 193, 7) // "isFatal"

    },
    "MFPlayerControl\0handleStatusChanged\0"
    "\0handleVideoAvailable\0handleAudioAvailable\0"
    "handleDurationUpdate\0duration\0"
    "handleSeekableUpdate\0seekable\0handleError\0"
    "QMediaPlayer::Error\0errorCode\0errorString\0"
    "isFatal"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MFPlayerControl[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   44,    2, 0x08 /* Private */,
       3,    0,   45,    2, 0x08 /* Private */,
       4,    0,   46,    2, 0x08 /* Private */,
       5,    1,   47,    2, 0x08 /* Private */,
       7,    1,   50,    2, 0x08 /* Private */,
       9,    3,   53,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::LongLong,    6,
    QMetaType::Void, QMetaType::Bool,    8,
    QMetaType::Void, 0x80000000 | 10, QMetaType::QString, QMetaType::Bool,   11,   12,   13,

       0        // eod
};

void MFPlayerControl::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        MFPlayerControl *_t = static_cast<MFPlayerControl *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->handleStatusChanged(); break;
        case 1: _t->handleVideoAvailable(); break;
        case 2: _t->handleAudioAvailable(); break;
        case 3: _t->handleDurationUpdate((*reinterpret_cast< qint64(*)>(_a[1]))); break;
        case 4: _t->handleSeekableUpdate((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 5: _t->handleError((*reinterpret_cast< QMediaPlayer::Error(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 5:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QMediaPlayer::Error >(); break;
            }
            break;
        }
    }
}

const QMetaObject MFPlayerControl::staticMetaObject = {
    { &QMediaPlayerControl::staticMetaObject, qt_meta_stringdata_MFPlayerControl.data,
      qt_meta_data_MFPlayerControl,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *MFPlayerControl::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MFPlayerControl::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_MFPlayerControl.stringdata0))
        return static_cast<void*>(const_cast< MFPlayerControl*>(this));
    return QMediaPlayerControl::qt_metacast(_clname);
}

int MFPlayerControl::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMediaPlayerControl::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
