/****************************************************************************
** Meta object code from reading C++ file 'psmodel.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../sources/psmodel.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'psmodel.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_qpdfview__PsSettingsWidget[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

static const char qt_meta_stringdata_qpdfview__PsSettingsWidget[] = {
    "qpdfview::PsSettingsWidget\0"
};

void qpdfview::PsSettingsWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObjectExtraData qpdfview::PsSettingsWidget::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject qpdfview::PsSettingsWidget::staticMetaObject = {
    { &SettingsWidget::staticMetaObject, qt_meta_stringdata_qpdfview__PsSettingsWidget,
      qt_meta_data_qpdfview__PsSettingsWidget, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &qpdfview::PsSettingsWidget::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *qpdfview::PsSettingsWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *qpdfview::PsSettingsWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_qpdfview__PsSettingsWidget))
        return static_cast<void*>(const_cast< PsSettingsWidget*>(this));
    return SettingsWidget::qt_metacast(_clname);
}

int qpdfview::PsSettingsWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = SettingsWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
static const uint qt_meta_data_qpdfview__PsPlugin[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

static const char qt_meta_stringdata_qpdfview__PsPlugin[] = {
    "qpdfview::PsPlugin\0"
};

void qpdfview::PsPlugin::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObjectExtraData qpdfview::PsPlugin::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject qpdfview::PsPlugin::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_qpdfview__PsPlugin,
      qt_meta_data_qpdfview__PsPlugin, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &qpdfview::PsPlugin::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *qpdfview::PsPlugin::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *qpdfview::PsPlugin::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_qpdfview__PsPlugin))
        return static_cast<void*>(const_cast< PsPlugin*>(this));
    if (!strcmp(_clname, "Plugin"))
        return static_cast< Plugin*>(const_cast< PsPlugin*>(this));
    if (!strcmp(_clname, "local.qpdfview.Plugin"))
        return static_cast< qpdfview::Plugin*>(const_cast< PsPlugin*>(this));
    return QObject::qt_metacast(_clname);
}

int qpdfview::PsPlugin::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
QT_END_MOC_NAMESPACE
