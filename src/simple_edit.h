#ifndef SIMPLEEDIT_H
#define SIMPLEEDIT_H

#include <QLineEdit>

class SimpleEdit : public QLineEdit
{
    Q_OBJECT

public:
    SimpleEdit(QWidget *parent = 0);

    void changeFontSize();
};

#endif // SIMPLEEDIT_H
