/****************************************************************************
** Meta object code from reading C++ file 'simulation_widget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/moveit/moveit_setup_assistant/src/widgets/simulation_widget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'simulation_widget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_moveit_setup_assistant__SimulationWidget_t {
    QByteArrayData data[5];
    char stringdata0[74];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_moveit_setup_assistant__SimulationWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_moveit_setup_assistant__SimulationWidget_t qt_meta_stringdata_moveit_setup_assistant__SimulationWidget = {
    {
QT_MOC_LITERAL(0, 0, 40), // "moveit_setup_assistant::Simul..."
QT_MOC_LITERAL(1, 41, 8), // "copyURDF"
QT_MOC_LITERAL(2, 50, 0), // ""
QT_MOC_LITERAL(3, 51, 4), // "link"
QT_MOC_LITERAL(4, 56, 17) // "generateURDFClick"

    },
    "moveit_setup_assistant::SimulationWidget\0"
    "copyURDF\0\0link\0generateURDFClick"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_moveit_setup_assistant__SimulationWidget[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   24,    2, 0x08 /* Private */,
       4,    0,   27,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void,

       0        // eod
};

void moveit_setup_assistant::SimulationWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        SimulationWidget *_t = static_cast<SimulationWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->copyURDF((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->generateURDFClick(); break;
        default: ;
        }
    }
}

const QMetaObject moveit_setup_assistant::SimulationWidget::staticMetaObject = {
    { &SetupScreenWidget::staticMetaObject, qt_meta_stringdata_moveit_setup_assistant__SimulationWidget.data,
      qt_meta_data_moveit_setup_assistant__SimulationWidget,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *moveit_setup_assistant::SimulationWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *moveit_setup_assistant::SimulationWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_moveit_setup_assistant__SimulationWidget.stringdata0))
        return static_cast<void*>(const_cast< SimulationWidget*>(this));
    return SetupScreenWidget::qt_metacast(_clname);
}

int moveit_setup_assistant::SimulationWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = SetupScreenWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 2;
    }
    return _id;
}
QT_END_MOC_NAMESPACE