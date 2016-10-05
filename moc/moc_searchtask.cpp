/****************************************************************************
** Meta object code from reading C++ file 'searchtask.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../sources/searchtask.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'searchtask.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_qpdfview__SearchTask[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: signature, parameters, type, tag, flags
      31,   22,   21,   21, 0x05,
      66,   52,   21,   21, 0x05,

 // slots: signature, parameters, type, tag, flags
     142,   98,   21,   21, 0x0a,
     225,  193,   21,   21, 0x2a,
     272,   21,   21,   21, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_qpdfview__SearchTask[] = {
    "qpdfview::SearchTask\0\0progress\0"
    "progressChanged(int)\0index,results\0"
    "resultsReady(int,QList<QRectF>)\0"
    "pages,text,matchCase,wholeWords,beginAtPage\0"
    "start(QVector<Model::Page*>,QString,bool,bool,int)\0"
    "pages,text,matchCase,wholeWords\0"
    "start(QVector<Model::Page*>,QString,bool,bool)\0"
    "cancel()\0"
};

void qpdfview::SearchTask::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        SearchTask *_t = static_cast<SearchTask *>(_o);
        switch (_id) {
        case 0: _t->progressChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->resultsReady((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< const QList<QRectF>(*)>(_a[2]))); break;
        case 2: _t->start((*reinterpret_cast< const QVector<Model::Page*>(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3])),(*reinterpret_cast< bool(*)>(_a[4])),(*reinterpret_cast< int(*)>(_a[5]))); break;
        case 3: _t->start((*reinterpret_cast< const QVector<Model::Page*>(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3])),(*reinterpret_cast< bool(*)>(_a[4]))); break;
        case 4: _t->cancel(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData qpdfview::SearchTask::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject qpdfview::SearchTask::staticMetaObject = {
    { &QThread::staticMetaObject, qt_meta_stringdata_qpdfview__SearchTask,
      qt_meta_data_qpdfview__SearchTask, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &qpdfview::SearchTask::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *qpdfview::SearchTask::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *qpdfview::SearchTask::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_qpdfview__SearchTask))
        return static_cast<void*>(const_cast< SearchTask*>(this));
    return QThread::qt_metacast(_clname);
}

int qpdfview::SearchTask::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QThread::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    }
    return _id;
}

// SIGNAL 0
void qpdfview::SearchTask::progressChanged(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void qpdfview::SearchTask::resultsReady(int _t1, const QList<QRectF> & _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_END_MOC_NAMESPACE
