#ifndef WIDGET_H
#define WIDGET_H
#include <QWidget>
#include <QNetworkAccessManager>
#include <QNetworkReply>
#include <QMessageBox>
#include <QJsonDocument>
#include <QJsonObject>
#include <QJsonArray>
#include <QFile>
#include <QLabel>
#include <QPainter>
#include "citycodeutils.h"
#include "day.h"

QT_BEGIN_NAMESPACE
namespace Ui {
class Widget;
}
QT_END_NAMESPACE

class Widget : public QWidget
{
    Q_OBJECT

public:
    Widget(QWidget *parent = nullptr);
    ~Widget();

    void weatherRead(void);
    void parseWeatherJsonData(QByteArray rawData);
    void updateUI();
    bool eventFilter(QObject *watched, QEvent *event);
    void drawTempLineHigh();
    void drawTempLineLow();
    day days[7];
    QList<QLabel *> mDateList;
    QList<QLabel *> mWeekList;
    QList<QLabel *> mIconList;
    QList<QLabel *> mWeaTypeList;
    QList<QLabel *> mAirqList;
    QList<QLabel *> mFxList;

public slots:

    void readHttpReply(QNetworkReply *reply);

private slots:
    void on_pushButton_clicked();

private:
    Ui::Widget *ui;

    QNetworkAccessManager* manager;
    QNetworkReply* reply;
    QString strUrl;
    citycodeutils ctcdut;
    QMap<QString,QString> mTypeMap;
};
#endif // WIDGET_H
