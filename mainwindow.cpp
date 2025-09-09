#include "mainwindow.h"
#include <QPushButton>
#include <QVBoxLayout>
#include <QLabel>
#include <QWidget>

MainWindow::MainWindow(QWidget *parent) : QMainWindow(parent) {
    QWidget *central = new QWidget(this);
    QVBoxLayout *layout = new QVBoxLayout(central);

    QLabel *title = new QLabel("SuperSMP Launcher");
    title->setStyleSheet("font-size: 18px; color: beige; background-color: brown;");
    title->setAlignment(Qt::AlignCenter);

    QPushButton *backBtn = new QPushButton("Back");
    QPushButton *optionsBtn = new QPushButton("Options");
    QPushButton *playBtn = new QPushButton("Play");
    QPushButton *exitBtn = new QPushButton("Exit");

    layout->addWidget(title);
    layout->addWidget(backBtn);
    layout->addWidget(optionsBtn);
    layout->addWidget(playBtn);
    layout->addWidget(exitBtn);

    central->setStyleSheet("background-color: purple;");
    setCentralWidget(central);
    setWindowTitle("SuperSMP Launcher");
    resize(400, 300);
}
