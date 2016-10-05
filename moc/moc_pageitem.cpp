/****************************************************************************
** Meta object code from reading C++ file 'pageitem.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../sources/pageitem.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'pageitem.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_qpdfview__PageItem[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      25,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      10,       // signalCount

 // signals: signature, parameters, type, tag, flags
      20,   19,   19,   19, 0x05,
      59,   38,   19,   19, 0x05,
     110,   93,   19,   19, 0x25,
     150,  138,   19,   19, 0x25,
     193,  172,   19,   19, 0x05,
     227,  223,   19,   19, 0x05,
     248,   19,   19,   19, 0x05,
     268,   19,   19,   19, 0x05,
     299,  289,   19,   19, 0x05,
     327,   19,   19,   19, 0x05,

 // slots: signature, parameters, type, tag, flags
     379,  341,   19,   19, 0x0a,
     418,  398,   19,   19, 0x2a,
     432,   19,   19,   19, 0x2a,
     455,  446,  442,   19, 0x0a,
     473,   19,  442,   19, 0x2a,
     487,   19,   19,   19, 0x0a,
     521,  502,   19,   19, 0x09,
     575,  563,   19,   19, 0x09,
     603,   19,   19,   19, 0x29,
     627,   19,   19,   19, 0x09,
     671,  653,   19,   19, 0x09,
     711,  563,   19,   19, 0x09,
     738,   19,   19,   19, 0x29,
     761,   19,   19,   19, 0x09,
     786,   19,   19,   19, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_qpdfview__PageItem[] = {
    "qpdfview::PageItem\0\0cropRectChanged()\0"
    "newTab,page,left,top\0"
    "linkClicked(bool,int,qreal,qreal)\0"
    "newTab,page,left\0linkClicked(bool,int,qreal)\0"
    "newTab,page\0linkClicked(bool,int)\0"
    "newTab,fileName,page\0linkClicked(bool,QString,int)\0"
    "url\0linkClicked(QString)\0rubberBandStarted()\0"
    "rubberBandFinished()\0page,rect\0"
    "zoomToSelection(int,QRectF)\0wasModified()\0"
    "keepObsoletePixmaps,dropCachedPixmaps\0"
    "refresh(bool,bool)\0keepObsoletePixmaps\0"
    "refresh(bool)\0refresh()\0int\0prefetch\0"
    "startRender(bool)\0startRender()\0"
    "cancelRender()\0selectedAnnotation\0"
    "showAnnotationOverlay(Model::Annotation*)\0"
    "deleteLater\0hideAnnotationOverlay(bool)\0"
    "hideAnnotationOverlay()\0"
    "updateAnnotationOverlay()\0selectedFormField\0"
    "showFormFieldOverlay(Model::FormField*)\0"
    "hideFormFieldOverlay(bool)\0"
    "hideFormFieldOverlay()\0updateFormFieldOverlay()\0"
    "loadInteractiveElements()\0"
};

void qpdfview::PageItem::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        PageItem *_t = static_cast<PageItem *>(_o);
        switch (_id) {
        case 0: _t->cropRectChanged(); break;
        case 1: _t->linkClicked((*reinterpret_cast< bool(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< qreal(*)>(_a[3])),(*reinterpret_cast< qreal(*)>(_a[4]))); break;
        case 2: _t->linkClicked((*reinterpret_cast< bool(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< qreal(*)>(_a[3]))); break;
        case 3: _t->linkClicked((*reinterpret_cast< bool(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 4: _t->linkClicked((*reinterpret_cast< bool(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 5: _t->linkClicked((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 6: _t->rubberBandStarted(); break;
        case 7: _t->rubberBandFinished(); break;
        case 8: _t->zoomToSelection((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< const QRectF(*)>(_a[2]))); break;
        case 9: _t->wasModified(); break;
        case 10: _t->refresh((*reinterpret_cast< bool(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 11: _t->refresh((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 12: _t->refresh(); break;
        case 13: { int _r = _t->startRender((*reinterpret_cast< bool(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 14: { int _r = _t->startRender();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 15: _t->cancelRender(); break;
        case 16: _t->showAnnotationOverlay((*reinterpret_cast< Model::Annotation*(*)>(_a[1]))); break;
        case 17: _t->hideAnnotationOverlay((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 18: _t->hideAnnotationOverlay(); break;
        case 19: _t->updateAnnotationOverlay(); break;
        case 20: _t->showFormFieldOverlay((*reinterpret_cast< Model::FormField*(*)>(_a[1]))); break;
        case 21: _t->hideFormFieldOverlay((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 22: _t->hideFormFieldOverlay(); break;
        case 23: _t->updateFormFieldOverlay(); break;
        case 24: _t->loadInteractiveElements(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData qpdfview::PageItem::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject qpdfview::PageItem::staticMetaObject = {
    { &QGraphicsObject::staticMetaObject, qt_meta_stringdata_qpdfview__PageItem,
      qt_meta_data_qpdfview__PageItem, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &qpdfview::PageItem::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *qpdfview::PageItem::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *qpdfview::PageItem::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_qpdfview__PageItem))
        return static_cast<void*>(const_cast< PageItem*>(this));
    return QGraphicsObject::qt_metacast(_clname);
}

int qpdfview::PageItem::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QGraphicsObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 25)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 25;
    }
    return _id;
}

// SIGNAL 0
void qpdfview::PageItem::cropRectChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}

// SIGNAL 1
void qpdfview::PageItem::linkClicked(bool _t1, int _t2, qreal _t3, qreal _t4)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 4
void qpdfview::PageItem::linkClicked(bool _t1, const QString & _t2, int _t3)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void qpdfview::PageItem::linkClicked(const QString & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void qpdfview::PageItem::rubberBandStarted()
{
    QMetaObject::activate(this, &staticMetaObject, 6, 0);
}

// SIGNAL 7
void qpdfview::PageItem::rubberBandFinished()
{
    QMetaObject::activate(this, &staticMetaObject, 7, 0);
}

// SIGNAL 8
void qpdfview::PageItem::zoomToSelection(int _t1, const QRectF & _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}

// SIGNAL 9
void qpdfview::PageItem::wasModified()
{
    QMetaObject::activate(this, &staticMetaObject, 9, 0);
}
QT_END_MOC_NAMESPACE
