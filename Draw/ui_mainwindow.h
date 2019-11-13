/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *scribblePlaceholder;
    QPushButton *colorRed;
    QPushButton *colorBlue;
    QPushButton *colorGreen;
    QLabel *label_2;
    QPushButton *penThin;
    QPushButton *penMiddle;
    QPushButton *penThick;
    QPushButton *textFred;
    QPushButton *textHello;
    QPushButton *textDogs;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(737, 721);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        verticalLayoutWidget = new QWidget(centralWidget);
        verticalLayoutWidget->setObjectName(QString::fromUtf8("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(10, 10, 601, 641));
        scribblePlaceholder = new QVBoxLayout(verticalLayoutWidget);
        scribblePlaceholder->setSpacing(6);
        scribblePlaceholder->setContentsMargins(11, 11, 11, 11);
        scribblePlaceholder->setObjectName(QString::fromUtf8("scribblePlaceholder"));
        scribblePlaceholder->setContentsMargins(0, 0, 0, 0);
        colorRed = new QPushButton(centralWidget);
        colorRed->setObjectName(QString::fromUtf8("colorRed"));
        colorRed->setGeometry(QRect(620, 10, 114, 61));
        QPalette palette;
        QBrush brush(QColor(0, 0, 0, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        QBrush brush1(QColor(252, 1, 7, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Button, brush1);
        QBrush brush2(QColor(255, 124, 127, 255));
        brush2.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Light, brush2);
        QBrush brush3(QColor(253, 62, 67, 255));
        brush3.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Midlight, brush3);
        QBrush brush4(QColor(126, 0, 3, 255));
        brush4.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Dark, brush4);
        QBrush brush5(QColor(168, 1, 4, 255));
        brush5.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Mid, brush5);
        palette.setBrush(QPalette::Active, QPalette::Text, brush);
        QBrush brush6(QColor(255, 255, 255, 255));
        brush6.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::BrightText, brush6);
        palette.setBrush(QPalette::Active, QPalette::ButtonText, brush1);
        palette.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette.setBrush(QPalette::Active, QPalette::Shadow, brush);
        QBrush brush7(QColor(253, 128, 131, 255));
        brush7.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::AlternateBase, brush7);
        QBrush brush8(QColor(255, 255, 220, 255));
        brush8.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::ToolTipBase, brush8);
        palette.setBrush(QPalette::Active, QPalette::ToolTipText, brush);
        QBrush brush9(QColor(0, 0, 0, 128));
        brush9.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::PlaceholderText, brush9);
        palette.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Light, brush2);
        palette.setBrush(QPalette::Inactive, QPalette::Midlight, brush3);
        palette.setBrush(QPalette::Inactive, QPalette::Dark, brush4);
        palette.setBrush(QPalette::Inactive, QPalette::Mid, brush5);
        palette.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette.setBrush(QPalette::Inactive, QPalette::BrightText, brush6);
        palette.setBrush(QPalette::Inactive, QPalette::ButtonText, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Shadow, brush);
        palette.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush7);
        palette.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush8);
        palette.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush9);
        palette.setBrush(QPalette::Disabled, QPalette::WindowText, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Light, brush2);
        palette.setBrush(QPalette::Disabled, QPalette::Midlight, brush3);
        palette.setBrush(QPalette::Disabled, QPalette::Dark, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::Mid, brush5);
        palette.setBrush(QPalette::Disabled, QPalette::Text, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::BrightText, brush6);
        palette.setBrush(QPalette::Disabled, QPalette::ButtonText, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Shadow, brush);
        palette.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush8);
        palette.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush);
        palette.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush9);
        colorRed->setPalette(palette);
        QFont font;
        font.setPointSize(35);
        colorRed->setFont(font);
        colorRed->setStyleSheet(QString::fromUtf8("background-color: rgb(252, 1, 7);"));
        colorBlue = new QPushButton(centralWidget);
        colorBlue->setObjectName(QString::fromUtf8("colorBlue"));
        colorBlue->setGeometry(QRect(620, 80, 114, 61));
        QPalette palette1;
        QBrush brush10(QColor(0, 0, 255, 255));
        brush10.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::Button, brush10);
        palette1.setBrush(QPalette::Active, QPalette::ButtonText, brush10);
        palette1.setBrush(QPalette::Active, QPalette::Base, brush10);
        palette1.setBrush(QPalette::Active, QPalette::Window, brush10);
        palette1.setBrush(QPalette::Inactive, QPalette::Button, brush10);
        palette1.setBrush(QPalette::Inactive, QPalette::ButtonText, brush10);
        palette1.setBrush(QPalette::Inactive, QPalette::Base, brush10);
        palette1.setBrush(QPalette::Inactive, QPalette::Window, brush10);
        palette1.setBrush(QPalette::Disabled, QPalette::Button, brush10);
        QBrush brush11(QColor(148, 148, 148, 255));
        brush11.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Disabled, QPalette::ButtonText, brush11);
        palette1.setBrush(QPalette::Disabled, QPalette::Base, brush10);
        palette1.setBrush(QPalette::Disabled, QPalette::Window, brush10);
        colorBlue->setPalette(palette1);
        colorBlue->setFont(font);
        colorBlue->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 255);"));
        colorGreen = new QPushButton(centralWidget);
        colorGreen->setObjectName(QString::fromUtf8("colorGreen"));
        colorGreen->setGeometry(QRect(620, 150, 114, 61));
        QPalette palette2;
        QBrush brush12(QColor(33, 255, 6, 255));
        brush12.setStyle(Qt::SolidPattern);
        palette2.setBrush(QPalette::Active, QPalette::Button, brush12);
        palette2.setBrush(QPalette::Active, QPalette::ButtonText, brush12);
        palette2.setBrush(QPalette::Active, QPalette::Base, brush12);
        palette2.setBrush(QPalette::Active, QPalette::Window, brush12);
        palette2.setBrush(QPalette::Inactive, QPalette::Button, brush12);
        palette2.setBrush(QPalette::Inactive, QPalette::ButtonText, brush12);
        palette2.setBrush(QPalette::Inactive, QPalette::Base, brush12);
        palette2.setBrush(QPalette::Inactive, QPalette::Window, brush12);
        palette2.setBrush(QPalette::Disabled, QPalette::Button, brush12);
        palette2.setBrush(QPalette::Disabled, QPalette::ButtonText, brush11);
        palette2.setBrush(QPalette::Disabled, QPalette::Base, brush12);
        palette2.setBrush(QPalette::Disabled, QPalette::Window, brush12);
        colorGreen->setPalette(palette2);
        colorGreen->setFont(font);
        colorGreen->setStyleSheet(QString::fromUtf8("background-color:rgb(33, 255, 6);"));
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(618, 210, 121, 41));
        QFont font1;
        font1.setPointSize(25);
        label_2->setFont(font1);
        penThin = new QPushButton(centralWidget);
        penThin->setObjectName(QString::fromUtf8("penThin"));
        penThin->setGeometry(QRect(620, 250, 114, 61));
        QFont font2;
        font2.setPointSize(35);
        font2.setUnderline(false);
        penThin->setFont(font2);
        penThin->setAutoFillBackground(false);
        penThin->setStyleSheet(QString::fromUtf8("background-color:rgb(255, 255, 255);"));
        penMiddle = new QPushButton(centralWidget);
        penMiddle->setObjectName(QString::fromUtf8("penMiddle"));
        penMiddle->setGeometry(QRect(620, 320, 114, 61));
        QFont font3;
        font3.setPointSize(30);
        font3.setUnderline(false);
        penMiddle->setFont(font3);
        penMiddle->setStyleSheet(QString::fromUtf8("background-color:rgb(255, 255, 255);"));
        penThick = new QPushButton(centralWidget);
        penThick->setObjectName(QString::fromUtf8("penThick"));
        penThick->setGeometry(QRect(620, 380, 114, 61));
        penThick->setFont(font);
        penThick->setStyleSheet(QString::fromUtf8("background-color:rgb(255, 255, 255);"));
        textFred = new QPushButton(centralWidget);
        textFred->setObjectName(QString::fromUtf8("textFred"));
        textFred->setGeometry(QRect(620, 580, 114, 61));
        QFont font4;
        font4.setFamily(QString::fromUtf8("Webdings"));
        font4.setPointSize(35);
        textFred->setFont(font4);
        textHello = new QPushButton(centralWidget);
        textHello->setObjectName(QString::fromUtf8("textHello"));
        textHello->setGeometry(QRect(620, 461, 114, 61));
        QFont font5;
        font5.setFamily(QString::fromUtf8("Webdings"));
        font5.setPointSize(50);
        textHello->setFont(font5);
        textDogs = new QPushButton(centralWidget);
        textDogs->setObjectName(QString::fromUtf8("textDogs"));
        textDogs->setGeometry(QRect(620, 520, 114, 61));
        textDogs->setFont(font5);
        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(620, 275, 114, 5));
        pushButton->setStyleSheet(QString::fromUtf8("background-color:rgb(0, 0, 0);\n"
""));
        pushButton_2 = new QPushButton(centralWidget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(620, 345, 114, 10));
        pushButton_2->setStyleSheet(QString::fromUtf8("background-color:rgb(0, 0, 0);"));
        pushButton_3 = new QPushButton(centralWidget);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setGeometry(QRect(620, 395, 114, 20));
        pushButton_3->setStyleSheet(QString::fromUtf8("background-color:rgb(0, 0, 0);"));
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 737, 22));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        colorRed->setText(QString());
        colorBlue->setText(QString());
        colorGreen->setText(QString());
        label_2->setText(QApplication::translate("MainWindow", "Pen Width:", nullptr));
        penThin->setText(QString());
        penMiddle->setText(QString());
        penThick->setText(QString());
        textFred->setText(QApplication::translate("MainWindow", "HI", nullptr));
        textHello->setText(QApplication::translate("MainWindow", "v", nullptr));
        textDogs->setText(QApplication::translate("MainWindow", "h", nullptr));
        pushButton->setText(QString());
        pushButton_2->setText(QApplication::translate("MainWindow", "PushButton", nullptr));
        pushButton_3->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
