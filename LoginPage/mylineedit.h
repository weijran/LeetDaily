#ifndef MYLINEEDIT_H
#define MYLINEEDIT_H


#include <QLineEdit>
#include <QFocusEvent>

class MyLineEdit : public QLineEdit {
    Q_OBJECT

    public:
        MyLineEdit(const QString &placeholderText, QWidget *parent = nullptr): QLineEdit(parent), m_placeholderText(placeholderText) {
            // 设置默认内容（或称为占位符）
            setText(placeholderText);
            // 可以选择性地设置样式以区分占位符和正常文本（不是必须的）
            // setStyleSheet("color: gray;"); // 示例：将占位符文本颜色设置为灰色
        }

    protected:
        void focusInEvent(QFocusEvent *event) override {
            QLineEdit::focusInEvent(event);
            // 当获得焦点时（即用户准备输入时），检查文本是否为占位符
            if (text() == m_placeholderText) {
                clear(); // 清除占位符
            }
        }

    private:
        QString m_placeholderText; // 存储占位符文本

};

#endif // MYLINEEDIT_H
