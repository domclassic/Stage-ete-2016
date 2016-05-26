/****************************************************************************
** Meta object code from reading C++ file 'calculatricedom.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.6.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../calculatricedom.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'calculatricedom.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.6.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_CalculatriceDom_t {
    QByteArrayData data[18];
    char stringdata0[97];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_CalculatriceDom_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_CalculatriceDom_t qt_meta_stringdata_CalculatriceDom = {
    {
QT_MOC_LITERAL(0, 0, 15), // "CalculatriceDom"
QT_MOC_LITERAL(1, 16, 3), // "add"
QT_MOC_LITERAL(2, 20, 0), // ""
QT_MOC_LITERAL(3, 21, 4), // "sous"
QT_MOC_LITERAL(4, 26, 4), // "mult"
QT_MOC_LITERAL(5, 31, 4), // "divi"
QT_MOC_LITERAL(6, 36, 4), // "zero"
QT_MOC_LITERAL(7, 41, 2), // "un"
QT_MOC_LITERAL(8, 44, 4), // "deux"
QT_MOC_LITERAL(9, 49, 5), // "trois"
QT_MOC_LITERAL(10, 55, 6), // "quatre"
QT_MOC_LITERAL(11, 62, 4), // "cinq"
QT_MOC_LITERAL(12, 67, 3), // "six"
QT_MOC_LITERAL(13, 71, 4), // "sept"
QT_MOC_LITERAL(14, 76, 4), // "huit"
QT_MOC_LITERAL(15, 81, 4), // "neuf"
QT_MOC_LITERAL(16, 86, 4), // "egal"
QT_MOC_LITERAL(17, 91, 5) // "clear"

    },
    "CalculatriceDom\0add\0\0sous\0mult\0divi\0"
    "zero\0un\0deux\0trois\0quatre\0cinq\0six\0"
    "sept\0huit\0neuf\0egal\0clear"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_CalculatriceDom[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      16,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   94,    2, 0x08 /* Private */,
       3,    0,   95,    2, 0x08 /* Private */,
       4,    0,   96,    2, 0x08 /* Private */,
       5,    0,   97,    2, 0x08 /* Private */,
       6,    0,   98,    2, 0x08 /* Private */,
       7,    0,   99,    2, 0x08 /* Private */,
       8,    0,  100,    2, 0x08 /* Private */,
       9,    0,  101,    2, 0x08 /* Private */,
      10,    0,  102,    2, 0x08 /* Private */,
      11,    0,  103,    2, 0x08 /* Private */,
      12,    0,  104,    2, 0x08 /* Private */,
      13,    0,  105,    2, 0x08 /* Private */,
      14,    0,  106,    2, 0x08 /* Private */,
      15,    0,  107,    2, 0x08 /* Private */,
      16,    0,  108,    2, 0x08 /* Private */,
      17,    0,  109,    2, 0x08 /* Private */,

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
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void CalculatriceDom::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        CalculatriceDom *_t = static_cast<CalculatriceDom *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->add(); break;
        case 1: _t->sous(); break;
        case 2: _t->mult(); break;
        case 3: _t->divi(); break;
        case 4: _t->zero(); break;
        case 5: _t->un(); break;
        case 6: _t->deux(); break;
        case 7: _t->trois(); break;
        case 8: _t->quatre(); break;
        case 9: _t->cinq(); break;
        case 10: _t->six(); break;
        case 11: _t->sept(); break;
        case 12: _t->huit(); break;
        case 13: _t->neuf(); break;
        case 14: _t->egal(); break;
        case 15: _t->clear(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject CalculatriceDom::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_CalculatriceDom.data,
      qt_meta_data_CalculatriceDom,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *CalculatriceDom::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *CalculatriceDom::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_CalculatriceDom.stringdata0))
        return static_cast<void*>(const_cast< CalculatriceDom*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int CalculatriceDom::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 16)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 16;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 16)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 16;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
