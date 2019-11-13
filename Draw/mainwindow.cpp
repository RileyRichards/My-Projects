#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "scribblearea.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow),
    scribbleArea(new ScribbleArea)
{

    ui->setupUi(this);
    ui->scribblePlaceholder->addWidget(scribbleArea);
    /*
    QIcon thinLine;
    thinLine.load(":/thinLine.jpg");
    thinLine.scaled(ui->penThin->size(), Qt::KeepAspectRatioByExpanding);
    ui->penThin->setIcon(thinLine);
    */
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_colorRed_clicked()
{
    scribbleArea->changeColor(Qt::red);
}

void MainWindow::on_colorBlue_clicked()
{
    scribbleArea->changeColor(Qt::blue);
}

void MainWindow::on_colorGreen_clicked()
{
    scribbleArea->changeColor(Qt::green);
}

void MainWindow::on_penThin_clicked()
{
    scribbleArea->changePenWidth(5);
}

void MainWindow::on_penMiddle_clicked()
{
    scribbleArea->changePenWidth(15);
}

void MainWindow::on_penThick_clicked()
{
    scribbleArea->changePenWidth(20);
}

void MainWindow::on_textHello_clicked()
{
    scribbleArea->setFont("Webdings", "v");
}

void MainWindow::on_textDogs_clicked()
{
    scribbleArea->setFont("Webdings", "h");
}

void MainWindow::on_textFred_clicked()
{
    scribbleArea->setFont("Webdings", "H");
}

void MainWindow::on_pushButton_clicked()
{
    scribbleArea->changePenWidth(5);
}

void MainWindow::on_pushButton_2_clicked()
{
    scribbleArea->changePenWidth(15);
}

void MainWindow::on_pushButton_3_clicked()
{
    scribbleArea->changePenWidth(20);
}
