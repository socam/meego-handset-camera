/****************************************************************************
** Meta object code from reading C++ file 'qmlcamerasettings.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "qmlcamerasettings.h"
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qmlcamerasettings.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_QmlCameraSettings[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      16,   14, // methods
       8,   94, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       8,       // signalCount

 // signals: signature, parameters, type, tag, flags
      18,   47,   47,   47, 0x05,
      48,   47,   47,   47, 0x05,
      70,   47,   47,   47, 0x05,
     105,   47,   47,   47, 0x05,
     140,   47,   47,   47, 0x05,
     180,   47,   47,   47, 0x05,
     218,   47,   47,   47, 0x05,
     251,   47,   47,   47, 0x05,

 // slots: signature, parameters, type, tag, flags
     274,   47,   47,   47, 0x0a,
     299,   47,   47,   47, 0x0a,
     317,   47,   47,   47, 0x0a,
     348,   47,   47,   47, 0x0a,
     379,   47,   47,   47, 0x0a,
     415,   47,   47,   47, 0x0a,
     449,   47,   47,   47, 0x0a,
     478,   47,   47,   47, 0x0a,

 // properties: name, type, flags
     497,  514, 0x02495103,
     518,  514, 0x02495103,
     528,  549, ((uint)QMetaType::QReal << 24) | 0x00495103,
     555,  573, 0xff495103,
     582,  573, 0xff495103,
     605,  573, 0xff495103,
     626,  514, 0x02495103,
     647,  514, 0x02495103,

 // properties: notify_signal_id
       0,
       1,
       2,
       3,
       4,
       5,
       6,
       7,

       0        // eod
};

static const char qt_meta_stringdata_QmlCameraSettings[] = {
    "QmlCameraSettings\0whiteBalanceModeChanged(int)\0"
    "\0flashModeChanged(int)\0"
    "exposureCompensationChanged(qreal)\0"
    "captureResolutionChanged(QVariant)\0"
    "videoCaptureResolutionChanged(QVariant)\0"
    "viewfinderResolutionChanged(QVariant)\0"
    "videoEncodingQualityChanged(int)\0"
    "cameraModeChanged(int)\0setWhiteBalanceMode(int)\0"
    "setFlashMode(int)\0setExposureCompensation(qreal)\0"
    "setCaptureResolution(QVariant)\0"
    "setVideoCaptureResolution(QVariant)\0"
    "setViewfinderResolution(QVariant)\0"
    "setVideoEncodingQuality(int)\0"
    "setCameraMode(int)\0whiteBalanceMode\0"
    "int\0flashMode\0exposureCompensation\0"
    "qreal\0captureResolution\0QVariant\0"
    "videoCaptureResolution\0viewfinderResolution\0"
    "videoEncodingQuality\0cameraMode\0"
};

void QmlCameraSettings::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        QmlCameraSettings *_t = static_cast<QmlCameraSettings *>(_o);
        switch (_id) {
        case 0: _t->whiteBalanceModeChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->flashModeChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->exposureCompensationChanged((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 3: _t->captureResolutionChanged((*reinterpret_cast< QVariant(*)>(_a[1]))); break;
        case 4: _t->videoCaptureResolutionChanged((*reinterpret_cast< QVariant(*)>(_a[1]))); break;
        case 5: _t->viewfinderResolutionChanged((*reinterpret_cast< QVariant(*)>(_a[1]))); break;
        case 6: _t->videoEncodingQualityChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 7: _t->cameraModeChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 8: _t->setWhiteBalanceMode((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 9: _t->setFlashMode((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 10: _t->setExposureCompensation((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 11: _t->setCaptureResolution((*reinterpret_cast< QVariant(*)>(_a[1]))); break;
        case 12: _t->setVideoCaptureResolution((*reinterpret_cast< QVariant(*)>(_a[1]))); break;
        case 13: _t->setViewfinderResolution((*reinterpret_cast< QVariant(*)>(_a[1]))); break;
        case 14: _t->setVideoEncodingQuality((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 15: _t->setCameraMode((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData QmlCameraSettings::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject QmlCameraSettings::staticMetaObject = {
    { &QSettings::staticMetaObject, qt_meta_stringdata_QmlCameraSettings,
      qt_meta_data_QmlCameraSettings, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QmlCameraSettings::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QmlCameraSettings::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QmlCameraSettings::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QmlCameraSettings))
        return static_cast<void*>(const_cast< QmlCameraSettings*>(this));
    return QSettings::qt_metacast(_clname);
}

int QmlCameraSettings::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QSettings::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 16)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 16;
    }
#ifndef QT_NO_PROPERTIES
      else if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< int*>(_v) = whiteBalanceMode(); break;
        case 1: *reinterpret_cast< int*>(_v) = flashMode(); break;
        case 2: *reinterpret_cast< qreal*>(_v) = exposureCompensation(); break;
        case 3: *reinterpret_cast< QVariant*>(_v) = captureResolution(); break;
        case 4: *reinterpret_cast< QVariant*>(_v) = videoCaptureResolution(); break;
        case 5: *reinterpret_cast< QVariant*>(_v) = viewfinderResolution(); break;
        case 6: *reinterpret_cast< int*>(_v) = videoEncodingQuality(); break;
        case 7: *reinterpret_cast< int*>(_v) = cameraMode(); break;
        }
        _id -= 8;
    } else if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: setWhiteBalanceMode(*reinterpret_cast< int*>(_v)); break;
        case 1: setFlashMode(*reinterpret_cast< int*>(_v)); break;
        case 2: setExposureCompensation(*reinterpret_cast< qreal*>(_v)); break;
        case 3: setCaptureResolution(*reinterpret_cast< QVariant*>(_v)); break;
        case 4: setVideoCaptureResolution(*reinterpret_cast< QVariant*>(_v)); break;
        case 5: setViewfinderResolution(*reinterpret_cast< QVariant*>(_v)); break;
        case 6: setVideoEncodingQuality(*reinterpret_cast< int*>(_v)); break;
        case 7: setCameraMode(*reinterpret_cast< int*>(_v)); break;
        }
        _id -= 8;
    } else if (_c == QMetaObject::ResetProperty) {
        _id -= 8;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 8;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 8;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 8;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 8;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 8;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void QmlCameraSettings::whiteBalanceModeChanged(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QmlCameraSettings::flashModeChanged(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void QmlCameraSettings::exposureCompensationChanged(qreal _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void QmlCameraSettings::captureResolutionChanged(QVariant _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void QmlCameraSettings::videoCaptureResolutionChanged(QVariant _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void QmlCameraSettings::viewfinderResolutionChanged(QVariant _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void QmlCameraSettings::videoEncodingQualityChanged(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void QmlCameraSettings::cameraModeChanged(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}
QT_END_MOC_NAMESPACE
