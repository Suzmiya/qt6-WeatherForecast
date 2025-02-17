#include "widget.h"
#include "ui_widget.h"

void Widget::weatherRead()
{
    manager = new QNetworkAccessManager(this);
    strUrl = "http://gfeljm.tianqiapi.com/api?unescape=1&version=v9&appid=83941685&appsecret=Py2be4hk";
    QNetworkRequest res(strUrl);
    manager->get(res);
    reply = manager->get(res);

    connect(manager,&QNetworkAccessManager::finished,this,&Widget::readHttpReply);

    mDateList << ui->labelday0 << ui->labelday1 << ui->labelday2 << ui->labelday3 << ui->labelday4 << ui->labelday5;
    mWeekList << ui->labeldate0 << ui->labeldate1 << ui->labeldate2 << ui->labeldate3 << ui->labeldate4 << ui->labeldate5;
    mIconList << ui->labelweather0 << ui->labelweather1 << ui->labelweather2 << ui->labelweather3 << ui->labelweather4 << ui->labelweather5;
    mWeaTypeList << ui->labelWeather0 << ui->labelWeather1 << ui->labelWeather2 << ui->labelWeather3 << ui->labelWeather4 << ui->labelWeather5;
    mAirqList << ui->labelairq0 << ui->labelairq1 << ui->labelairq2 << ui->labelairq3 << ui->labelairq4 << ui->labelairq5;
    mFxList << ui->labelFX0 << ui->labelFX1 << ui->labelFX2 << ui->labelFX3 << ui->labelFX4 << ui->labelFX5;

    mTypeMap.insert("晴", ":/res/晴.png");
    mTypeMap.insert("多云", ":/res/多云.png");
    mTypeMap.insert("大雪", ":/res/大雪.png");
    mTypeMap.insert("大雨", ":/res/大雨.png");
    mTypeMap.insert("雷暴", ":/res/雷暴.png");
    mTypeMap.insert("雷雨", ":/res/雷雨.png");
    mTypeMap.insert("小雪", ":/res/小雪.png");
    mTypeMap.insert("小雨", ":/res/小雨.png");
    mTypeMap.insert("阴", ":/res/阴.png");
    mTypeMap.insert("雨夹雪", ":/res/雨夹雪.png");
    mTypeMap.insert("中雪", ":/res/中雪.png");
    mTypeMap.insert("中雨", ":/res/中雨.png");
    mTypeMap.insert("雾", ":/res/雾.png");

    ui->widget0404->installEventFilter(this);
    ui->widget0405->installEventFilter(this);
}

void Widget::parseWeatherJsonData(QByteArray rawData)
{
    QJsonDocument jsonDoc =QJsonDocument::fromJson(rawData);
    if(!jsonDoc.isNull() && jsonDoc.isObject())
    {
        QJsonObject jsonRoot = jsonDoc.object();
        days[0].mCity = jsonRoot["city"].toString();
        days[0].mPm25 = jsonRoot["aqi"].toObject()["pm25"].toString();
        if(jsonRoot.contains("data") && jsonRoot["data"].isArray())
        {
            QJsonArray weaArray = jsonRoot["data"].toArray();
            for(int i = 0; i < weaArray.size(); i ++)
            {
                QJsonObject obj = weaArray[i].toObject();
                days[i].mDate = obj["date"].toString();
                days[i].mWeek = obj["week"].toString();
                days[i].mWeathType = obj["wea"].toString();
                days[i].mTemp = obj["tem"].toString();
                days[i].mTempLow = obj["tem2"].toString();
                days[i].mTempHigh = obj["tem1"].toString();
                days[i].mFx = obj["win"].toArray()[0].toString();
                days[i].mFl = obj["win_speed"].toString();
                days[i].mAirq = obj["air_level"].toString();
                days[i].mTips = obj["air_tips"].toString();
                days[i].mHu = obj["humidity"].toString();
            }
            updateUI();
        }
    }
}

void Widget::updateUI()
{
    ui->labelCurrentDate->setText(days[0].mDate+" "+days[0].mWeek);
    //城市名称
    ui->labelCity->setText(days[0].mCity+"市");
    //当前温度
    ui->labelTemp->setText(days[0].mTemp+"℃");
    //最低最高温度
    ui->labelTempRange->setText(days[0].mTempLow+"~"+days[0].mTempHigh+"℃");
    //天气类型
    ui->labelWeathertype->setText(days[0].mWeathType);
    ui->labelWeathericon->setPixmap(mTypeMap[days[0].mWeathType]);
    //感冒指数
    ui->labelGanmao->setText(days[0].mTips);
    //风向
    ui->labelFXType01->setText(days[0].mFx);
    //风力
    ui->labelFXType02->setText(days[0].mFl);
    //PM2.5
    ui->labelPMType02->setText(days[0].mPm25);
    //湿度
    ui->labelSDType02->setText(days[0].mHu);
    //空气质量
    ui->labelZLType02->setText(days[0].mAirq);

    for(int i = 0; i < 6; i++)
    {
        mWeekList[i]->setText(days[i].mWeek);

        QStringList daylist = days[i].mDate.split("-");
        mDateList[i]->setText(daylist.at(1)+"-"+daylist.at(2));

        QStringList iconList = days[i].mWeathType.split("转");
        mIconList[i]->setPixmap(mTypeMap[iconList.at(0)]);

        mWeaTypeList[i]->setText(days[i].mWeathType);

        QString airQ = days[i].mAirq;
        mAirqList[i]->setText(airQ);
        if(airQ == "优")
        {
            mAirqList[i]->setStyleSheet("background-color: rgb(116, 168, 0); border-radius: 5px;");
        }
        else
        {
            mAirqList[i]->setStyleSheet("background-color: rgb(252, 183, 16); border-radius: 5px;");
        }

        mFxList[i]->setText(days[i].mFx+"\n"+days[i].mFl);
    }
    update();
}

bool Widget::eventFilter(QObject *watched, QEvent *event)
{
    if(watched == ui->widget0404 && event->type() == QEvent::Paint)
    {
        drawTempLineHigh();
        return true;

    }
    if(watched == ui->widget0405 && event->type() == QEvent::Paint)
    {
        drawTempLineLow();
        return true;

    }
    return QWidget::eventFilter(watched,event);
}

void Widget::drawTempLineHigh()
{
    QPainter painter(ui->widget0404);
    QColor highColor(255, 165, 0);
    painter.setBrush(highColor);
    painter.setPen(highColor);

    int ave = 0;
    int sum = 0;
    int offSet;
    int middle = ui->widget0404->height() / 2;

    for (int i = 0; i < 6; i++)
    {
        bool ok;
        int tempHigh = days[i].mTempHigh.toInt(&ok);
        if (ok)
        {
            sum += tempHigh;
        }
        else
        {
            qDebug() << "Failed to convert mTempHigh to int for index" << i;
        }
    }

    if (sum > 0)
    {
        ave = sum / 6;
    }

    QPoint points[6];
    for (int i = 0; i < 6; i++)
    {
        bool ok;
        int tempHigh = days[i].mTempHigh.toInt(&ok);
        if (ok)
        {
            QPoint mappedPoint = ui->widget0404->mapFromGlobal(mAirqList[i]->mapToGlobal(QPoint(0, 0)));
            points[i].setX(mappedPoint.x() + mAirqList[i]->width() / 2);
            offSet = (tempHigh - ave) * 3;
            points[i].setY(middle - offSet);

            int x = points[i].x();
            int y = points[i].y();
            if (x >= 0 && x < ui->widget0404->width() && y >= 0 && y < ui->widget0404->height())
            {
                painter.drawEllipse(points[i], 3, 3);

                // 设置较小的字体
                QFont smallFont = painter.font();
                smallFont.setPointSize(smallFont.pointSize() - 2);
                painter.setFont(smallFont);

                // 在点上方合适位置绘制温度度数
                QString tempText = QString::number(tempHigh) + "°C";
                QFontMetrics fm(painter.font());
                int textWidth = fm.horizontalAdvance(tempText);
                int textHeight = fm.height();
                // 调整 y 坐标偏移量，让文本位置低一点
                QPoint textPos(x - textWidth / 2, y - textHeight / 2);
                painter.drawText(textPos, tempText);

                // 恢复原来的字体
                painter.setFont(QFont());
            }
            else
            {
                qDebug() << "Ellipse position out of range for index" << i << ": (" << x << ", " << y << ")";
            }
        }
        else
        {
            qDebug() << "Failed to convert mTempHigh to int for index" << i;
        }
    }

    if (sum > 0)
    {
        painter.drawPolyline(points, 6);
    }
}

void Widget::drawTempLineLow()
{
    QPainter painter(ui->widget0405);
    QColor lowColor(135, 206, 250);
    painter.setBrush(lowColor);
    painter.setPen(lowColor);

    int ave = 0;
    int sum = 0;
    int offSet;
    int middle = ui->widget0405->height() / 2;

    for (int i = 0; i < 6; i++)
    {
        bool ok;
        int tempLow = days[i].mTempLow.toInt(&ok);
        if (ok)
        {
            sum += tempLow;
        }
        else
        {
            qDebug() << "Failed to convert mTempLow to int for index" << i;
        }
    }

    if (sum > 0)
    {
        ave = sum / 6;
    }

    QPoint points[6];
    for (int i = 0; i < 6; i++)
    {
        bool ok;
        int tempLow = days[i].mTempLow.toInt(&ok);
        if (ok)
        {
            QPoint mappedPoint = ui->widget0405->mapFromGlobal(mAirqList[i]->mapToGlobal(QPoint(0, 0)));
            points[i].setX(mappedPoint.x() + mAirqList[i]->width() / 2);
            offSet = (tempLow - ave) * 3;
            points[i].setY(middle - offSet);

            int x = points[i].x();
            int y = points[i].y();
            if (x >= 0 && x < ui->widget0405->width() && y >= 0 && y < ui->widget0405->height())
            {
                painter.drawEllipse(points[i], 3, 3);

                // 设置较小的字体
                QFont smallFont = painter.font();
                smallFont.setPointSize(smallFont.pointSize() - 2);
                painter.setFont(smallFont);

                // 在点上方合适位置绘制温度度数
                QString tempText = QString::number(tempLow) + "°C";
                QFontMetrics fm(painter.font());
                int textWidth = fm.horizontalAdvance(tempText);
                int textHeight = fm.height();
                // 调整 y 坐标偏移量，让文本位置低一点
                QPoint textPos(x - textWidth / 2, y - textHeight / 2);
                painter.drawText(textPos, tempText);

                // 恢复原来的字体
                painter.setFont(QFont());
            }
            else
            {
                qDebug() << "Ellipse position out of range for index" << i << ": (" << x << ", " << y << ")";
            }
        }
        else
        {
            qDebug() << "Failed to convert mTempLow to int for index" << i;
        }
    }

    if (sum > 0)
    {
        painter.drawPolyline(points, 6);
    }
}

void Widget::readHttpReply(QNetworkReply *reply)
{
    int resCode = reply->attribute(QNetworkRequest::HttpStatusCodeAttribute).toInt();
    if(reply->error() == QNetworkReply::NoError && resCode == 200)
    {
        QByteArray data = reply->readAll();
        parseWeatherJsonData(data);
    }
    else
    {
        QMessageBox mes;
        mes.setWindowTitle("错误");
        mes.setText("网络请求失败");
        mes.setStandardButtons(QMessageBox::Ok);
        mes.exec();
    }
}

void Widget::on_pushButton_clicked()
{
    QString cityNameFromUser = ui->lineEditCity->text();
    QString cityCode = ctcdut.getCityCodeFromName(cityNameFromUser);
    if(cityCode != "")
    {
        strUrl += "&cityid=" + cityCode;
        manager->get(QNetworkRequest(QUrl(strUrl)));
    }
    else
    {
        QMessageBox mes;
        mes.setWindowTitle("错误");
        mes.setText("请输入正确的城市名称");
        mes.setStandardButtons(QMessageBox::Ok);
        mes.exec();
    }
}

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
    setFixedSize(466,829);

    weatherRead();

}

Widget::~Widget()
{
    delete ui;
}


