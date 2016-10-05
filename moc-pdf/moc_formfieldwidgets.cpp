/****************************************************************************
** Meta object code from reading C++ file 'formfieldwidgets.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../sources/formfieldwidgets.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'formfieldwidgets.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_qpdfview__NormalTextFieldWidget[] = {

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
      33,   32,   32,   32, 0x05,

 // slots: signature, parameters, type, tag, flags
      52,   47,   32,   32, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_qpdfview__NormalTextFieldWidget[] = {
    "qpdfview::NormalTextFieldWidget\0\0"
    "wasModified()\0text\0on_textChanged(QString)\0"
};

void qpdfview::NormalTextFieldWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        NormalTextFieldWidget *_t = static_cast<NormalTextFieldWidget *>(_o);
        switch (_id) {
        case 0: _t->wasModified(); break;
        case 1: _t->on_textChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData qpdfview::NormalTextFieldWidget::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject qpdfview::NormalTextFieldWidget::staticMetaObject = {
    { &QLineEdit::staticMetaObject, qt_meta_stringdata_qpdfview__NormalTextFieldWidget,
      qt_meta_data_qpdfview__NormalTextFieldWidget, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &qpdfview::NormalTextFieldWidget::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *qpdfview::NormalTextFieldWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *qpdfview::NormalTextFieldWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_qpdfview__NormalTextFieldWidget))
        return static_cast<void*>(const_cast< NormalTextFieldWidget*>(this));
    return QLineEdit::qt_metacast(_clname);
}

int qpdfview::NormalTextFieldWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QLineEdit::qt_metacall(_c, _id, _a);
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
void qpdfview::NormalTextFieldWidget::wasModified()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}
static const uint qt_meta_data_qpdfview__MultilineTextFieldWidget[] = {

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
      36,   35,   35,   35, 0x05,

 // slots: signature, parameters, type, tag, flags
      50,   35,   35,   35, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_qpdfview__MultilineTextFieldWidget[] = {
    "qpdfview::MultilineTextFieldWidget\0\0"
    "wasModified()\0on_textChanged()\0"
};

void qpdfview::MultilineTextFieldWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        MultilineTextFieldWidget *_t = static_cast<MultilineTextFieldWidget *>(_o);
        switch (_id) {
        case 0: _t->wasModified(); break;
        case 1: _t->on_textChanged(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData qpdfview::MultilineTextFieldWidget::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject qpdfview::MultilineTextFieldWidget::staticMetaObject = {
    { &QPlainTextEdit::staticMetaObject, qt_meta_stringdata_qpdfview__MultilineTextFieldWidget,
      qt_meta_data_qpdfview__MultilineTextFieldWidget, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &qpdfview::MultilineTextFieldWidget::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *qpdfview::MultilineTextFieldWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *qpdfview::MultilineTextFieldWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_qpdfview__MultilineTextFieldWidget))
        return static_cast<void*>(const_cast< MultilineTextFieldWidget*>(this));
    return QPlainTextEdit::qt_metacast(_clname);
}

int qpdfview::MultilineTextFieldWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void qpdfview::MultilineTextFieldWidget::wasModified()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}
static const uint qt_meta_data_qpdfview__ComboBoxChoiceFieldWidget[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      37,   36,   36,   36, 0x05,

 // slots: signature, parameters, type, tag, flags
      57,   51,   36,   36, 0x09,
      90,   85,   36,   36, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_qpdfview__ComboBoxChoiceFieldWidget[] = {
    "qpdfview::ComboBoxChoiceFieldWidget\0"
    "\0wasModified()\0index\0on_currentIndexChanged(int)\0"
    "text\0on_currentTextChanged(QString)\0"
};

void qpdfview::ComboBoxChoiceFieldWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        ComboBoxChoiceFieldWidget *_t = static_cast<ComboBoxChoiceFieldWidget *>(_o);
        switch (_id) {
        case 0: _t->wasModified(); break;
        case 1: _t->on_currentIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->on_currentTextChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData qpdfview::ComboBoxChoiceFieldWidget::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject qpdfview::ComboBoxChoiceFieldWidget::staticMetaObject = {
    { &QComboBox::staticMetaObject, qt_meta_stringdata_qpdfview__ComboBoxChoiceFieldWidget,
      qt_meta_data_qpdfview__ComboBoxChoiceFieldWidget, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &qpdfview::ComboBoxChoiceFieldWidget::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *qpdfview::ComboBoxChoiceFieldWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *qpdfview::ComboBoxChoiceFieldWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_qpdfview__ComboBoxChoiceFieldWidget))
        return static_cast<void*>(const_cast< ComboBoxChoiceFieldWidget*>(this));
    return QComboBox::qt_metacast(_clname);
}

int qpdfview::ComboBoxChoiceFieldWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QComboBox::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    }
    return _id;
}

// SIGNAL 0
void qpdfview::ComboBoxChoiceFieldWidget::wasModified()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}
static const uint qt_meta_data_qpdfview__ListBoxChoiceFieldWidget[] = {

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
      36,   35,   35,   35, 0x05,

 // slots: signature, parameters, type, tag, flags
      50,   35,   35,   35, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_qpdfview__ListBoxChoiceFieldWidget[] = {
    "qpdfview::ListBoxChoiceFieldWidget\0\0"
    "wasModified()\0on_itemSelectionChanged()\0"
};

void qpdfview::ListBoxChoiceFieldWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        ListBoxChoiceFieldWidget *_t = static_cast<ListBoxChoiceFieldWidget *>(_o);
        switch (_id) {
        case 0: _t->wasModified(); break;
        case 1: _t->on_itemSelectionChanged(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData qpdfview::ListBoxChoiceFieldWidget::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject qpdfview::ListBoxChoiceFieldWidget::staticMetaObject = {
    { &QListWidget::staticMetaObject, qt_meta_stringdata_qpdfview__ListBoxChoiceFieldWidget,
      qt_meta_data_qpdfview__ListBoxChoiceFieldWidget, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &qpdfview::ListBoxChoiceFieldWidget::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *qpdfview::ListBoxChoiceFieldWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *qpdfview::ListBoxChoiceFieldWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_qpdfview__ListBoxChoiceFieldWidget))
        return static_cast<void*>(const_cast< ListBoxChoiceFieldWidget*>(this));
    return QListWidget::qt_metacast(_clname);
}

int qpdfview::ListBoxChoiceFieldWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QListWidget::qt_metacall(_c, _id, _a);
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
void qpdfview::ListBoxChoiceFieldWidget::wasModified()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}
static const uint qt_meta_data_qpdfview__CheckBoxChoiceFieldWidget[] = {

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
      37,   36,   36,   36, 0x05,

 // slots: signature, parameters, type, tag, flags
      59,   51,   36,   36, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_qpdfview__CheckBoxChoiceFieldWidget[] = {
    "qpdfview::CheckBoxChoiceFieldWidget\0"
    "\0wasModified()\0checked\0on_toggled(bool)\0"
};

void qpdfview::CheckBoxChoiceFieldWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        CheckBoxChoiceFieldWidget *_t = static_cast<CheckBoxChoiceFieldWidget *>(_o);
        switch (_id) {
        case 0: _t->wasModified(); break;
        case 1: _t->on_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData qpdfview::CheckBoxChoiceFieldWidget::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject qpdfview::CheckBoxChoiceFieldWidget::staticMetaObject = {
    { &QCheckBox::staticMetaObject, qt_meta_stringdata_qpdfview__CheckBoxChoiceFieldWidget,
      qt_meta_data_qpdfview__CheckBoxChoiceFieldWidget, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &qpdfview::CheckBoxChoiceFieldWidget::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *qpdfview::CheckBoxChoiceFieldWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *qpdfview::CheckBoxChoiceFieldWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_qpdfview__CheckBoxChoiceFieldWidget))
        return static_cast<void*>(const_cast< CheckBoxChoiceFieldWidget*>(this));
    return QCheckBox::qt_metacast(_clname);
}

int qpdfview::CheckBoxChoiceFieldWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QCheckBox::qt_metacall(_c, _id, _a);
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
void qpdfview::CheckBoxChoiceFieldWidget::wasModified()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}
static const uint qt_meta_data_qpdfview__RadioChoiceFieldWidget[] = {

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
      34,   33,   33,   33, 0x05,

 // slots: signature, parameters, type, tag, flags
      56,   48,   33,   33, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_qpdfview__RadioChoiceFieldWidget[] = {
    "qpdfview::RadioChoiceFieldWidget\0\0"
    "wasModified()\0checked\0on_toggled(bool)\0"
};

void qpdfview::RadioChoiceFieldWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        RadioChoiceFieldWidget *_t = static_cast<RadioChoiceFieldWidget *>(_o);
        switch (_id) {
        case 0: _t->wasModified(); break;
        case 1: _t->on_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData qpdfview::RadioChoiceFieldWidget::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject qpdfview::RadioChoiceFieldWidget::staticMetaObject = {
    { &QRadioButton::staticMetaObject, qt_meta_stringdata_qpdfview__RadioChoiceFieldWidget,
      qt_meta_data_qpdfview__RadioChoiceFieldWidget, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &qpdfview::RadioChoiceFieldWidget::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *qpdfview::RadioChoiceFieldWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *qpdfview::RadioChoiceFieldWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_qpdfview__RadioChoiceFieldWidget))
        return static_cast<void*>(const_cast< RadioChoiceFieldWidget*>(this));
    return QRadioButton::qt_metacast(_clname);
}

int qpdfview::RadioChoiceFieldWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QRadioButton::qt_metacall(_c, _id, _a);
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
void qpdfview::RadioChoiceFieldWidget::wasModified()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}
QT_END_MOC_NAMESPACE
