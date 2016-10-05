/****************************************************************************
** Meta object code from reading C++ file 'documentview.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../sources/documentview.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'documentview.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_qpdfview__DocumentView[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      68,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      23,       // signalCount

 // signals: signature, parameters, type, tag, flags
      24,   23,   23,   23, 0x05,
      42,   23,   23,   23, 0x05,
      75,   61,   23,   23, 0x05,
     125,  101,   23,   23, 0x05,
     166,  154,   23,   23, 0x25,
     207,  190,   23,   23, 0x05,
     248,  233,   23,   23, 0x05,
     287,  276,   23,   23, 0x05,
     333,  317,   23,   23, 0x05,
     372,  362,   23,   23, 0x05,
     412,  400,   23,   23, 0x05,
     447,  438,   23,   23, 0x05,
     478,  473,   23,   23, 0x05,
     516,  495,   23,   23, 0x05,
     558,  546,   23,   23, 0x05,
     613,  600,   23,   23, 0x05,
     658,  639,   23,   23, 0x05,
     702,  690,   23,   23, 0x05,
     743,  727,   23,   23, 0x05,
     796,  783,   23,   23, 0x05,
     837,  822,   23,   23, 0x05,
     875,   23,   23,   23, 0x05,
     901,  892,   23,   23, 0x05,

 // slots: signature, parameters, type, tag, flags
     928,   23,   23,   23, 0x0a,
     949,  940,  935,   23, 0x0a,
     963,   23,  935,   23, 0x0a,
     994,  973,  935,   23, 0x0a,
    1034, 1013,  935,   23, 0x0a,
    1072, 1064,  935,   23, 0x2a,
    1089,   23,   23,   23, 0x0a,
    1104,   23,   23,   23, 0x0a,
    1115,   23,   23,   23, 0x0a,
    1127,   23,   23,   23, 0x0a,
    1170, 1138,   23,   23, 0x0a,
    1228, 1203,   23,   23, 0x2a,
    1272, 1255,   23,   23, 0x2a,
    1293,  473,   23,   23, 0x2a,
    1309,   23,  935,   23, 0x0a,
    1327,   23,   23,   23, 0x0a,
    1342,   23,  935,   23, 0x0a,
    1359,   23,   23,   23, 0x0a,
    1388, 1373,   23,   23, 0x0a,
    1445, 1419,   23,   23, 0x0a,
    1476,   23,   23,   23, 0x0a,
    1491,   23,   23,   23, 0x0a,
    1506,   23,   23,   23, 0x0a,
    1521,   23,   23,   23, 0x0a,
    1538, 1532,   23,   23, 0x0a,
    1562,   23,   23,   23, 0x0a,
    1571,   23,   23,   23, 0x0a,
    1581,   23,   23,   23, 0x0a,
    1596,   23,   23,   23, 0x0a,
    1609,   23,   23,   23, 0x0a,
    1623,   23,   23,   23, 0x0a,
    1643,   23,   23,   23, 0x09,
    1679,   23,   23,   23, 0x09,
    1704,   23,   23,   23, 0x09,
    1726,   23,   23,   23, 0x09,
    1758,  892,   23,   23, 0x09,
    1807, 1793,   23,   23, 0x09,
    1853,   23,   23,   23, 0x09,
    1880,   23,   23,   23, 0x09,
    1933, 1912,   23,   23, 0x09,
    1997, 1976,   23,   23, 0x09,
    2040, 2036,   23,   23, 0x09,
    2070,   23,   23,   23, 0x09,
    2110, 2100,   23,   23, 0x09,
    2147,   23,   23,   23, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_qpdfview__DocumentView[] = {
    "qpdfview::DocumentView\0\0documentChanged()\0"
    "documentModified()\0numberOfPages\0"
    "numberOfPagesChanged(int)\0"
    "currentPage,trackChange\0"
    "currentPageChanged(int,bool)\0currentPage\0"
    "currentPageChanged(int)\0backward,forward\0"
    "canJumpChanged(bool,bool)\0continuousMode\0"
    "continuousModeChanged(bool)\0layoutMode\0"
    "layoutModeChanged(LayoutMode)\0"
    "rightToLeftMode\0rightToLeftModeChanged(bool)\0"
    "scaleMode\0scaleModeChanged(ScaleMode)\0"
    "scaleFactor\0scaleFactorChanged(qreal)\0"
    "rotation\0rotationChanged(Rotation)\0"
    "page\0linkClicked(int)\0newTab,filePath,page\0"
    "linkClicked(bool,QString,int)\0renderFlags\0"
    "renderFlagsChanged(qpdfview::RenderFlags)\0"
    "invertColors\0invertColorsChanged(bool)\0"
    "convertToGrayscale\0convertToGrayscaleChanged(bool)\0"
    "trimMargins\0trimMarginsChanged(bool)\0"
    "compositionMode\0compositionModeChanged(CompositionMode)\0"
    "highlightAll\0highlightAllChanged(bool)\0"
    "rubberBandMode\0rubberBandModeChanged(RubberBandMode)\0"
    "searchFinished()\0progress\0"
    "searchProgressChanged(int)\0show()\0"
    "bool\0filePath\0open(QString)\0refresh()\0"
    "filePath,withChanges\0save(QString,bool)\0"
    "printer,printOptions\0print(QPrinter*,PrintOptions)\0"
    "printer\0print(QPrinter*)\0previousPage()\0"
    "nextPage()\0firstPage()\0lastPage()\0"
    "page,trackChange,newLeft,newTop\0"
    "jumpToPage(int,bool,qreal,qreal)\0"
    "page,trackChange,newLeft\0"
    "jumpToPage(int,bool,qreal)\0page,trackChange\0"
    "jumpToPage(int,bool)\0jumpToPage(int)\0"
    "canJumpBackward()\0jumpBackward()\0"
    "canJumpForward()\0jumpForward()\0"
    "page,highlight\0temporaryHighlight(int,QRectF)\0"
    "text,matchCase,wholeWords\0"
    "startSearch(QString,bool,bool)\0"
    "cancelSearch()\0clearResults()\0"
    "findPrevious()\0findNext()\0index\0"
    "findResult(QModelIndex)\0zoomIn()\0"
    "zoomOut()\0originalSize()\0rotateLeft()\0"
    "rotateRight()\0startPresentation()\0"
    "on_verticalScrollBar_valueChanged()\0"
    "on_autoRefresh_timeout()\0on_prefetch_timeout()\0"
    "on_temporaryHighlight_timeout()\0"
    "on_searchTask_progressChanged(int)\0"
    "index,results\0"
    "on_searchTask_resultsReady(int,QList<QRectF>)\0"
    "on_pages_cropRectChanged()\0"
    "on_thumbnails_cropRectChanged()\0"
    "newTab,page,left,top\0"
    "on_pages_linkClicked(bool,int,qreal,qreal)\0"
    "newTab,fileName,page\0"
    "on_pages_linkClicked(bool,QString,int)\0"
    "url\0on_pages_linkClicked(QString)\0"
    "on_pages_rubberBandFinished()\0page,rect\0"
    "on_pages_zoomToSelection(int,QRectF)\0"
    "on_pages_wasModified()\0"
};

void qpdfview::DocumentView::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        DocumentView *_t = static_cast<DocumentView *>(_o);
        switch (_id) {
        case 0: _t->documentChanged(); break;
        case 1: _t->documentModified(); break;
        case 2: _t->numberOfPagesChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->currentPageChanged((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 4: _t->currentPageChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->canJumpChanged((*reinterpret_cast< bool(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 6: _t->continuousModeChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 7: _t->layoutModeChanged((*reinterpret_cast< LayoutMode(*)>(_a[1]))); break;
        case 8: _t->rightToLeftModeChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 9: _t->scaleModeChanged((*reinterpret_cast< ScaleMode(*)>(_a[1]))); break;
        case 10: _t->scaleFactorChanged((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 11: _t->rotationChanged((*reinterpret_cast< Rotation(*)>(_a[1]))); break;
        case 12: _t->linkClicked((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 13: _t->linkClicked((*reinterpret_cast< bool(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 14: _t->renderFlagsChanged((*reinterpret_cast< qpdfview::RenderFlags(*)>(_a[1]))); break;
        case 15: _t->invertColorsChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 16: _t->convertToGrayscaleChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 17: _t->trimMarginsChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 18: _t->compositionModeChanged((*reinterpret_cast< CompositionMode(*)>(_a[1]))); break;
        case 19: _t->highlightAllChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 20: _t->rubberBandModeChanged((*reinterpret_cast< RubberBandMode(*)>(_a[1]))); break;
        case 21: _t->searchFinished(); break;
        case 22: _t->searchProgressChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 23: _t->show(); break;
        case 24: { bool _r = _t->open((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 25: { bool _r = _t->refresh();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 26: { bool _r = _t->save((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 27: { bool _r = _t->print((*reinterpret_cast< QPrinter*(*)>(_a[1])),(*reinterpret_cast< const PrintOptions(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 28: { bool _r = _t->print((*reinterpret_cast< QPrinter*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 29: _t->previousPage(); break;
        case 30: _t->nextPage(); break;
        case 31: _t->firstPage(); break;
        case 32: _t->lastPage(); break;
        case 33: _t->jumpToPage((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2])),(*reinterpret_cast< qreal(*)>(_a[3])),(*reinterpret_cast< qreal(*)>(_a[4]))); break;
        case 34: _t->jumpToPage((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2])),(*reinterpret_cast< qreal(*)>(_a[3]))); break;
        case 35: _t->jumpToPage((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 36: _t->jumpToPage((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 37: { bool _r = _t->canJumpBackward();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 38: _t->jumpBackward(); break;
        case 39: { bool _r = _t->canJumpForward();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 40: _t->jumpForward(); break;
        case 41: _t->temporaryHighlight((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< const QRectF(*)>(_a[2]))); break;
        case 42: _t->startSearch((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3]))); break;
        case 43: _t->cancelSearch(); break;
        case 44: _t->clearResults(); break;
        case 45: _t->findPrevious(); break;
        case 46: _t->findNext(); break;
        case 47: _t->findResult((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 48: _t->zoomIn(); break;
        case 49: _t->zoomOut(); break;
        case 50: _t->originalSize(); break;
        case 51: _t->rotateLeft(); break;
        case 52: _t->rotateRight(); break;
        case 53: _t->startPresentation(); break;
        case 54: _t->on_verticalScrollBar_valueChanged(); break;
        case 55: _t->on_autoRefresh_timeout(); break;
        case 56: _t->on_prefetch_timeout(); break;
        case 57: _t->on_temporaryHighlight_timeout(); break;
        case 58: _t->on_searchTask_progressChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 59: _t->on_searchTask_resultsReady((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< const QList<QRectF>(*)>(_a[2]))); break;
        case 60: _t->on_pages_cropRectChanged(); break;
        case 61: _t->on_thumbnails_cropRectChanged(); break;
        case 62: _t->on_pages_linkClicked((*reinterpret_cast< bool(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< qreal(*)>(_a[3])),(*reinterpret_cast< qreal(*)>(_a[4]))); break;
        case 63: _t->on_pages_linkClicked((*reinterpret_cast< bool(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 64: _t->on_pages_linkClicked((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 65: _t->on_pages_rubberBandFinished(); break;
        case 66: _t->on_pages_zoomToSelection((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< const QRectF(*)>(_a[2]))); break;
        case 67: _t->on_pages_wasModified(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData qpdfview::DocumentView::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject qpdfview::DocumentView::staticMetaObject = {
    { &QGraphicsView::staticMetaObject, qt_meta_stringdata_qpdfview__DocumentView,
      qt_meta_data_qpdfview__DocumentView, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &qpdfview::DocumentView::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *qpdfview::DocumentView::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *qpdfview::DocumentView::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_qpdfview__DocumentView))
        return static_cast<void*>(const_cast< DocumentView*>(this));
    return QGraphicsView::qt_metacast(_clname);
}

int qpdfview::DocumentView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QGraphicsView::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 68)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 68;
    }
    return _id;
}

// SIGNAL 0
void qpdfview::DocumentView::documentChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}

// SIGNAL 1
void qpdfview::DocumentView::documentModified()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}

// SIGNAL 2
void qpdfview::DocumentView::numberOfPagesChanged(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void qpdfview::DocumentView::currentPageChanged(int _t1, bool _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 5
void qpdfview::DocumentView::canJumpChanged(bool _t1, bool _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void qpdfview::DocumentView::continuousModeChanged(bool _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void qpdfview::DocumentView::layoutModeChanged(LayoutMode _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void qpdfview::DocumentView::rightToLeftModeChanged(bool _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}

// SIGNAL 9
void qpdfview::DocumentView::scaleModeChanged(ScaleMode _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 9, _a);
}

// SIGNAL 10
void qpdfview::DocumentView::scaleFactorChanged(qreal _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 10, _a);
}

// SIGNAL 11
void qpdfview::DocumentView::rotationChanged(Rotation _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 11, _a);
}

// SIGNAL 12
void qpdfview::DocumentView::linkClicked(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 12, _a);
}

// SIGNAL 13
void qpdfview::DocumentView::linkClicked(bool _t1, const QString & _t2, int _t3)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 13, _a);
}

// SIGNAL 14
void qpdfview::DocumentView::renderFlagsChanged(qpdfview::RenderFlags _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 14, _a);
}

// SIGNAL 15
void qpdfview::DocumentView::invertColorsChanged(bool _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 15, _a);
}

// SIGNAL 16
void qpdfview::DocumentView::convertToGrayscaleChanged(bool _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 16, _a);
}

// SIGNAL 17
void qpdfview::DocumentView::trimMarginsChanged(bool _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 17, _a);
}

// SIGNAL 18
void qpdfview::DocumentView::compositionModeChanged(CompositionMode _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 18, _a);
}

// SIGNAL 19
void qpdfview::DocumentView::highlightAllChanged(bool _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 19, _a);
}

// SIGNAL 20
void qpdfview::DocumentView::rubberBandModeChanged(RubberBandMode _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 20, _a);
}

// SIGNAL 21
void qpdfview::DocumentView::searchFinished()
{
    QMetaObject::activate(this, &staticMetaObject, 21, 0);
}

// SIGNAL 22
void qpdfview::DocumentView::searchProgressChanged(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 22, _a);
}
QT_END_MOC_NAMESPACE
