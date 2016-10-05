/****************************************************************************
** Meta object code from reading C++ file 'presentationview.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../sources/presentationview.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'presentationview.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_qpdfview__PresentationView[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      23,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       6,       // signalCount

 // signals: signature, parameters, type, tag, flags
      52,   28,   27,   27, 0x05,
      93,   81,   27,   27, 0x25,
     127,  117,   27,   27, 0x05,
     167,  155,   27,   27, 0x05,
     202,  193,   27,   27, 0x05,
     240,  228,   27,   27, 0x05,

 // slots: signature, parameters, type, tag, flags
     282,   27,   27,   27, 0x0a,
     289,   27,   27,   27, 0x0a,
     304,   27,   27,   27, 0x0a,
     315,   27,   27,   27, 0x0a,
     327,   27,   27,   27, 0x0a,
     355,  338,   27,   27, 0x0a,
     381,  376,   27,   27, 0x2a,
     397,   27,   27,   27, 0x0a,
     412,   27,   27,   27, 0x0a,
     426,   27,   27,   27, 0x0a,
     435,   27,   27,   27, 0x0a,
     445,   27,   27,   27, 0x0a,
     460,   27,   27,   27, 0x0a,
     473,   27,   27,   27, 0x0a,
     487,   27,   27,   27, 0x09,
     509,   27,   27,   27, 0x09,
     557,  536,   27,   27, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_qpdfview__PresentationView[] = {
    "qpdfview::PresentationView\0\0"
    "currentPage,trackChange\0"
    "currentPageChanged(int,bool)\0currentPage\0"
    "currentPageChanged(int)\0scaleMode\0"
    "scaleModeChanged(ScaleMode)\0scaleFactor\0"
    "scaleFactorChanged(qreal)\0rotation\0"
    "rotationChanged(Rotation)\0renderFlags\0"
    "renderFlagsChanged(qpdfview::RenderFlags)\0"
    "show()\0previousPage()\0nextPage()\0"
    "firstPage()\0lastPage()\0page,trackChange\0"
    "jumpToPage(int,bool)\0page\0jumpToPage(int)\0"
    "jumpBackward()\0jumpForward()\0zoomIn()\0"
    "zoomOut()\0originalSize()\0rotateLeft()\0"
    "rotateRight()\0on_prefetch_timeout()\0"
    "on_pages_cropRectChanged()\0"
    "newTab,page,left,top\0"
    "on_pages_linkClicked(bool,int,qreal,qreal)\0"
};

void qpdfview::PresentationView::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        PresentationView *_t = static_cast<PresentationView *>(_o);
        switch (_id) {
        case 0: _t->currentPageChanged((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 1: _t->currentPageChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->scaleModeChanged((*reinterpret_cast< ScaleMode(*)>(_a[1]))); break;
        case 3: _t->scaleFactorChanged((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 4: _t->rotationChanged((*reinterpret_cast< Rotation(*)>(_a[1]))); break;
        case 5: _t->renderFlagsChanged((*reinterpret_cast< qpdfview::RenderFlags(*)>(_a[1]))); break;
        case 6: _t->show(); break;
        case 7: _t->previousPage(); break;
        case 8: _t->nextPage(); break;
        case 9: _t->firstPage(); break;
        case 10: _t->lastPage(); break;
        case 11: _t->jumpToPage((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 12: _t->jumpToPage((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 13: _t->jumpBackward(); break;
        case 14: _t->jumpForward(); break;
        case 15: _t->zoomIn(); break;
        case 16: _t->zoomOut(); break;
        case 17: _t->originalSize(); break;
        case 18: _t->rotateLeft(); break;
        case 19: _t->rotateRight(); break;
        case 20: _t->on_prefetch_timeout(); break;
        case 21: _t->on_pages_cropRectChanged(); break;
        case 22: _t->on_pages_linkClicked((*reinterpret_cast< bool(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< qreal(*)>(_a[3])),(*reinterpret_cast< qreal(*)>(_a[4]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData qpdfview::PresentationView::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject qpdfview::PresentationView::staticMetaObject = {
    { &QGraphicsView::staticMetaObject, qt_meta_stringdata_qpdfview__PresentationView,
      qt_meta_data_qpdfview__PresentationView, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &qpdfview::PresentationView::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *qpdfview::PresentationView::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *qpdfview::PresentationView::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_qpdfview__PresentationView))
        return static_cast<void*>(const_cast< PresentationView*>(this));
    return QGraphicsView::qt_metacast(_clname);
}

int qpdfview::PresentationView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QGraphicsView::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 23)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 23;
    }
    return _id;
}

// SIGNAL 0
void qpdfview::PresentationView::currentPageChanged(int _t1, bool _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 2
void qpdfview::PresentationView::scaleModeChanged(ScaleMode _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void qpdfview::PresentationView::scaleFactorChanged(qreal _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void qpdfview::PresentationView::rotationChanged(Rotation _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void qpdfview::PresentationView::renderFlagsChanged(qpdfview::RenderFlags _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}
QT_END_MOC_NAMESPACE
