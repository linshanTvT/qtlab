/****************************************************************************
** Meta object code from reading C++ file 'mainview.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.7.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../mainview.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainview.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.7.2. It"
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
struct qt_meta_stringdata_CLASSmainviewENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSmainviewENDCLASS = QtMocHelpers::stringData(
    "mainview",
    "backSuccess",
    "",
    "goDoctorEditViewSuccess",
    "idx",
    "goPatientEditViewSuccess",
    "goDrugEditViewSuccess",
    "goTreatRecordEditViewSuccess",
    "on_ActionDoctorcomboBox_activated",
    "index",
    "on_ActionPatientcomboBox_activated",
    "on_ActionDrugcomboBox_activated",
    "on_ActionTreatRecordcomboBox_activated",
    "on_backButton_clicked",
    "on_SearchDoctorButton_clicked",
    "on_tabWidget_currentChanged",
    "on_SortDoctorcomboBox_activated",
    "on_SortPatientcomboBox_activated",
    "on_SortDrugcomboBox_activated",
    "on_SortTreatRecordcomboBox_activated",
    "on_FilterTreatRecordcomboBox_activated",
    "on_SearchPatientButton_clicked",
    "on_SearchDrugButton_clicked",
    "on_SearchTreatRecordButton_clicked",
    "goDoctorEditView",
    "rowNo",
    "goPatientEditView",
    "goDrugEditView",
    "goTreatRecordEditView",
    "reshow"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSmainviewENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
      25,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,  164,    2, 0x06,    1 /* Public */,
       3,    1,  165,    2, 0x06,    2 /* Public */,
       5,    1,  168,    2, 0x06,    4 /* Public */,
       6,    1,  171,    2, 0x06,    6 /* Public */,
       7,    1,  174,    2, 0x06,    8 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       8,    1,  177,    2, 0x08,   10 /* Private */,
      10,    1,  180,    2, 0x08,   12 /* Private */,
      11,    1,  183,    2, 0x08,   14 /* Private */,
      12,    1,  186,    2, 0x08,   16 /* Private */,
      13,    0,  189,    2, 0x08,   18 /* Private */,
      14,    0,  190,    2, 0x08,   19 /* Private */,
      15,    1,  191,    2, 0x08,   20 /* Private */,
      16,    1,  194,    2, 0x08,   22 /* Private */,
      17,    1,  197,    2, 0x08,   24 /* Private */,
      18,    1,  200,    2, 0x08,   26 /* Private */,
      19,    1,  203,    2, 0x08,   28 /* Private */,
      20,    1,  206,    2, 0x08,   30 /* Private */,
      21,    0,  209,    2, 0x08,   32 /* Private */,
      22,    0,  210,    2, 0x08,   33 /* Private */,
      23,    0,  211,    2, 0x08,   34 /* Private */,
      24,    1,  212,    2, 0x0a,   35 /* Public */,
      26,    1,  215,    2, 0x0a,   37 /* Public */,
      27,    1,  218,    2, 0x0a,   39 /* Public */,
      28,    1,  221,    2, 0x0a,   41 /* Public */,
      29,    0,  224,    2, 0x0a,   43 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    4,
    QMetaType::Void, QMetaType::Int,    4,
    QMetaType::Void, QMetaType::Int,    4,
    QMetaType::Void, QMetaType::Int,    4,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    9,
    QMetaType::Void, QMetaType::Int,    9,
    QMetaType::Void, QMetaType::Int,    9,
    QMetaType::Void, QMetaType::Int,    9,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    9,
    QMetaType::Void, QMetaType::Int,    9,
    QMetaType::Void, QMetaType::Int,    9,
    QMetaType::Void, QMetaType::Int,    9,
    QMetaType::Void, QMetaType::Int,    9,
    QMetaType::Void, QMetaType::Int,    9,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   25,
    QMetaType::Void, QMetaType::Int,   25,
    QMetaType::Void, QMetaType::Int,   25,
    QMetaType::Void, QMetaType::Int,   25,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject mainview::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_CLASSmainviewENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSmainviewENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSmainviewENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<mainview, std::true_type>,
        // method 'backSuccess'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'goDoctorEditViewSuccess'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'goPatientEditViewSuccess'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'goDrugEditViewSuccess'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'goTreatRecordEditViewSuccess'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'on_ActionDoctorcomboBox_activated'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'on_ActionPatientcomboBox_activated'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'on_ActionDrugcomboBox_activated'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'on_ActionTreatRecordcomboBox_activated'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'on_backButton_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_SearchDoctorButton_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_tabWidget_currentChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'on_SortDoctorcomboBox_activated'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'on_SortPatientcomboBox_activated'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'on_SortDrugcomboBox_activated'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'on_SortTreatRecordcomboBox_activated'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'on_FilterTreatRecordcomboBox_activated'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'on_SearchPatientButton_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_SearchDrugButton_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_SearchTreatRecordButton_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'goDoctorEditView'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'goPatientEditView'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'goDrugEditView'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'goTreatRecordEditView'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'reshow'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void mainview::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<mainview *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->backSuccess(); break;
        case 1: _t->goDoctorEditViewSuccess((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 2: _t->goPatientEditViewSuccess((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 3: _t->goDrugEditViewSuccess((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 4: _t->goTreatRecordEditViewSuccess((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 5: _t->on_ActionDoctorcomboBox_activated((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 6: _t->on_ActionPatientcomboBox_activated((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 7: _t->on_ActionDrugcomboBox_activated((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 8: _t->on_ActionTreatRecordcomboBox_activated((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 9: _t->on_backButton_clicked(); break;
        case 10: _t->on_SearchDoctorButton_clicked(); break;
        case 11: _t->on_tabWidget_currentChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 12: _t->on_SortDoctorcomboBox_activated((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 13: _t->on_SortPatientcomboBox_activated((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 14: _t->on_SortDrugcomboBox_activated((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 15: _t->on_SortTreatRecordcomboBox_activated((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 16: _t->on_FilterTreatRecordcomboBox_activated((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 17: _t->on_SearchPatientButton_clicked(); break;
        case 18: _t->on_SearchDrugButton_clicked(); break;
        case 19: _t->on_SearchTreatRecordButton_clicked(); break;
        case 20: _t->goDoctorEditView((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 21: _t->goPatientEditView((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 22: _t->goDrugEditView((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 23: _t->goTreatRecordEditView((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 24: _t->reshow(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (mainview::*)();
            if (_t _q_method = &mainview::backSuccess; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (mainview::*)(int );
            if (_t _q_method = &mainview::goDoctorEditViewSuccess; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (mainview::*)(int );
            if (_t _q_method = &mainview::goPatientEditViewSuccess; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (mainview::*)(int );
            if (_t _q_method = &mainview::goDrugEditViewSuccess; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (mainview::*)(int );
            if (_t _q_method = &mainview::goTreatRecordEditViewSuccess; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 4;
                return;
            }
        }
    }
}

const QMetaObject *mainview::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *mainview::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSmainviewENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int mainview::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 25)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 25;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 25)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 25;
    }
    return _id;
}

// SIGNAL 0
void mainview::backSuccess()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void mainview::goDoctorEditViewSuccess(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void mainview::goPatientEditViewSuccess(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void mainview::goDrugEditViewSuccess(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void mainview::goTreatRecordEditViewSuccess(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}
QT_WARNING_POP
