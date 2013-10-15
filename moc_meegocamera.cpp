/****************************************************************************
** Meta object code from reading C++ file 'meegocamera.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "meegocamera.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'meegocamera.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_MeegoCamera[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      12,   19,   19,   19, 0x05,

 // slots: signature, parameters, type, tag, flags
      20,   19,   19,   19, 0x08,
      29,   19,   19,   19, 0x08,
      61,   19,   19,   19, 0x08,
      77,   19,   19,   19, 0x08,
      92,   19,   19,   19, 0x08,
     106,  160,   19,   19, 0x08,
     185,   19,   19,   19, 0x08,
     203,   19,   19,   19, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_MeegoCamera[] = {
    "MeegoCamera\0quit()\0\0hideUI()\0"
    "didReceiveKeyEventFromFile(int)\0"
    "newConnection()\0disconnected()\0"
    "deleteImage()\0"
    "resourcesGranted(QList<ResourcePolicy::ResourceType>)\0"
    "grantedOptionalResources\0resourcesDenied()\0"
    "lostResources()\0"
};

void MeegoCamera::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        MeegoCamera *_t = static_cast<MeegoCamera *>(_o);
        switch (_id) {
        case 0: _t->quit(); break;
        case 1: _t->hideUI(); break;
        case 2: _t->didReceiveKeyEventFromFile((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->newConnection(); break;
        case 4: _t->disconnected(); break;
        case 5: _t->deleteImage(); break;
        case 6: _t->resourcesGranted((*reinterpret_cast< const QList<ResourcePolicy::ResourceType>(*)>(_a[1]))); break;
        case 7: _t->resourcesDenied(); break;
        case 8: _t->lostResources(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData MeegoCamera::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject MeegoCamera::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_MeegoCamera,
      qt_meta_data_MeegoCamera, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &MeegoCamera::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *MeegoCamera::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *MeegoCamera::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_MeegoCamera))
        return static_cast<void*>(const_cast< MeegoCamera*>(this));
    return QObject::qt_metacast(_clname);
}

int MeegoCamera::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    }
    return _id;
}

// SIGNAL 0
void MeegoCamera::quit()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}
QT_END_MOC_NAMESPACE
