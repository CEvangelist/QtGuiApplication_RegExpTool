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
    qDebug() << "patStr: " << patStr;
    qDebug() << "srcStr: " << srcStr;

    QStringList srcLst;
    for (QString x : srcStr.split(QString('\n'))) srcLst.append(x);

    QRegExp rx(patStr);
    qDebug() << "rx: " << rx.pattern();

    QStringList lst;
    int pos = 0;

    for (QString x : srcLst)
    {
        if (rx.exactMatch(x)) lst.append(x);
    }

    for (QString x : lst) {
        ui.textBrowser_result->insertHtml(x + QString("<br>"));
    }
}
