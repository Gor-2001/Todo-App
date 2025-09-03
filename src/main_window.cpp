#include "main_window.h"
#include <QLabel>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
{
    QLabel *label = new QLabel("Hello World", this);
    label->setAlignment(Qt::AlignCenter);

    setCentralWidget(label);
    setWindowTitle("Hello Qt");
    resize(400, 200);
}

MainWindow::~MainWindow() {}

