/****************************************************************************
** Meta object code from reading C++ file 'placebetdialog.h'
**
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "qt/placebetdialog.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'placebetdialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_PlaceBetDialog_t {
    QByteArrayData data[59];
    char stringdata0[1005];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PlaceBetDialog_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PlaceBetDialog_t qt_meta_stringdata_PlaceBetDialog = {
    {
QT_MOC_LITERAL(0, 0, 14), // "PlaceBetDialog"
QT_MOC_LITERAL(1, 15, 7), // "message"
QT_MOC_LITERAL(2, 23, 0), // ""
QT_MOC_LITERAL(3, 24, 5), // "title"
QT_MOC_LITERAL(4, 30, 5), // "style"
QT_MOC_LITERAL(5, 36, 5), // "clear"
QT_MOC_LITERAL(6, 42, 6), // "reject"
QT_MOC_LITERAL(7, 49, 6), // "accept"
QT_MOC_LITERAL(8, 56, 8), // "addEvent"
QT_MOC_LITERAL(9, 65, 14), // "PlaceBetEvent*"
QT_MOC_LITERAL(10, 80, 7), // "CEvent*"
QT_MOC_LITERAL(11, 88, 5), // "event"
QT_MOC_LITERAL(12, 94, 11), // "std::string"
QT_MOC_LITERAL(13, 106, 12), // "eventDetails"
QT_MOC_LITERAL(14, 119, 8), // "homeOdds"
QT_MOC_LITERAL(15, 128, 8), // "awayOdds"
QT_MOC_LITERAL(16, 137, 8), // "drawOdds"
QT_MOC_LITERAL(17, 146, 19), // "updateTabsAndLabels"
QT_MOC_LITERAL(18, 166, 10), // "setBalance"
QT_MOC_LITERAL(19, 177, 7), // "CAmount"
QT_MOC_LITERAL(20, 185, 7), // "balance"
QT_MOC_LITERAL(21, 193, 18), // "unconfirmedBalance"
QT_MOC_LITERAL(22, 212, 15), // "immatureBalance"
QT_MOC_LITERAL(23, 228, 15), // "zerocoinBalance"
QT_MOC_LITERAL(24, 244, 26), // "unconfirmedZerocoinBalance"
QT_MOC_LITERAL(25, 271, 23), // "immatureZerocoinBalance"
QT_MOC_LITERAL(26, 295, 16), // "watchOnlyBalance"
QT_MOC_LITERAL(27, 312, 18), // "watchUnconfBalance"
QT_MOC_LITERAL(28, 331, 20), // "watchImmatureBalance"
QT_MOC_LITERAL(29, 352, 25), // "on_placeBetButton_clicked"
QT_MOC_LITERAL(30, 378, 26), // "on_buttonChooseFee_clicked"
QT_MOC_LITERAL(31, 405, 28), // "on_buttonMinimizeFee_clicked"
QT_MOC_LITERAL(32, 434, 11), // "removeEvent"
QT_MOC_LITERAL(33, 446, 17), // "updateDisplayUnit"
QT_MOC_LITERAL(34, 464, 13), // "updateSwiftTX"
QT_MOC_LITERAL(35, 478, 25), // "coinControlFeatureChanged"
QT_MOC_LITERAL(36, 504, 24), // "coinControlButtonClicked"
QT_MOC_LITERAL(37, 529, 24), // "coinControlChangeChecked"
QT_MOC_LITERAL(38, 554, 23), // "coinControlChangeEdited"
QT_MOC_LITERAL(39, 578, 23), // "coinControlUpdateLabels"
QT_MOC_LITERAL(40, 602, 28), // "coinControlClipboardQuantity"
QT_MOC_LITERAL(41, 631, 26), // "coinControlClipboardAmount"
QT_MOC_LITERAL(42, 658, 23), // "coinControlClipboardFee"
QT_MOC_LITERAL(43, 682, 28), // "coinControlClipboardAfterFee"
QT_MOC_LITERAL(44, 711, 25), // "coinControlClipboardBytes"
QT_MOC_LITERAL(45, 737, 28), // "coinControlClipboardPriority"
QT_MOC_LITERAL(46, 766, 29), // "coinControlClipboardLowOutput"
QT_MOC_LITERAL(47, 796, 26), // "coinControlClipboardChange"
QT_MOC_LITERAL(48, 823, 17), // "splitBlockChecked"
QT_MOC_LITERAL(49, 841, 25), // "splitBlockLineEditChanged"
QT_MOC_LITERAL(50, 867, 4), // "text"
QT_MOC_LITERAL(51, 872, 13), // "setMinimumFee"
QT_MOC_LITERAL(52, 886, 24), // "updateFeeSectionControls"
QT_MOC_LITERAL(53, 911, 17), // "updateMinFeeLabel"
QT_MOC_LITERAL(54, 929, 19), // "updateSmartFeeLabel"
QT_MOC_LITERAL(55, 949, 24), // "updateGlobalFeeVariables"
QT_MOC_LITERAL(56, 974, 10), // "prepareBet"
QT_MOC_LITERAL(57, 985, 9), // "teamToWin"
QT_MOC_LITERAL(58, 995, 9) // "oddsToWin"

    },
    "PlaceBetDialog\0message\0\0title\0style\0"
    "clear\0reject\0accept\0addEvent\0"
    "PlaceBetEvent*\0CEvent*\0event\0std::string\0"
    "eventDetails\0homeOdds\0awayOdds\0drawOdds\0"
    "updateTabsAndLabels\0setBalance\0CAmount\0"
    "balance\0unconfirmedBalance\0immatureBalance\0"
    "zerocoinBalance\0unconfirmedZerocoinBalance\0"
    "immatureZerocoinBalance\0watchOnlyBalance\0"
    "watchUnconfBalance\0watchImmatureBalance\0"
    "on_placeBetButton_clicked\0"
    "on_buttonChooseFee_clicked\0"
    "on_buttonMinimizeFee_clicked\0removeEvent\0"
    "updateDisplayUnit\0updateSwiftTX\0"
    "coinControlFeatureChanged\0"
    "coinControlButtonClicked\0"
    "coinControlChangeChecked\0"
    "coinControlChangeEdited\0coinControlUpdateLabels\0"
    "coinControlClipboardQuantity\0"
    "coinControlClipboardAmount\0"
    "coinControlClipboardFee\0"
    "coinControlClipboardAfterFee\0"
    "coinControlClipboardBytes\0"
    "coinControlClipboardPriority\0"
    "coinControlClipboardLowOutput\0"
    "coinControlClipboardChange\0splitBlockChecked\0"
    "splitBlockLineEditChanged\0text\0"
    "setMinimumFee\0updateFeeSectionControls\0"
    "updateMinFeeLabel\0updateSmartFeeLabel\0"
    "updateGlobalFeeVariables\0prepareBet\0"
    "teamToWin\0oddsToWin"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PlaceBetDialog[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      38,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    3,  204,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    0,  211,    2, 0x0a /* Public */,
       6,    0,  212,    2, 0x0a /* Public */,
       7,    0,  213,    2, 0x0a /* Public */,
       8,    5,  214,    2, 0x0a /* Public */,
       8,    4,  225,    2, 0x2a /* Public | MethodCloned */,
       8,    3,  234,    2, 0x2a /* Public | MethodCloned */,
       8,    2,  241,    2, 0x2a /* Public | MethodCloned */,
       8,    1,  246,    2, 0x2a /* Public | MethodCloned */,
      17,    0,  249,    2, 0x0a /* Public */,
      18,    9,  250,    2, 0x0a /* Public */,
      29,    0,  269,    2, 0x08 /* Private */,
      30,    0,  270,    2, 0x08 /* Private */,
      31,    0,  271,    2, 0x08 /* Private */,
      32,    1,  272,    2, 0x08 /* Private */,
      33,    0,  275,    2, 0x08 /* Private */,
      34,    0,  276,    2, 0x08 /* Private */,
      35,    1,  277,    2, 0x08 /* Private */,
      36,    0,  280,    2, 0x08 /* Private */,
      37,    1,  281,    2, 0x08 /* Private */,
      38,    1,  284,    2, 0x08 /* Private */,
      39,    0,  287,    2, 0x08 /* Private */,
      40,    0,  288,    2, 0x08 /* Private */,
      41,    0,  289,    2, 0x08 /* Private */,
      42,    0,  290,    2, 0x08 /* Private */,
      43,    0,  291,    2, 0x08 /* Private */,
      44,    0,  292,    2, 0x08 /* Private */,
      45,    0,  293,    2, 0x08 /* Private */,
      46,    0,  294,    2, 0x08 /* Private */,
      47,    0,  295,    2, 0x08 /* Private */,
      48,    1,  296,    2, 0x08 /* Private */,
      49,    1,  299,    2, 0x08 /* Private */,
      51,    0,  302,    2, 0x08 /* Private */,
      52,    0,  303,    2, 0x08 /* Private */,
      53,    0,  304,    2, 0x08 /* Private */,
      54,    0,  305,    2, 0x08 /* Private */,
      55,    0,  306,    2, 0x08 /* Private */,
      56,    3,  307,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::UInt,    3,    1,    4,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    0x80000000 | 9, 0x80000000 | 10, 0x80000000 | 12, 0x80000000 | 12, 0x80000000 | 12, 0x80000000 | 12,   11,   13,   14,   15,   16,
    0x80000000 | 9, 0x80000000 | 10, 0x80000000 | 12, 0x80000000 | 12, 0x80000000 | 12,   11,   13,   14,   15,
    0x80000000 | 9, 0x80000000 | 10, 0x80000000 | 12, 0x80000000 | 12,   11,   13,   14,
    0x80000000 | 9, 0x80000000 | 10, 0x80000000 | 12,   11,   13,
    0x80000000 | 9, 0x80000000 | 10,   11,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 19, 0x80000000 | 19, 0x80000000 | 19, 0x80000000 | 19, 0x80000000 | 19, 0x80000000 | 19, 0x80000000 | 19, 0x80000000 | 19, 0x80000000 | 19,   20,   21,   22,   23,   24,   25,   26,   27,   28,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 9,   11,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::QString,   50,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 10, 0x80000000 | 12, 0x80000000 | 12,   11,   57,   58,

       0        // eod
};

void PlaceBetDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        PlaceBetDialog *_t = static_cast<PlaceBetDialog *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->message((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< uint(*)>(_a[3]))); break;
        case 1: _t->clear(); break;
        case 2: _t->reject(); break;
        case 3: _t->accept(); break;
        case 4: { PlaceBetEvent* _r = _t->addEvent((*reinterpret_cast< CEvent*(*)>(_a[1])),(*reinterpret_cast< const std::string(*)>(_a[2])),(*reinterpret_cast< const std::string(*)>(_a[3])),(*reinterpret_cast< const std::string(*)>(_a[4])),(*reinterpret_cast< const std::string(*)>(_a[5])));
            if (_a[0]) *reinterpret_cast< PlaceBetEvent**>(_a[0]) = std::move(_r); }  break;
        case 5: { PlaceBetEvent* _r = _t->addEvent((*reinterpret_cast< CEvent*(*)>(_a[1])),(*reinterpret_cast< const std::string(*)>(_a[2])),(*reinterpret_cast< const std::string(*)>(_a[3])),(*reinterpret_cast< const std::string(*)>(_a[4])));
            if (_a[0]) *reinterpret_cast< PlaceBetEvent**>(_a[0]) = std::move(_r); }  break;
        case 6: { PlaceBetEvent* _r = _t->addEvent((*reinterpret_cast< CEvent*(*)>(_a[1])),(*reinterpret_cast< const std::string(*)>(_a[2])),(*reinterpret_cast< const std::string(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< PlaceBetEvent**>(_a[0]) = std::move(_r); }  break;
        case 7: { PlaceBetEvent* _r = _t->addEvent((*reinterpret_cast< CEvent*(*)>(_a[1])),(*reinterpret_cast< const std::string(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< PlaceBetEvent**>(_a[0]) = std::move(_r); }  break;
        case 8: { PlaceBetEvent* _r = _t->addEvent((*reinterpret_cast< CEvent*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< PlaceBetEvent**>(_a[0]) = std::move(_r); }  break;
        case 9: _t->updateTabsAndLabels(); break;
        case 10: _t->setBalance((*reinterpret_cast< const CAmount(*)>(_a[1])),(*reinterpret_cast< const CAmount(*)>(_a[2])),(*reinterpret_cast< const CAmount(*)>(_a[3])),(*reinterpret_cast< const CAmount(*)>(_a[4])),(*reinterpret_cast< const CAmount(*)>(_a[5])),(*reinterpret_cast< const CAmount(*)>(_a[6])),(*reinterpret_cast< const CAmount(*)>(_a[7])),(*reinterpret_cast< const CAmount(*)>(_a[8])),(*reinterpret_cast< const CAmount(*)>(_a[9]))); break;
        case 11: _t->on_placeBetButton_clicked(); break;
        case 12: _t->on_buttonChooseFee_clicked(); break;
        case 13: _t->on_buttonMinimizeFee_clicked(); break;
        case 14: _t->removeEvent((*reinterpret_cast< PlaceBetEvent*(*)>(_a[1]))); break;
        case 15: _t->updateDisplayUnit(); break;
        case 16: _t->updateSwiftTX(); break;
        case 17: _t->coinControlFeatureChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 18: _t->coinControlButtonClicked(); break;
        case 19: _t->coinControlChangeChecked((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 20: _t->coinControlChangeEdited((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 21: _t->coinControlUpdateLabels(); break;
        case 22: _t->coinControlClipboardQuantity(); break;
        case 23: _t->coinControlClipboardAmount(); break;
        case 24: _t->coinControlClipboardFee(); break;
        case 25: _t->coinControlClipboardAfterFee(); break;
        case 26: _t->coinControlClipboardBytes(); break;
        case 27: _t->coinControlClipboardPriority(); break;
        case 28: _t->coinControlClipboardLowOutput(); break;
        case 29: _t->coinControlClipboardChange(); break;
        case 30: _t->splitBlockChecked((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 31: _t->splitBlockLineEditChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 32: _t->setMinimumFee(); break;
        case 33: _t->updateFeeSectionControls(); break;
        case 34: _t->updateMinFeeLabel(); break;
        case 35: _t->updateSmartFeeLabel(); break;
        case 36: _t->updateGlobalFeeVariables(); break;
        case 37: _t->prepareBet((*reinterpret_cast< CEvent*(*)>(_a[1])),(*reinterpret_cast< const std::string(*)>(_a[2])),(*reinterpret_cast< const std::string(*)>(_a[3]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 14:
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
            typedef void (PlaceBetDialog::*_t)(const QString & , const QString & , unsigned int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PlaceBetDialog::message)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject PlaceBetDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_PlaceBetDialog.data,
      qt_meta_data_PlaceBetDialog,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *PlaceBetDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PlaceBetDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_PlaceBetDialog.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int PlaceBetDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 38)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 38;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 38)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 38;
    }
    return _id;
}

// SIGNAL 0
void PlaceBetDialog::message(const QString & _t1, const QString & _t2, unsigned int _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
