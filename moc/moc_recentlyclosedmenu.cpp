/****************************************************************************
** Meta object code from reading C++ file 'recentlyclosedmenu.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../sources/recentlyclosedmenu.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'recentlyclosedmenu.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_qpdfview__RecentlyClosedMenu[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      40,   30,   29,   29, 0x05,

 // slots: signature, parameters, type, tag, flags
      69,   29,   29,   29, 0x0a,
      93,   29,   29,   29, 0x0a,
     116,   30,   29,   29, 0x09,
     149,   29,   29,   29, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_qpdfview__RecentlyClosedMenu[] = {
    "qpdfview::RecentlyClosedMenu\0\0tabAction\0"
    "tabActionTriggered(QAction*)\0"
    "triggerFirstTabAction()\0triggerLastTabAction()\0"
    "on_tabAction_triggered(QAction*)\0"
    "on_clearList_triggered()\0"
};

void qpdfview::RecentlyClosedMenu::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        RecentlyClosedMenu *_t = static_cast<RecentlyClosedMenu *>(_o);
        switch (_id) {
        case 0: _t->tabActionTriggered((*reinterpret_cast< QAction*(*)>(_a[1]))); break;
        case 1: _t->triggerFirstTabAction(); break;
        case 2: _t->triggerLastTabAction(); break;
        case 3: _t->on_tabAction_triggered((*reinterpret_cast< QAction*(*)>(_a[1]))); break;
        case 4: _t->on_clearList_triggered(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData qpdfview::RecentlyClosedMenu::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject qpdfview::RecentlyClosedMenu::staticMetaObject = {
    { &QMenu::staticMetaObject, qt_meta_stringdata_qpdfview__RecentlyClosedMenu,
      qt_meta_data_qpdfview__RecentlyClosedMenu, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &qpdfview::RecentlyClosedMenu::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *qpdfview::RecentlyClosedMenu::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *qpdfview::RecentlyClosedMenu::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_qpdfview__RecentlyClosedMenu))
        return static_cast<void*>(const_cast< RecentlyClosedMenu*>(this));
    return QMenu::qt_metacast(_clname);
}

int qpdfview::RecentlyClosedMenu::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMenu::qt_metacall(_c, _id, _a);
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
void qpdfview::RecentlyClosedMenu::tabActionTriggered(QAction * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
