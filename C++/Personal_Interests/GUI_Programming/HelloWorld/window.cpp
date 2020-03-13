#include "window.h"
#include <QPushButton>

// Constructor
Window:: Window(QWidget *parent) : QWidget (parent)
{
    setFixedSize(100, 50);

    // Button
    m_button = new QPushButton("Hello World", this);
    m_button -> setGeometry(10, 10, 80, 30);

    // reason we don't worry about destructor is
    // qt automatically cleans it up as button
    // is a child of the window parent, which
    // is automatically deleted when the window
    // app (class) is terminated.

}
