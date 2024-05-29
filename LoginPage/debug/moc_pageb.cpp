/****************************************************************************
** Meta object code from reading C++ file 'pageb.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../pageb.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'pageb.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.8.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_PageB_t {
    QByteArrayData data[13];
    char stringdata0[196];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PageB_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PageB_t qt_meta_stringdata_PageB = {
    {
QT_MOC_LITERAL(0, 0, 5), // "PageB"
QT_MOC_LITERAL(1, 6, 17), // "onListItemClicked"
QT_MOC_LITERAL(2, 24, 0), // ""
QT_MOC_LITERAL(3, 25, 16), // "QListWidgetItem*"
QT_MOC_LITERAL(4, 42, 4), // "item"
QT_MOC_LITERAL(5, 47, 20), // "OnT1SearchBtnClicked"
QT_MOC_LITERAL(6, 68, 20), // "OnT2SearchBtnClicked"
QT_MOC_LITERAL(7, 89, 18), // "onDiaryItemClicked"
QT_MOC_LITERAL(8, 108, 16), // "DiaryListWidget*"
QT_MOC_LITERAL(9, 125, 13), // "clickedWidget"
QT_MOC_LITERAL(10, 139, 17), // "onDestItemClicked"
QT_MOC_LITERAL(11, 157, 22), // "DestinationListWidget*"
QT_MOC_LITERAL(12, 180, 15) // "onLogoffClicked"

    },
    "PageB\0onListItemClicked\0\0QListWidgetItem*\0"
    "item\0OnT1SearchBtnClicked\0"
    "OnT2SearchBtnClicked\0onDiaryItemClicked\0"
    "DiaryListWidget*\0clickedWidget\0"
    "onDestItemClicked\0DestinationListWidget*\0"
    "onLogoffClicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PageB[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   44,    2, 0x0a /* Public */,
       5,    0,   47,    2, 0x0a /* Public */,
       6,    0,   48,    2, 0x0a /* Public */,
       7,    1,   49,    2, 0x0a /* Public */,
      10,    1,   52,    2, 0x0a /* Public */,
      12,    0,   55,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 8,    9,
    QMetaType::Void, 0x80000000 | 11,    9,
    QMetaType::Void,

       0        // eod
};

void PageB::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        PageB *_t = static_cast<PageB *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->onListItemClicked((*reinterpret_cast< QListWidgetItem*(*)>(_a[1]))); break;
        case 1: _t->OnT1SearchBtnClicked(); break;
        case 2: _t->OnT2SearchBtnClicked(); break;
        case 3: _t->onDiaryItemClicked((*reinterpret_cast< DiaryListWidget*(*)>(_a[1]))); break;
        case 4: _t->onDestItemClicked((*reinterpret_cast< DestinationListWidget*(*)>(_a[1]))); break;
        case 5: _t->onLogoffClicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 3:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< DiaryListWidget* >(); break;
            }
            break;
        case 4:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< DestinationListWidget* >(); break;
            }
            break;
        }
    }
}

const QMetaObject PageB::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_PageB.data,
      qt_meta_data_PageB,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *PageB::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PageB::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_PageB.stringdata0))
        return static_cast<void*>(const_cast< PageB*>(this));
    return QWidget::qt_metacast(_clname);
}

int PageB::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
