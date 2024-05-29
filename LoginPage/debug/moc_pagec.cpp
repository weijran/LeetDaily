/****************************************************************************
** Meta object code from reading C++ file 'pagec.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../pagec.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'pagec.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.8.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_PageC_t {
    QByteArrayData data[15];
    char stringdata0[240];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PageC_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PageC_t qt_meta_stringdata_PageC = {
    {
QT_MOC_LITERAL(0, 0, 5), // "PageC"
QT_MOC_LITERAL(1, 6, 15), // "on_return_click"
QT_MOC_LITERAL(2, 22, 0), // ""
QT_MOC_LITERAL(3, 23, 19), // "on_write_note_click"
QT_MOC_LITERAL(4, 43, 13), // "on_go_clicked"
QT_MOC_LITERAL(5, 57, 19), // "on_building_clicked"
QT_MOC_LITERAL(6, 77, 16), // "on_combox_select"
QT_MOC_LITERAL(7, 94, 2), // "id"
QT_MOC_LITERAL(8, 97, 22), // "on_add_to_ways_clicked"
QT_MOC_LITERAL(9, 120, 25), // "on_set_startpoint_clicked"
QT_MOC_LITERAL(10, 146, 24), // "on_add_or_finish_clicked"
QT_MOC_LITERAL(11, 171, 19), // "on_go_there_clicked"
QT_MOC_LITERAL(12, 191, 25), // "delete_a_capsule_lineedit"
QT_MOC_LITERAL(13, 217, 19), // "LineEditWithDelete*"
QT_MOC_LITERAL(14, 237, 2) // "le"

    },
    "PageC\0on_return_click\0\0on_write_note_click\0"
    "on_go_clicked\0on_building_clicked\0"
    "on_combox_select\0id\0on_add_to_ways_clicked\0"
    "on_set_startpoint_clicked\0"
    "on_add_or_finish_clicked\0on_go_there_clicked\0"
    "delete_a_capsule_lineedit\0LineEditWithDelete*\0"
    "le"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PageC[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   64,    2, 0x0a /* Public */,
       3,    0,   65,    2, 0x0a /* Public */,
       4,    0,   66,    2, 0x0a /* Public */,
       5,    0,   67,    2, 0x0a /* Public */,
       6,    1,   68,    2, 0x0a /* Public */,
       8,    0,   71,    2, 0x0a /* Public */,
       9,    0,   72,    2, 0x0a /* Public */,
      10,    0,   73,    2, 0x0a /* Public */,
      11,    0,   74,    2, 0x0a /* Public */,
      12,    1,   75,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    7,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 13,   14,

       0        // eod
};

void PageC::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        PageC *_t = static_cast<PageC *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_return_click(); break;
        case 1: _t->on_write_note_click(); break;
        case 2: _t->on_go_clicked(); break;
        case 3: _t->on_building_clicked(); break;
        case 4: _t->on_combox_select((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->on_add_to_ways_clicked(); break;
        case 6: _t->on_set_startpoint_clicked(); break;
        case 7: _t->on_add_or_finish_clicked(); break;
        case 8: _t->on_go_there_clicked(); break;
        case 9: _t->delete_a_capsule_lineedit((*reinterpret_cast< LineEditWithDelete*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 9:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< LineEditWithDelete* >(); break;
            }
            break;
        }
    }
}

const QMetaObject PageC::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_PageC.data,
      qt_meta_data_PageC,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *PageC::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PageC::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_PageC.stringdata0))
        return static_cast<void*>(const_cast< PageC*>(this));
    return QWidget::qt_metacast(_clname);
}

int PageC::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
