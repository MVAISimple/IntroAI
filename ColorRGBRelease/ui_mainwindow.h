/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QPushButton *pushButton;
    QLabel *label_answer;
    QLineEdit *lineEdit_B;
    QLineEdit *lineEdit_R;
    QLineEdit *lineEdit_G;
    QLabel *label_R;
    QLabel *label_G;
    QLabel *label_B;
    QLabel *label_Color;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->setWindowModality(Qt::NonModal);
        MainWindow->resize(373, 314);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MainWindow->sizePolicy().hasHeightForWidth());
        MainWindow->setSizePolicy(sizePolicy);
        MainWindow->setMinimumSize(QSize(373, 314));
        MainWindow->setMaximumSize(QSize(373, 314));
        MainWindow->setAcceptDrops(false);
        MainWindow->setLayoutDirection(Qt::LeftToRight);
        MainWindow->setAutoFillBackground(false);
        MainWindow->setStyleSheet(QString::fromUtf8(""));
        MainWindow->setTabShape(QTabWidget::Rounded);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setEnabled(false);
        pushButton->setGeometry(QRect(120, 60, 141, 31));
        QFont font;
        font.setPointSize(10);
        font.setBold(true);
        font.setWeight(75);
        pushButton->setFont(font);
        pushButton->setLayoutDirection(Qt::LeftToRight);
        label_answer = new QLabel(centralWidget);
        label_answer->setObjectName(QString::fromUtf8("label_answer"));
        label_answer->setGeometry(QRect(120, 240, 141, 31));
        QFont font1;
        font1.setPointSize(14);
        font1.setBold(true);
        font1.setWeight(75);
        label_answer->setFont(font1);
        label_answer->setAutoFillBackground(true);
        label_answer->setStyleSheet(QString::fromUtf8(" QLabel {\n"
" background-color: rgb(\"255, 255, 255\");\n"
" }"));
        label_answer->setTextFormat(Qt::AutoText);
        label_answer->setScaledContents(false);
        label_answer->setAlignment(Qt::AlignCenter);
        label_answer->setMargin(-2);
        lineEdit_B = new QLineEdit(centralWidget);
        lineEdit_B->setObjectName(QString::fromUtf8("lineEdit_B"));
        lineEdit_B->setGeometry(QRect(290, 10, 71, 20));
        lineEdit_R = new QLineEdit(centralWidget);
        lineEdit_R->setObjectName(QString::fromUtf8("lineEdit_R"));
        lineEdit_R->setGeometry(QRect(50, 10, 71, 20));
        lineEdit_G = new QLineEdit(centralWidget);
        lineEdit_G->setObjectName(QString::fromUtf8("lineEdit_G"));
        lineEdit_G->setGeometry(QRect(170, 10, 71, 20));
        label_R = new QLabel(centralWidget);
        label_R->setObjectName(QString::fromUtf8("label_R"));
        label_R->setGeometry(QRect(10, 10, 31, 21));
        label_R->setFont(font);
        label_R->setAutoFillBackground(true);
        label_R->setStyleSheet(QString::fromUtf8(" QLabel {\n"
" background-color: rgb(\"255, 255, 255\");\n"
" }"));
        label_R->setAlignment(Qt::AlignCenter);
        label_G = new QLabel(centralWidget);
        label_G->setObjectName(QString::fromUtf8("label_G"));
        label_G->setGeometry(QRect(130, 10, 31, 21));
        label_G->setFont(font);
        label_G->setAutoFillBackground(true);
        label_G->setStyleSheet(QString::fromUtf8(" QLabel {\n"
" background-color: rgb(\"255, 255, 255\");\n"
" }"));
        label_G->setAlignment(Qt::AlignCenter);
        label_B = new QLabel(centralWidget);
        label_B->setObjectName(QString::fromUtf8("label_B"));
        label_B->setGeometry(QRect(250, 10, 31, 21));
        label_B->setFont(font);
        label_B->setAutoFillBackground(true);
        label_B->setStyleSheet(QString::fromUtf8(" QLabel {\n"
" background-color: rgb(\"255, 255, 255\");\n"
" }"));
        label_B->setAlignment(Qt::AlignCenter);
        label_Color = new QLabel(centralWidget);
        label_Color->setObjectName(QString::fromUtf8("label_Color"));
        label_Color->setGeometry(QRect(0, 0, 373, 314));
        sizePolicy.setHeightForWidth(label_Color->sizePolicy().hasHeightForWidth());
        label_Color->setSizePolicy(sizePolicy);
        label_Color->setToolTipDuration(-2);
        label_Color->setLineWidth(1);
        label_Color->setAlignment(Qt::AlignCenter);
        label_Color->setIndent(1);
        MainWindow->setCentralWidget(centralWidget);
        label_Color->raise();
        pushButton->raise();
        lineEdit_B->raise();
        lineEdit_R->raise();
        lineEdit_G->raise();
        label_R->raise();
        label_B->raise();
        label_G->raise();
        label_answer->raise();

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "RGBColor", nullptr));
        pushButton->setText(QApplication::translate("MainWindow", "\320\243\320\267\320\275\320\260\321\202\321\214!", nullptr));
        label_answer->setText(QString());
        label_R->setText(QApplication::translate("MainWindow", "R:", nullptr));
        label_G->setText(QApplication::translate("MainWindow", "G:", nullptr));
        label_B->setText(QApplication::translate("MainWindow", "B:", nullptr));
        label_Color->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
