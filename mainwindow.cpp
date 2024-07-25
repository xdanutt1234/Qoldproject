#include "mainwindow.h"
#include "controllerTest/QoldControl.h"
#include <QVBoxLayout>
#include <QWidget>

MainWindow::MainWindow(QWidget *parent) : QMainWindow(parent) {
    // Create a central widget
    QWidget *centralWidget = new QWidget(this);
    setCentralWidget(centralWidget);

    // Create the button
    test_button = new QPushButton("Test", this);

    // Set button stylesheet to change its color
    test_button->setStyleSheet(
        "QPushButton {"
        "background-color: #4CAF50;"  // Background color
        "color: white;"               // Text color
        "border: 1px solid #4CAF50;"  // Border
        "border-radius: 4px;"         // Rounded corners
        "padding: 10px;"              // Padding
        "}"
        "QPushButton:hover {"
        "background-color: #45a049;"  // Hover color
        "}"
    );

    // Create a layout and add the button
    QVBoxLayout *layout = new QVBoxLayout;
    layout->addWidget(test_button);
    layout->setAlignment(Qt::AlignCenter);
    centralWidget->setLayout(layout);

    // Create and configure the QoldControl object
    QoldControl myController;
    myController.relayAttachToPin(7);

    // Connect the button's signal to the slot
    connect(test_button, &QPushButton::released, this, [&](){
        myController.switchPin();
    });
}

MainWindow::~MainWindow() {}
