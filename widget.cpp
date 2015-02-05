#include "widget.h"
#include "button.h"
#include <iostream>

using namespace std;

Widget::Widget(QWidget *parent)
    : QWidget(parent)
{
     QGridLayout *layout = new QGridLayout;
     Button *button1 = new Button("button 1", "This little piggy went to market");
     Button *button2 = new Button("button 2", "This little piggy stayed home");
     Button *button3 = new Button("button 3", "This little piggy had roast beef");
     Button *button4 = new Button("button 4", "This little piggy had none");
     Button *button5 = new Button("button 5", "And this little piggy cried wee wee wee all the way home");
     Button *button6 = new Button("button 6", "this little piggy had 6 toes");
     QPushButton *quit = new QPushButton("quit");
     connect(quit, SIGNAL(clicked()), this, SLOT(myQuit()));
     connect(button1, SIGNAL(clicked()), button1, SLOT(showMessage()));
     connect(button2, SIGNAL(clicked()), button2, SLOT(showMessage()));
     connect(button3, SIGNAL(clicked()), button3, SLOT(showMessage()));
     connect(button4, SIGNAL(clicked()), button4, SLOT(showMessage()));
     connect(button5, SIGNAL(clicked()), button5, SLOT(showMessage()));
     connect(button6, SIGNAL(clicked()), button6, SLOT(showMessage()));
     layout->addWidget(button1, 0, 0, 1, 3, 0);
     layout->addWidget(button2, 0, 3, 1, 3, 0);
     layout->addWidget(button3, 0, 6, 1, 3, 0);
     layout->addWidget(button4, 1, 0, 1, 3, 0);
     layout->addWidget(button5, 1, 3, 1, 3, 0);
     layout->addWidget(button6, 1, 6, 1, 3, 0);
     layout->addWidget(quit, 2, 4, 6, 1, Qt::AlignHCenter);

     this->setLayout(layout);
     this->show();
}

Widget::~Widget()
{

}

void Widget::myQuit()
{
    exit(-1);
}
