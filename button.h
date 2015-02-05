#ifndef BUTTON
#define BUTTON
#include <QPushButton>
#include <QObject>
#include <QMessageBox>

class Button : public QPushButton
{
    Q_OBJECT
public:
    Button(const QString & text, const QString & message_, QWidget * parent = 0);

public slots:
    void showMessage();

private:
    QString message;
};

#endif // BUTTON

