/****************************************************************************
** Meta object code from reading C++ file 'annotationwidgets.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../sources/annotationwidgets.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'annotationwidgets.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_qpdfview__AnnotationWidget[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      28,   27,   27,   27, 0x05,

 // slots: signature, parameters, type, tag, flags
      42,   27,   27,   27, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_qpdfview__AnnotationWidget[] = {
    "qpdfview::AnnotationWidget\0\0wasModified()\0"
    "on_textChanged()\0"
};

void qpdfview::AnnotationWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        AnnotationWidget *_t = static_cast<AnnotationWidget *>(_o);
        switch (_id) {
        case 0: _t->wasModified(); break;
        case 1: _t->on_textChanged(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData qpdfview::AnnotationWidget::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject qpdfview::AnnotationWidget::staticMetaObject = {
    { &QPlainTextEdit::staticMetaObject, qt_meta_stringdata_qpdfview__AnnotationWidget,
      qt_meta_data_qpdfview__AnnotationWidget, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &qpdfview::AnnotationWidget::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *qpdfview::AnnotationWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *qpdfview::AnnotationWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_qpdfview__AnnotationWidget))
        return static_cast<void*>(const_cast< AnnotationWidget*>(this));
    return QPlainTextEdit::qt_metacast(_clname);
}

int qpdfview::AnnotationWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QPlainTextEdit::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    }
    return _id;
}

// SIGNAL 0
void qpdfview::AnnotationWidget::wasModified()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}
static const uint qt_meta_data_qpdfview__FileAttachmentAnnotationWidget[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      42,   41,   41,   41, 0x09,
      59,   41,   41,   41, 0x09,
      76,   41,   41,   41, 0x09,
      96,   41,   41,   41, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_qpdfview__FileAttachmentAnnotationWidget[] = {
    "qpdfview::FileAttachmentAnnotationWidget\0"
    "\0on_aboutToShow()\0on_aboutToHide()\0"
    "on_save_triggered()\0on_saveAndOpen_triggered()\0"
};

void qpdfview::FileAttachmentAnnotationWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        FileAttachmentAnnotationWidget *_t = static_cast<FileAttachmentAnnotationWidget *>(_o);
        switch (_id) {
        case 0: _t->on_aboutToShow(); break;
        case 1: _t->on_aboutToHide(); break;
        case 2: _t->on_save_triggered(); break;
        case 3: _t->on_saveAndOpen_triggered(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData qpdfview::FileAttachmentAnnotationWidget::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject qpdfview::FileAttachmentAnnotationWidget::staticMetaObject = {
    { &QToolButton::staticMetaObject, qt_meta_stringdata_qpdfview__FileAttachmentAnnotationWidget,
      qt_meta_data_qpdfview__FileAttachmentAnnotationWidget, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &qpdfview::FileAttachmentAnnotationWidget::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *qpdfview::FileAttachmentAnnotationWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *qpdfview::FileAttachmentAnnotationWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_qpdfview__FileAttachmentAnnotationWidget))
        return static_cast<void*>(const_cast< FileAttachmentAnnotationWidget*>(this));
    return QToolButton::qt_metacast(_clname);
}

int qpdfview::FileAttachmentAnnotationWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QToolButton::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
