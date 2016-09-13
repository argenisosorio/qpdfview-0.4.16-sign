/****************************************************************************
** Meta object code from reading C++ file 'tileitem.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../sources/tileitem.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'tileitem.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_qpdfview__TileItem[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      40,   20,   19,   19, 0x0a,
      54,   19,   19,   19, 0x2a,
      77,   68,   64,   19, 0x0a,
      95,   19,   64,   19, 0x2a,
     109,   19,   19,   19, 0x0a,
     124,   19,   19,   19, 0x0a,
     144,   19,   19,   19, 0x09,
     210,  169,   19,   19, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_qpdfview__TileItem[] = {
    "qpdfview::TileItem\0\0keepObsoletePixmaps\0"
    "refresh(bool)\0refresh()\0int\0prefetch\0"
    "startRender(bool)\0startRender()\0"
    "cancelRender()\0deleteAfterRender()\0"
    "on_renderTask_finished()\0"
    "renderParam,rect,prefetch,image,cropRect\0"
    "on_renderTask_imageReady(RenderParam,QRect,bool,QImage,QRectF)\0"
};

void qpdfview::TileItem::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        TileItem *_t = static_cast<TileItem *>(_o);
        switch (_id) {
        case 0: _t->refresh((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->refresh(); break;
        case 2: { int _r = _t->startRender((*reinterpret_cast< bool(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 3: { int _r = _t->startRender();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 4: _t->cancelRender(); break;
        case 5: _t->deleteAfterRender(); break;
        case 6: _t->on_renderTask_finished(); break;
        case 7: _t->on_renderTask_imageReady((*reinterpret_cast< const RenderParam(*)>(_a[1])),(*reinterpret_cast< const QRect(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3])),(*reinterpret_cast< const QImage(*)>(_a[4])),(*reinterpret_cast< const QRectF(*)>(_a[5]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData qpdfview::TileItem::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject qpdfview::TileItem::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_qpdfview__TileItem,
      qt_meta_data_qpdfview__TileItem, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &qpdfview::TileItem::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *qpdfview::TileItem::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *qpdfview::TileItem::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_qpdfview__TileItem))
        return static_cast<void*>(const_cast< TileItem*>(this));
    return QObject::qt_metacast(_clname);
}

int qpdfview::TileItem::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
