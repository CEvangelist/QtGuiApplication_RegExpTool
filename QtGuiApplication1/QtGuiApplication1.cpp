#include "QtGuiApplication1.h"
#include <qdebug.h>

QtGuiApplication1::QtGuiApplication1(QWidget *parent)
    : QMainWindow(parent)
{
    ui.setupUi(this);
    QObject::connect(ui.pushButton_Find, SIGNAL(clicked()), this, SLOT(handleFindButtonClicked()) );
}

void QtGuiApplication1::handleFindButtonClicked ()
{
    qDebug() << "buttonClicked";
    ui.textBrowser_result->clear();
    QString patStr = ui.plainTextEdit_pattern->toPlainText();
    QString srcStr = ui.plainTextEdit_source->toPlainText();
    // problems below
    QRegExp rx(patStr);
    rx.indexIn(srcStr, 2);
    qDebug() << rx.capturedTexts();
    qDebug() << rx.matchedLength();

    QStringList lst;
    int pos = 0;

    while ((pos = rx.indexIn(srcStr, pos)) != -1)
    {
      lst << rx.capturedTexts();
      pos += rx.matchedLength();
    }

    for (QString x : lst) {
      ui.textBrowser_result->insertHtml(x + QString("<br>"));
    }
}
