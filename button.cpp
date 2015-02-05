#include "button.h"

Button::Button(const QString &text,const QString &message_,  QWidget *parent) : QPushButton(text, parent)
{
    Button::message = message_;
}
void Button::showMessage()
{
    QMessageBox *msgBox = new QMessageBox;
    msgBox->setText(Button::message);
    msgBox->exec();
}
