/****************************************************************************
** Meta object code from reading C++ file 'shortcuthandler.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../sources/shortcuthandler.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'shortcuthandler.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_qpdfview__ShortcutHandler[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      32,   26,   27,   26, 0x0a,
      41,   26,   26,   26, 0x0a,
      50,   26,   26,   26, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_qpdfview__ShortcutHandler[] = {
    "qpdfview::ShortcutHandler\0\0bool\0"
    "submit()\0revert()\0reset()\0"
};

void qpdfview::ShortcutHandler::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        ShortcutHandler *_t = static_cast<ShortcutHandler *>(_o);
        switch (_id) {
        case 0: { bool _r = _t->submit();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 1: _t->revert(); break;
        case 2: _t->reset(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData qpdfview::ShortcutHandler::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject qpdfview::ShortcutHandler::staticMetaObject = {
    { &QAbstractTableModel::staticMetaObject, qt_meta_stringdata_qpdfview__ShortcutHandler,
      qt_meta_data_qpdfview__ShortcutHandler, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &qpdfview::ShortcutHandler::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *qpdfview::ShortcutHandler::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *qpdfview::ShortcutHandler::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_qpdfview__ShortcutHandler))
        return static_cast<void*>(const_cast< ShortcutHandler*>(this));
    return QAbstractTableModel::qt_metacast(_clname);
}

int qpdfview::ShortcutHandler::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QAbstractTableModel::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
