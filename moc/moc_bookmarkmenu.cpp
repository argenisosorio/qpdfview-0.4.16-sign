/****************************************************************************
** Meta object code from reading C++ file 'bookmarkmenu.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../sources/bookmarkmenu.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'bookmarkmenu.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_qpdfview__BookmarkMenu[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: signature, parameters, type, tag, flags
      33,   24,   23,   23, 0x05,
      56,   24,   23,   23, 0x05,
     101,   87,   23,   23, 0x05,
     134,   24,   23,   23, 0x05,

 // slots: signature, parameters, type, tag, flags
     167,   23,   23,   23, 0x09,
     187,   23,   23,   23, 0x09,
     222,  215,   23,   23, 0x09,
     256,   23,   23,   23, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_qpdfview__BookmarkMenu[] = {
    "qpdfview::BookmarkMenu\0\0filePath\0"
    "openTriggered(QString)\0"
    "openInNewTabTriggered(QString)\0"
    "filePath,page\0jumpToPageTriggered(QString,int)\0"
    "removeBookmarkTriggered(QString)\0"
    "on_open_triggered()\0on_openInNewTab_triggered()\0"
    "action\0on_jumpToPage_triggered(QAction*)\0"
    "on_removeBookmark_triggered()\0"
};

void qpdfview::BookmarkMenu::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        BookmarkMenu *_t = static_cast<BookmarkMenu *>(_o);
        switch (_id) {
        case 0: _t->openTriggered((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->openInNewTabTriggered((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->jumpToPageTriggered((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 3: _t->removeBookmarkTriggered((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 4: _t->on_open_triggered(); break;
        case 5: _t->on_openInNewTab_triggered(); break;
        case 6: _t->on_jumpToPage_triggered((*reinterpret_cast< QAction*(*)>(_a[1]))); break;
        case 7: _t->on_removeBookmark_triggered(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData qpdfview::BookmarkMenu::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject qpdfview::BookmarkMenu::staticMetaObject = {
    { &QMenu::staticMetaObject, qt_meta_stringdata_qpdfview__BookmarkMenu,
      qt_meta_data_qpdfview__BookmarkMenu, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &qpdfview::BookmarkMenu::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *qpdfview::BookmarkMenu::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *qpdfview::BookmarkMenu::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_qpdfview__BookmarkMenu))
        return static_cast<void*>(const_cast< BookmarkMenu*>(this));
    return QMenu::qt_metacast(_clname);
}

int qpdfview::BookmarkMenu::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMenu::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    }
    return _id;
}

// SIGNAL 0
void qpdfview::BookmarkMenu::openTriggered(const QString & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void qpdfview::BookmarkMenu::openInNewTabTriggered(const QString & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void qpdfview::BookmarkMenu::jumpToPageTriggered(const QString & _t1, int _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void qpdfview::BookmarkMenu::removeBookmarkTriggered(const QString & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}
QT_END_MOC_NAMESPACE
