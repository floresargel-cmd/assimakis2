/****************************************************************************
** Meta object code from reading C++ file 'qwavedecoder_p.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../audio/qwavedecoder_p.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qwavedecoder_p.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_QWaveDecoder_t {
    QByteArrayData data[5];
    char stringdata0[50];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QWaveDecoder_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QWaveDecoder_t qt_meta_stringdata_QWaveDecoder = {
    {
QT_MOC_LITERAL(0, 0, 12), // "QWaveDecoder"
QT_MOC_LITERAL(1, 13, 11), // "formatKnown"
QT_MOC_LITERAL(2, 25, 0), // ""
QT_MOC_LITERAL(3, 26, 12), // "parsingError"
QT_MOC_LITERAL(4, 39, 10) // "handleData"

    },
    "QWaveDecoder\0formatKnown\0\0parsingError\0"
    "handleData"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QWaveDecoder[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   29,    2, 0x06 /* Public */,
       3,    0,   30,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    0,   31,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,

       0        // eod
};

void QWaveDecoder::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        QWaveDecoder *_t = static_cast<QWaveDecoder *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->formatKnown(); break;
        case 1: _t->parsingError(); break;
        case 2: _t->handleData(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (QWaveDecoder::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QWaveDecoder::formatKnown)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (QWaveDecoder::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QWaveDecoder::parsingError)) {
                *result = 1;
                return;
            }
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject QWaveDecoder::staticMetaObject = {
    { &QIODevice::staticMetaObject, qt_meta_stringdata_QWaveDecoder.data,
      qt_meta_data_QWaveDecoder,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *QWaveDecoder::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QWaveDecoder::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_QWaveDecoder.stringdata0))
        return static_cast<void*>(const_cast< QWaveDecoder*>(this));
    return QIODevice::qt_metacast(_clname);
}

int QWaveDecoder::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QIODevice::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 3;
    }
    return _id;
}

// SIGNAL 0
void QWaveDecoder::formatKnown()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}

// SIGNAL 1
void QWaveDecoder::parsingError()
{
    QMetaObject::activate(this, &staticMetaObject, 1, Q_NULLPTR);
}
QT_END_MOC_NAMESPACE
