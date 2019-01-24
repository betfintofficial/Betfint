/****************************************************************************
** Meta object code from reading C++ file 'placebetevent.h'
**
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "qt/placebetevent.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'placebetevent.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_PlaceBetEvent_t {
    QByteArrayData data[22];
    char stringdata0[352];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PlaceBetEvent_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PlaceBetEvent_t qt_meta_stringdata_PlaceBetEvent = {
    {
QT_MOC_LITERAL(0, 0, 13), // "PlaceBetEvent"
QT_MOC_LITERAL(1, 14, 19), // "currentEventChanged"
QT_MOC_LITERAL(2, 34, 0), // ""
QT_MOC_LITERAL(3, 35, 7), // "CEvent*"
QT_MOC_LITERAL(4, 43, 5), // "event"
QT_MOC_LITERAL(5, 49, 11), // "std::string"
QT_MOC_LITERAL(6, 61, 9), // "teamToWin"
QT_MOC_LITERAL(7, 71, 9), // "oddsToWin"
QT_MOC_LITERAL(8, 81, 11), // "removeEntry"
QT_MOC_LITERAL(9, 93, 14), // "PlaceBetEvent*"
QT_MOC_LITERAL(10, 108, 5), // "entry"
QT_MOC_LITERAL(11, 114, 16), // "payAmountChanged"
QT_MOC_LITERAL(12, 131, 5), // "clear"
QT_MOC_LITERAL(13, 137, 13), // "deleteClicked"
QT_MOC_LITERAL(14, 151, 20), // "on_payTo_textChanged"
QT_MOC_LITERAL(15, 172, 7), // "address"
QT_MOC_LITERAL(16, 180, 33), // "on_pushButtonPlaceHomeBet_cli..."
QT_MOC_LITERAL(17, 214, 33), // "on_pushButtonPlaceAwayBet_cli..."
QT_MOC_LITERAL(18, 248, 33), // "on_pushButtonPlaceDrawBet_cli..."
QT_MOC_LITERAL(19, 282, 28), // "on_addressBookButton_clicked"
QT_MOC_LITERAL(20, 311, 22), // "on_pasteButton_clicked"
QT_MOC_LITERAL(21, 334, 17) // "updateDisplayUnit"

    },
    "PlaceBetEvent\0currentEventChanged\0\0"
    "CEvent*\0event\0std::string\0teamToWin\0"
    "oddsToWin\0removeEntry\0PlaceBetEvent*\0"
    "entry\0payAmountChanged\0clear\0deleteClicked\0"
    "on_payTo_textChanged\0address\0"
    "on_pushButtonPlaceHomeBet_clicked\0"
    "on_pushButtonPlaceAwayBet_clicked\0"
    "on_pushButtonPlaceDrawBet_clicked\0"
    "on_addressBookButton_clicked\0"
    "on_pasteButton_clicked\0updateDisplayUnit"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PlaceBetEvent[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    3,   74,    2, 0x06 /* Public */,
       8,    1,   81,    2, 0x06 /* Public */,
      11,    0,   84,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      12,    0,   85,    2, 0x0a /* Public */,
      13,    0,   86,    2, 0x08 /* Private */,
      14,    1,   87,    2, 0x08 /* Private */,
      16,    0,   90,    2, 0x08 /* Private */,
      17,    0,   91,    2, 0x08 /* Private */,
      18,    0,   92,    2, 0x08 /* Private */,
      19,    0,   93,    2, 0x08 /* Private */,
      20,    0,   94,    2, 0x08 /* Private */,
      21,    0,   95,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 5, 0x80000000 | 5,    4,    6,    7,
    QMetaType::Void, 0x80000000 | 9,   10,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   15,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void PlaceBetEvent::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        PlaceBetEvent *_t = static_cast<PlaceBetEvent *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->currentEventChanged((*reinterpret_cast< CEvent*(*)>(_a[1])),(*reinterpret_cast< const std::string(*)>(_a[2])),(*reinterpret_cast< const std::string(*)>(_a[3]))); break;
        case 1: _t->removeEntry((*reinterpret_cast< PlaceBetEvent*(*)>(_a[1]))); break;
        case 2: _t->payAmountChanged(); break;
        case 3: _t->clear(); break;
        case 4: _t->deleteClicked(); break;
        case 5: _t->on_payTo_textChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 6: _t->on_pushButtonPlaceHomeBet_clicked(); break;
        case 7: _t->on_pushButtonPlaceAwayBet_clicked(); break;
        case 8: _t->on_pushButtonPlaceDrawBet_clicked(); break;
        case 9: _t->on_addressBookButton_clicked(); break;
        case 10: _t->on_pasteButton_clicked(); break;
        case 11: _t->updateDisplayUnit(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< PlaceBetEvent* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (PlaceBetEvent::*_t)(CEvent * , const std::string & , const std::string & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PlaceBetEvent::currentEventChanged)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (PlaceBetEvent::*_t)(PlaceBetEvent * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PlaceBetEvent::removeEntry)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (PlaceBetEvent::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PlaceBetEvent::payAmountChanged)) {
                *result = 2;
                return;
            }
        }
    }
}

const QMetaObject PlaceBetEvent::staticMetaObject = {
    { &QStackedWidget::staticMetaObject, qt_meta_stringdata_PlaceBetEvent.data,
      qt_meta_data_PlaceBetEvent,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *PlaceBetEvent::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PlaceBetEvent::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_PlaceBetEvent.stringdata0))
        return static_cast<void*>(this);
    return QStackedWidget::qt_metacast(_clname);
}

int PlaceBetEvent::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QStackedWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    }
    return _id;
}

// SIGNAL 0
void PlaceBetEvent::currentEventChanged(CEvent * _t1, const std::string & _t2, const std::string & _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void PlaceBetEvent::removeEntry(PlaceBetEvent * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void PlaceBetEvent::payAmountChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
