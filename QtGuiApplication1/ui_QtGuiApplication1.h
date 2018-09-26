/********************************************************************************
** Form generated from reading UI file 'QtGuiApplication1vycFHG.ui'
**
** Created by: Qt User Interface Compiler version 5.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef QTGUIAPPLICATION1VYCFHG_H
#define QTGUIAPPLICATION1VYCFHG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_QtGuiApplication1Class
{
public:
    QWidget *centralWidget;
    QLabel *label;
    QFrame *line;
    QPlainTextEdit *plainTextEdit_pattern;
    QPushButton *pushButton_Find;
    QPlainTextEdit *plainTextEdit_source;
    QPushButton *pushButton_Clear;
    QTextBrowser *textBrowser_result;
    QPushButton *pushButton_Reset;
    QLabel *label_2;
    QLabel *label_3;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *QtGuiApplication1Class)
    {
        if (QtGuiApplication1Class->objectName().isEmpty())
            QtGuiApplication1Class->setObjectName(QStringLiteral("QtGuiApplication1Class"));
        QtGuiApplication1Class->resize(600, 400);
        centralWidget = new QWidget(QtGuiApplication1Class);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(10, 10, 61, 21));
        line = new QFrame(centralWidget);
        line->setObjectName(QStringLiteral("line"));
        line->setGeometry(QRect(0, 200, 601, 16));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);
        plainTextEdit_pattern = new QPlainTextEdit(centralWidget);
        plainTextEdit_pattern->setObjectName(QStringLiteral("plainTextEdit_pattern"));
        plainTextEdit_pattern->setGeometry(QRect(80, 10, 421, 51));
        pushButton_Find = new QPushButton(centralWidget);
        pushButton_Find->setObjectName(QStringLiteral("pushButton_Find"));
        pushButton_Find->setGeometry(QRect(510, 40, 75, 23));
        plainTextEdit_source = new QPlainTextEdit(centralWidget);
        plainTextEdit_source->setObjectName(QStringLiteral("plainTextEdit_source"));
        plainTextEdit_source->setGeometry(QRect(80, 70, 421, 131));
        pushButton_Clear = new QPushButton(centralWidget);
        pushButton_Clear->setObjectName(QStringLiteral("pushButton_Clear"));
        pushButton_Clear->setGeometry(QRect(510, 180, 75, 23));
        textBrowser_result = new QTextBrowser(centralWidget);
        textBrowser_result->setObjectName(QStringLiteral("textBrowser_result"));
        textBrowser_result->setGeometry(QRect(80, 220, 421, 131));
        pushButton_Reset = new QPushButton(centralWidget);
        pushButton_Reset->setObjectName(QStringLiteral("pushButton_Reset"));
        pushButton_Reset->setGeometry(QRect(510, 330, 75, 23));
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(10, 70, 61, 21));
        label_3 = new QLabel(centralWidget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(10, 220, 61, 21));
        QtGuiApplication1Class->setCentralWidget(centralWidget);
        mainToolBar = new QToolBar(QtGuiApplication1Class);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        QtGuiApplication1Class->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(QtGuiApplication1Class);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        QtGuiApplication1Class->setStatusBar(statusBar);

        retranslateUi(QtGuiApplication1Class);
        QObject::connect(pushButton_Reset, SIGNAL(clicked()), plainTextEdit_pattern, SLOT(clear()));
        QObject::connect(pushButton_Reset, SIGNAL(clicked()), plainTextEdit_source, SLOT(clear()));
        QObject::connect(pushButton_Clear, SIGNAL(clicked()), plainTextEdit_source, SLOT(clear()));
        QObject::connect(pushButton_Reset, SIGNAL(clicked()), textBrowser_result, SLOT(clear()));

        QMetaObject::connectSlotsByName(QtGuiApplication1Class);
    } // setupUi

    void retranslateUi(QMainWindow *QtGuiApplication1Class)
    {
        QtGuiApplication1Class->setWindowTitle(QApplication::translate("QtGuiApplication1Class", "QtGuiApplication1", nullptr));
        label->setText(QApplication::translate("QtGuiApplication1Class", "Pattern", nullptr));
        pushButton_Find->setText(QApplication::translate("QtGuiApplication1Class", "Find", nullptr));
        pushButton_Clear->setText(QApplication::translate("QtGuiApplication1Class", "Clear", nullptr));
        pushButton_Reset->setText(QApplication::translate("QtGuiApplication1Class", "Reset", nullptr));
        label_2->setText(QApplication::translate("QtGuiApplication1Class", "Source", nullptr));
        label_3->setText(QApplication::translate("QtGuiApplication1Class", "Result", nullptr));
    } // retranslateUi

};

namespace Ui {
    class QtGuiApplication1Class: public Ui_QtGuiApplication1Class {};
} // namespace Ui

QT_END_NAMESPACE

#endif // QTGUIAPPLICATION1VYCFHG_H
