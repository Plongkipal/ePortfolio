/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.6.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../qt-employee-mgmt-sys-main/mainwindow.h"
#include <QtGui/qtextcursor.h>
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.6.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

#ifndef Q_CONSTINIT
#define Q_CONSTINIT
#endif

QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
QT_WARNING_DISABLE_GCC("-Wuseless-cast")
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSMainWindowENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSMainWindowENDCLASS = QtMocHelpers::stringData(
    "MainWindow",
    "on_closeButton_clicked",
    "",
    "loadTotalData",
    "on_minimizeButton_clicked",
    "on_pushButton_clicked",
    "on_attendanceButton_clicked",
    "on_searchButton_clicked",
    "on_paymentButton_clicked",
    "on_attendance1_2_clicked",
    "on_addEmpButton_clicked",
    "on_updateEmpButton_clicked",
    "on_pushButton_5_clicked",
    "on_pushButton_2_clicked",
    "on_empDept_currentIndexChanged",
    "arg1",
    "on_deleteEmpButton_clicked",
    "on_tableView_clicked",
    "QModelIndex",
    "index",
    "on_tableView_doubleClicked",
    "on_pushButton_7_clicked",
    "on_updateTableView_doubleClicked",
    "on_pushButton_8_clicked",
    "on_deleteTableView_doubleClicked",
    "on_searchTextBox_returnPressed",
    "on_pushButton_6_clicked",
    "selectedPushButton",
    "QPushButton*",
    "button",
    "deselectedPushButton",
    "on_techButton_clicked",
    "on_tableView_activated",
    "on_aboutButton_clicked",
    "on_pushButton_3_clicked"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSMainWindowENDCLASS_t {
    uint offsetsAndSizes[70];
    char stringdata0[11];
    char stringdata1[23];
    char stringdata2[1];
    char stringdata3[14];
    char stringdata4[26];
    char stringdata5[22];
    char stringdata6[28];
    char stringdata7[24];
    char stringdata8[25];
    char stringdata9[25];
    char stringdata10[24];
    char stringdata11[27];
    char stringdata12[24];
    char stringdata13[24];
    char stringdata14[31];
    char stringdata15[5];
    char stringdata16[27];
    char stringdata17[21];
    char stringdata18[12];
    char stringdata19[6];
    char stringdata20[27];
    char stringdata21[24];
    char stringdata22[33];
    char stringdata23[24];
    char stringdata24[33];
    char stringdata25[31];
    char stringdata26[24];
    char stringdata27[19];
    char stringdata28[13];
    char stringdata29[7];
    char stringdata30[21];
    char stringdata31[22];
    char stringdata32[23];
    char stringdata33[23];
    char stringdata34[24];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSMainWindowENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSMainWindowENDCLASS_t qt_meta_stringdata_CLASSMainWindowENDCLASS = {
    {
        QT_MOC_LITERAL(0, 10),  // "MainWindow"
        QT_MOC_LITERAL(11, 22),  // "on_closeButton_clicked"
        QT_MOC_LITERAL(34, 0),  // ""
        QT_MOC_LITERAL(35, 13),  // "loadTotalData"
        QT_MOC_LITERAL(49, 25),  // "on_minimizeButton_clicked"
        QT_MOC_LITERAL(75, 21),  // "on_pushButton_clicked"
        QT_MOC_LITERAL(97, 27),  // "on_attendanceButton_clicked"
        QT_MOC_LITERAL(125, 23),  // "on_searchButton_clicked"
        QT_MOC_LITERAL(149, 24),  // "on_paymentButton_clicked"
        QT_MOC_LITERAL(174, 24),  // "on_attendance1_2_clicked"
        QT_MOC_LITERAL(199, 23),  // "on_addEmpButton_clicked"
        QT_MOC_LITERAL(223, 26),  // "on_updateEmpButton_clicked"
        QT_MOC_LITERAL(250, 23),  // "on_pushButton_5_clicked"
        QT_MOC_LITERAL(274, 23),  // "on_pushButton_2_clicked"
        QT_MOC_LITERAL(298, 30),  // "on_empDept_currentIndexChanged"
        QT_MOC_LITERAL(329, 4),  // "arg1"
        QT_MOC_LITERAL(334, 26),  // "on_deleteEmpButton_clicked"
        QT_MOC_LITERAL(361, 20),  // "on_tableView_clicked"
        QT_MOC_LITERAL(382, 11),  // "QModelIndex"
        QT_MOC_LITERAL(394, 5),  // "index"
        QT_MOC_LITERAL(400, 26),  // "on_tableView_doubleClicked"
        QT_MOC_LITERAL(427, 23),  // "on_pushButton_7_clicked"
        QT_MOC_LITERAL(451, 32),  // "on_updateTableView_doubleClicked"
        QT_MOC_LITERAL(484, 23),  // "on_pushButton_8_clicked"
        QT_MOC_LITERAL(508, 32),  // "on_deleteTableView_doubleClicked"
        QT_MOC_LITERAL(541, 30),  // "on_searchTextBox_returnPressed"
        QT_MOC_LITERAL(572, 23),  // "on_pushButton_6_clicked"
        QT_MOC_LITERAL(596, 18),  // "selectedPushButton"
        QT_MOC_LITERAL(615, 12),  // "QPushButton*"
        QT_MOC_LITERAL(628, 6),  // "button"
        QT_MOC_LITERAL(635, 20),  // "deselectedPushButton"
        QT_MOC_LITERAL(656, 21),  // "on_techButton_clicked"
        QT_MOC_LITERAL(678, 22),  // "on_tableView_activated"
        QT_MOC_LITERAL(701, 22),  // "on_aboutButton_clicked"
        QT_MOC_LITERAL(724, 23)   // "on_pushButton_3_clicked"
    },
    "MainWindow",
    "on_closeButton_clicked",
    "",
    "loadTotalData",
    "on_minimizeButton_clicked",
    "on_pushButton_clicked",
    "on_attendanceButton_clicked",
    "on_searchButton_clicked",
    "on_paymentButton_clicked",
    "on_attendance1_2_clicked",
    "on_addEmpButton_clicked",
    "on_updateEmpButton_clicked",
    "on_pushButton_5_clicked",
    "on_pushButton_2_clicked",
    "on_empDept_currentIndexChanged",
    "arg1",
    "on_deleteEmpButton_clicked",
    "on_tableView_clicked",
    "QModelIndex",
    "index",
    "on_tableView_doubleClicked",
    "on_pushButton_7_clicked",
    "on_updateTableView_doubleClicked",
    "on_pushButton_8_clicked",
    "on_deleteTableView_doubleClicked",
    "on_searchTextBox_returnPressed",
    "on_pushButton_6_clicked",
    "selectedPushButton",
    "QPushButton*",
    "button",
    "deselectedPushButton",
    "on_techButton_clicked",
    "on_tableView_activated",
    "on_aboutButton_clicked",
    "on_pushButton_3_clicked"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSMainWindowENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
      28,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,  182,    2, 0x08,    1 /* Private */,
       3,    0,  183,    2, 0x08,    2 /* Private */,
       4,    0,  184,    2, 0x08,    3 /* Private */,
       5,    0,  185,    2, 0x08,    4 /* Private */,
       6,    0,  186,    2, 0x08,    5 /* Private */,
       7,    0,  187,    2, 0x08,    6 /* Private */,
       8,    0,  188,    2, 0x08,    7 /* Private */,
       9,    0,  189,    2, 0x08,    8 /* Private */,
      10,    0,  190,    2, 0x08,    9 /* Private */,
      11,    0,  191,    2, 0x08,   10 /* Private */,
      12,    0,  192,    2, 0x08,   11 /* Private */,
      13,    0,  193,    2, 0x08,   12 /* Private */,
      14,    1,  194,    2, 0x08,   13 /* Private */,
      16,    0,  197,    2, 0x08,   15 /* Private */,
      17,    1,  198,    2, 0x08,   16 /* Private */,
      20,    1,  201,    2, 0x08,   18 /* Private */,
      21,    0,  204,    2, 0x08,   20 /* Private */,
      22,    1,  205,    2, 0x08,   21 /* Private */,
      23,    0,  208,    2, 0x08,   23 /* Private */,
      24,    1,  209,    2, 0x08,   24 /* Private */,
      25,    0,  212,    2, 0x08,   26 /* Private */,
      26,    0,  213,    2, 0x08,   27 /* Private */,
      27,    1,  214,    2, 0x08,   28 /* Private */,
      30,    1,  217,    2, 0x08,   30 /* Private */,
      31,    0,  220,    2, 0x08,   32 /* Private */,
      32,    1,  221,    2, 0x08,   33 /* Private */,
      33,    0,  224,    2, 0x08,   35 /* Private */,
      34,    0,  225,    2, 0x08,   36 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   15,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 18,   19,
    QMetaType::Void, 0x80000000 | 18,   19,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 18,   19,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 18,   19,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 28,   29,
    QMetaType::Void, 0x80000000 | 28,   29,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 18,   19,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject MainWindow::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_CLASSMainWindowENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSMainWindowENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSMainWindowENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<MainWindow, std::true_type>,
        // method 'on_closeButton_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'loadTotalData'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_minimizeButton_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_pushButton_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_attendanceButton_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_searchButton_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_paymentButton_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_attendance1_2_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_addEmpButton_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_updateEmpButton_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_pushButton_5_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_pushButton_2_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_empDept_currentIndexChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'on_deleteEmpButton_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_tableView_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QModelIndex &, std::false_type>,
        // method 'on_tableView_doubleClicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QModelIndex &, std::false_type>,
        // method 'on_pushButton_7_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_updateTableView_doubleClicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QModelIndex &, std::false_type>,
        // method 'on_pushButton_8_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_deleteTableView_doubleClicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QModelIndex &, std::false_type>,
        // method 'on_searchTextBox_returnPressed'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_pushButton_6_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'selectedPushButton'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QPushButton *, std::false_type>,
        // method 'deselectedPushButton'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QPushButton *, std::false_type>,
        // method 'on_techButton_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_tableView_activated'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QModelIndex &, std::false_type>,
        // method 'on_aboutButton_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_pushButton_3_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MainWindow *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->on_closeButton_clicked(); break;
        case 1: _t->loadTotalData(); break;
        case 2: _t->on_minimizeButton_clicked(); break;
        case 3: _t->on_pushButton_clicked(); break;
        case 4: _t->on_attendanceButton_clicked(); break;
        case 5: _t->on_searchButton_clicked(); break;
        case 6: _t->on_paymentButton_clicked(); break;
        case 7: _t->on_attendance1_2_clicked(); break;
        case 8: _t->on_addEmpButton_clicked(); break;
        case 9: _t->on_updateEmpButton_clicked(); break;
        case 10: _t->on_pushButton_5_clicked(); break;
        case 11: _t->on_pushButton_2_clicked(); break;
        case 12: _t->on_empDept_currentIndexChanged((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 13: _t->on_deleteEmpButton_clicked(); break;
        case 14: _t->on_tableView_clicked((*reinterpret_cast< std::add_pointer_t<QModelIndex>>(_a[1]))); break;
        case 15: _t->on_tableView_doubleClicked((*reinterpret_cast< std::add_pointer_t<QModelIndex>>(_a[1]))); break;
        case 16: _t->on_pushButton_7_clicked(); break;
        case 17: _t->on_updateTableView_doubleClicked((*reinterpret_cast< std::add_pointer_t<QModelIndex>>(_a[1]))); break;
        case 18: _t->on_pushButton_8_clicked(); break;
        case 19: _t->on_deleteTableView_doubleClicked((*reinterpret_cast< std::add_pointer_t<QModelIndex>>(_a[1]))); break;
        case 20: _t->on_searchTextBox_returnPressed(); break;
        case 21: _t->on_pushButton_6_clicked(); break;
        case 22: _t->selectedPushButton((*reinterpret_cast< std::add_pointer_t<QPushButton*>>(_a[1]))); break;
        case 23: _t->deselectedPushButton((*reinterpret_cast< std::add_pointer_t<QPushButton*>>(_a[1]))); break;
        case 24: _t->on_techButton_clicked(); break;
        case 25: _t->on_tableView_activated((*reinterpret_cast< std::add_pointer_t<QModelIndex>>(_a[1]))); break;
        case 26: _t->on_aboutButton_clicked(); break;
        case 27: _t->on_pushButton_3_clicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
        case 22:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QPushButton* >(); break;
            }
            break;
        case 23:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QPushButton* >(); break;
            }
            break;
        }
    }
}

const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSMainWindowENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 28)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 28;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 28)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 28;
    }
    return _id;
}
QT_WARNING_POP
