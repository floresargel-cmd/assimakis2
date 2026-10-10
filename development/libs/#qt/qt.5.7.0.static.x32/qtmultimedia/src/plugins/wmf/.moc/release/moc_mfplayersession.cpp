/****************************************************************************
** Meta object code from reading C++ file 'mfplayersession.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../player/mfplayersession.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mfplayersession.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_MFPlayerSession_t {
    QByteArrayData data[29];
    char stringdata0[370];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MFPlayerSession_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MFPlayerSession_t qt_meta_stringdata_MFPlayerSession = {
    {
QT_MOC_LITERAL(0, 0, 15), // "MFPlayerSession"
QT_MOC_LITERAL(1, 16, 5), // "error"
QT_MOC_LITERAL(2, 22, 0), // ""
QT_MOC_LITERAL(3, 23, 19), // "QMediaPlayer::Error"
QT_MOC_LITERAL(4, 43, 11), // "errorString"
QT_MOC_LITERAL(5, 55, 7), // "isFatal"
QT_MOC_LITERAL(6, 63, 12), // "sessionEvent"
QT_MOC_LITERAL(7, 76, 14), // "IMFMediaEvent*"
QT_MOC_LITERAL(8, 91, 13), // "statusChanged"
QT_MOC_LITERAL(9, 105, 14), // "audioAvailable"
QT_MOC_LITERAL(10, 120, 14), // "videoAvailable"
QT_MOC_LITERAL(11, 135, 14), // "durationUpdate"
QT_MOC_LITERAL(12, 150, 8), // "duration"
QT_MOC_LITERAL(13, 159, 14), // "seekableUpdate"
QT_MOC_LITERAL(14, 174, 8), // "seekable"
QT_MOC_LITERAL(15, 183, 15), // "positionChanged"
QT_MOC_LITERAL(16, 199, 8), // "position"
QT_MOC_LITERAL(17, 208, 19), // "playbackRateChanged"
QT_MOC_LITERAL(18, 228, 4), // "rate"
QT_MOC_LITERAL(19, 233, 13), // "volumeChanged"
QT_MOC_LITERAL(20, 247, 6), // "volume"
QT_MOC_LITERAL(21, 254, 12), // "mutedChanged"
QT_MOC_LITERAL(22, 267, 5), // "muted"
QT_MOC_LITERAL(23, 273, 19), // "bufferStatusChanged"
QT_MOC_LITERAL(24, 293, 13), // "percentFilled"
QT_MOC_LITERAL(25, 307, 22), // "handleMediaSourceReady"
QT_MOC_LITERAL(26, 330, 18), // "handleSessionEvent"
QT_MOC_LITERAL(27, 349, 17), // "handleSourceError"
QT_MOC_LITERAL(28, 367, 2) // "hr"

    },
    "MFPlayerSession\0error\0\0QMediaPlayer::Error\0"
    "errorString\0isFatal\0sessionEvent\0"
    "IMFMediaEvent*\0statusChanged\0"
    "audioAvailable\0videoAvailable\0"
    "durationUpdate\0duration\0seekableUpdate\0"
    "seekable\0positionChanged\0position\0"
    "playbackRateChanged\0rate\0volumeChanged\0"
    "volume\0mutedChanged\0muted\0bufferStatusChanged\0"
    "percentFilled\0handleMediaSourceReady\0"
    "handleSessionEvent\0handleSourceError\0"
    "hr"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MFPlayerSession[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      15,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      12,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    3,   89,    2, 0x06 /* Public */,
       6,    1,   96,    2, 0x06 /* Public */,
       8,    0,   99,    2, 0x06 /* Public */,
       9,    0,  100,    2, 0x06 /* Public */,
      10,    0,  101,    2, 0x06 /* Public */,
      11,    1,  102,    2, 0x06 /* Public */,
      13,    1,  105,    2, 0x06 /* Public */,
      15,    1,  108,    2, 0x06 /* Public */,
      17,    1,  111,    2, 0x06 /* Public */,
      19,    1,  114,    2, 0x06 /* Public */,
      21,    1,  117,    2, 0x06 /* Public */,
      23,    1,  120,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      25,    0,  123,    2, 0x08 /* Private */,
      26,    1,  124,    2, 0x08 /* Private */,
      27,    1,  127,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3, QMetaType::QString, QMetaType::Bool,    1,    4,    5,
    QMetaType::Void, 0x80000000 | 7,    6,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::LongLong,   12,
    QMetaType::Void, QMetaType::Bool,   14,
    QMetaType::Void, QMetaType::LongLong,   16,
    QMetaType::Void, QMetaType::QReal,   18,
    QMetaType::Void, QMetaType::Int,   20,
    QMetaType::Void, QMetaType::Bool,   22,
    QMetaType::Void, QMetaType::Int,   24,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 7,    6,
    QMetaType::Void, QMetaType::Long,   28,

       0        // eod
};

void MFPlayerSession::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        MFPlayerSession *_t = static_cast<MFPlayerSession *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->error((*reinterpret_cast< QMediaPlayer::Error(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3]))); break;
        case 1: _t->sessionEvent((*reinterpret_cast< IMFMediaEvent*(*)>(_a[1]))); break;
        case 2: _t->statusChanged(); break;
        case 3: _t->audioAvailable(); break;
        case 4: _t->videoAvailable(); break;
        case 5: _t->durationUpdate((*reinterpret_cast< qint64(*)>(_a[1]))); break;
        case 6: _t->seekableUpdate((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 7: _t->positionChanged((*reinterpret_cast< qint64(*)>(_a[1]))); break;
        case 8: _t->playbackRateChanged((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 9: _t->volumeChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 10: _t->mutedChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 11: _t->bufferStatusChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 12: _t->handleMediaSourceReady(); break;
        case 13: _t->handleSessionEvent((*reinterpret_cast< IMFMediaEvent*(*)>(_a[1]))); break;
        case 14: _t->handleSourceError((*reinterpret_cast< long(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QMediaPlayer::Error >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (MFPlayerSession::*_t)(QMediaPlayer::Error , QString , bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MFPlayerSession::error)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (MFPlayerSession::*_t)(IMFMediaEvent * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MFPlayerSession::sessionEvent)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (MFPlayerSession::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MFPlayerSession::statusChanged)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (MFPlayerSession::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MFPlayerSession::audioAvailable)) {
                *result = 3;
                return;
            }
        }
        {
            typedef void (MFPlayerSession::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MFPlayerSession::videoAvailable)) {
                *result = 4;
                return;
            }
        }
        {
            typedef void (MFPlayerSession::*_t)(qint64 );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MFPlayerSession::durationUpdate)) {
                *result = 5;
                return;
            }
        }
        {
            typedef void (MFPlayerSession::*_t)(bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MFPlayerSession::seekableUpdate)) {
                *result = 6;
                return;
            }
        }
        {
            typedef void (MFPlayerSession::*_t)(qint64 );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MFPlayerSession::positionChanged)) {
                *result = 7;
                return;
            }
        }
        {
            typedef void (MFPlayerSession::*_t)(qreal );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MFPlayerSession::playbackRateChanged)) {
                *result = 8;
                return;
            }
        }
        {
            typedef void (MFPlayerSession::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MFPlayerSession::volumeChanged)) {
                *result = 9;
                return;
            }
        }
        {
            typedef void (MFPlayerSession::*_t)(bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MFPlayerSession::mutedChanged)) {
                *result = 10;
                return;
            }
        }
        {
            typedef void (MFPlayerSession::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MFPlayerSession::bufferStatusChanged)) {
                *result = 11;
                return;
            }
        }
    }
}

const QMetaObject MFPlayerSession::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_MFPlayerSession.data,
      qt_meta_data_MFPlayerSession,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *MFPlayerSession::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MFPlayerSession::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_MFPlayerSession.stringdata0))
        return static_cast<void*>(const_cast< MFPlayerSession*>(this));
    if (!strcmp(_clname, "IMFAsyncCallback"))
        return static_cast< IMFAsyncCallback*>(const_cast< MFPlayerSession*>(this));
    return QObject::qt_metacast(_clname);
}

int MFPlayerSession::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 15)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 15;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 15)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 15;
    }
    return _id;
}

// SIGNAL 0
void MFPlayerSession::error(QMediaPlayer::Error _t1, QString _t2, bool _t3)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void MFPlayerSession::sessionEvent(IMFMediaEvent * _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void MFPlayerSession::statusChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, Q_NULLPTR);
}

// SIGNAL 3
void MFPlayerSession::audioAvailable()
{
    QMetaObject::activate(this, &staticMetaObject, 3, Q_NULLPTR);
}

// SIGNAL 4
void MFPlayerSession::videoAvailable()
{
    QMetaObject::activate(this, &staticMetaObject, 4, Q_NULLPTR);
}

// SIGNAL 5
void MFPlayerSession::durationUpdate(qint64 _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void MFPlayerSession::seekableUpdate(bool _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void MFPlayerSession::positionChanged(qint64 _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void MFPlayerSession::playbackRateChanged(qreal _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}

// SIGNAL 9
void MFPlayerSession::volumeChanged(int _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 9, _a);
}

// SIGNAL 10
void MFPlayerSession::mutedChanged(bool _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 10, _a);
}

// SIGNAL 11
void MFPlayerSession::bufferStatusChanged(int _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 11, _a);
}
QT_END_MOC_NAMESPACE
