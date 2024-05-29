/****************************************************************************
** Meta object code from reading C++ file 'lineeditwithdelete.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../lineeditwithdelete.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'lineeditwithdelete.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.8.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_LineEditWithDelete_t {
    QByteArrayData data[9];
    char stringdata0[127];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_LineEditWithDelete_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_LineEditWithDelete_t qt_meta_stringdata_LineEditWithDelete = {
    {
QT_MOC_LITERAL(0, 0, 18), // "LineEditWithDelete"
QT_MOC_LITERAL(1, 19, 13), // "clicked_right"
QT_MOC_LITERAL(2, 33, 0), // ""
QT_MOC_LITERAL(3, 34, 19), // "LineEditWithDelete*"
QT_MOC_LITERAL(4, 54, 17), // "mouseReleaseEvent"
QT_MOC_LITERAL(5, 72, 12), // "QMouseEvent*"
QT_MOC_LITERAL(6, 85, 5), // "event"
QT_MOC_LITERAL(7, 91, 16), // "contextMenuEvent"
QT_MOC_LITERAL(8, 108, 18) // "QContextMenuEvent*"

    },
    "LineEditWithDelete\0clicked_right\0\0"
    "LineEditWithDelete*\0mouseReleaseEvent\0"
    "QMouseEvent*\0event\0contextMenuEvent\0"
    "QContextMenuEvent*"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_LineEditWithDelete[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   29,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    1,   32,    2, 0x0a /* Public */,
       7,    1,   35,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    2,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 5,    6,
    QMetaType::Void, 0x80000000 | 8,    6,

       0        // eod
};

void LineEditWithDelete::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        LineEditWithDelete *_t = static_cast<LineEditWithDelete *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->clicked_right((*reinterpret_cast< LineEditWithDelete*(*)>(_a[1]))); break;
        case 1: _t->mouseReleaseEvent((*reinterpret_cast< QMouseEvent*(*)>(_a[1]))); break;
        case 2: _t->contextMenuEvent((*reinterpret_cast< QContextMenuEvent*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< LineEditWithDelete* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (LineEditWithDelete::*_t)(LineEditWithDelete * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&LineEditWithDelete::clicked_right)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject LineEditWithDelete::staticMetaObject = {
    { &QLineEdit::staticMetaObject, qt_meta_stringdata_LineEditWithDelete.data,
      qt_meta_data_LineEditWithDelete,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *LineEditWithDelete::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *LineEditWithDelete::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_LineEditWithDelete.stringdata0))
        return static_cast<void*>(const_cast< LineEditWithDelete*>(this));
    return QLineEdit::qt_metacast(_clname);
}

int LineEditWithDelete::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QLineEdit::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    }
    return _id;
}

// SIGNAL 0
void LineEditWithDelete::clicked_right(LineEditWithDelete * _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
