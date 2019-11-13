#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "scribblearea.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_colorRed_clicked();

    void on_colorBlue_clicked();

    void on_colorGreen_clicked();

    void on_penThin_clicked();

    void on_penMiddle_clicked();

    void on_penThick_clicked();

    void on_textHello_clicked();

    void on_textDogs_clicked();

    void on_textFred_clicked();

    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

private:
    Ui::MainWindow *ui;
    ScribbleArea *scribbleArea;

};

#endif // MAINWINDOW_H
