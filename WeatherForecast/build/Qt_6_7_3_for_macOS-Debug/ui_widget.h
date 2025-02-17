/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created by: Qt User Interface Compiler version 6.7.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QVBoxLayout *verticalLayout_6;
    QWidget *widget01;
    QHBoxLayout *horizontalLayout_5;
    QLineEdit *lineEditCity;
    QPushButton *pushButton;
    QSpacerItem *horizontalSpacer_3;
    QLabel *labelCurrentDate;
    QWidget *widget02;
    QGridLayout *gridLayout_2;
    QLabel *labelWeathericon;
    QLabel *labelWeathertype;
    QSpacerItem *horizontalSpacer;
    QLabel *labelCity;
    QLabel *labelTemp;
    QLabel *labelTempRange;
    QSpacerItem *horizontalSpacer_2;
    QWidget *widget03;
    QVBoxLayout *verticalLayout;
    QLabel *labelGanmao;
    QWidget *widget0301;
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *labelFX;
    QVBoxLayout *verticalLayout_2;
    QLabel *labelFXType01;
    QLabel *labelFXType02;
    QHBoxLayout *horizontalLayout_2;
    QLabel *labelPM;
    QVBoxLayout *verticalLayout_3;
    QLabel *labelPMType01;
    QLabel *labelPMType02;
    QHBoxLayout *horizontalLayout_3;
    QLabel *labelWD;
    QVBoxLayout *verticalLayout_4;
    QLabel *labelSDType01;
    QLabel *labelSDType02;
    QHBoxLayout *horizontalLayout_4;
    QLabel *labelZL;
    QVBoxLayout *verticalLayout_5;
    QLabel *labelZLType01;
    QLabel *labelZLType02;
    QWidget *widget04;
    QGridLayout *gridLayout_3;
    QGridLayout *widget0401;
    QLabel *labelday0;
    QLabel *labelday1;
    QLabel *labelday2;
    QLabel *labelday3;
    QLabel *labelday4;
    QLabel *labelday5;
    QLabel *labeldate0;
    QLabel *labeldate1;
    QLabel *labeldate2;
    QLabel *labeldate3;
    QLabel *labeldate4;
    QLabel *labeldate5;
    QWidget *widget0402;
    QGridLayout *gridLayout_4;
    QLabel *labelWeather5;
    QLabel *labelWeather2;
    QLabel *labelWeather0;
    QLabel *labelWeather4;
    QLabel *labelWeather1;
    QLabel *labelWeather3;
    QLabel *labelweather0;
    QLabel *labelweather1;
    QLabel *labelweather2;
    QLabel *labelweather3;
    QLabel *labelweather4;
    QLabel *labelweather5;
    QGridLayout *widget0403;
    QLabel *labelairq0;
    QLabel *labelairq1;
    QLabel *labelairq2;
    QLabel *labelairq3;
    QLabel *labelairq4;
    QLabel *labelairq5;
    QWidget *widget0404;
    QWidget *widget0405;
    QGridLayout *widget0406;
    QLabel *labelFX0;
    QLabel *labelFX1;
    QLabel *labelFX2;
    QLabel *labelFX3;
    QLabel *labelFX4;
    QLabel *labelFX5;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName("Widget");
        Widget->resize(466, 830);
        Widget->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 0);"));
        verticalLayout_6 = new QVBoxLayout(Widget);
        verticalLayout_6->setObjectName("verticalLayout_6");
        widget01 = new QWidget(Widget);
        widget01->setObjectName("widget01");
        widget01->setStyleSheet(QString::fromUtf8("color: rgb(230, 230, 230);"));
        horizontalLayout_5 = new QHBoxLayout(widget01);
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        lineEditCity = new QLineEdit(widget01);
        lineEditCity->setObjectName("lineEditCity");
        lineEditCity->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"    border: 2px solid gray;\n"
"    border-radius: 5px;\n"
"    padding: 0 8px;\n"
"    background: white;\n"
"    selection-background-color: darkgray;\n"
"    color: rgb(80, 80, 80);\n"
"}"));

        horizontalLayout_5->addWidget(lineEditCity);

        pushButton = new QPushButton(widget01);
        pushButton->setObjectName("pushButton");
        pushButton->setMinimumSize(QSize(20, 20));
        pushButton->setMaximumSize(QSize(20, 20));
        pushButton->setStyleSheet(QString::fromUtf8("border-radius: 10px;"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/res/\346\220\234\347\264\242.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        pushButton->setIcon(icon);

        horizontalLayout_5->addWidget(pushButton);

        horizontalSpacer_3 = new QSpacerItem(107, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_3);

        labelCurrentDate = new QLabel(widget01);
        labelCurrentDate->setObjectName("labelCurrentDate");

        horizontalLayout_5->addWidget(labelCurrentDate);


        verticalLayout_6->addWidget(widget01);

        widget02 = new QWidget(Widget);
        widget02->setObjectName("widget02");
        widget02->setStyleSheet(QString::fromUtf8("color:rgb(230, 230, 230);"));
        gridLayout_2 = new QGridLayout(widget02);
        gridLayout_2->setObjectName("gridLayout_2");
        labelWeathericon = new QLabel(widget02);
        labelWeathericon->setObjectName("labelWeathericon");
        labelWeathericon->setMinimumSize(QSize(100, 100));
        labelWeathericon->setMaximumSize(QSize(100, 100));
        labelWeathericon->setPixmap(QPixmap(QString::fromUtf8(":/res/\346\231\264.png")));
        labelWeathericon->setScaledContents(true);

        gridLayout_2->addWidget(labelWeathericon, 0, 0, 2, 1);

        labelWeathertype = new QLabel(widget02);
        labelWeathertype->setObjectName("labelWeathertype");
        labelWeathertype->setMinimumSize(QSize(50, 20));
        labelWeathertype->setMaximumSize(QSize(50, 20));
        labelWeathertype->setAlignment(Qt::AlignmentFlag::AlignCenter);

        gridLayout_2->addWidget(labelWeathertype, 1, 1, 1, 1);

        horizontalSpacer = new QSpacerItem(89, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        gridLayout_2->addItem(horizontalSpacer, 1, 5, 1, 1);

        labelCity = new QLabel(widget02);
        labelCity->setObjectName("labelCity");
        labelCity->setMinimumSize(QSize(100, 20));
        labelCity->setMaximumSize(QSize(60, 20));
        labelCity->setAlignment(Qt::AlignmentFlag::AlignRight|Qt::AlignmentFlag::AlignTrailing|Qt::AlignmentFlag::AlignVCenter);

        gridLayout_2->addWidget(labelCity, 0, 4, 1, 2);

        labelTemp = new QLabel(widget02);
        labelTemp->setObjectName("labelTemp");
        labelTemp->setMinimumSize(QSize(100, 0));
        labelTemp->setMaximumSize(QSize(100, 16777215));
        QFont font;
        font.setPointSize(33);
        labelTemp->setFont(font);
        labelTemp->setAlignment(Qt::AlignmentFlag::AlignCenter);

        gridLayout_2->addWidget(labelTemp, 0, 1, 1, 2);

        labelTempRange = new QLabel(widget02);
        labelTempRange->setObjectName("labelTempRange");
        labelTempRange->setMinimumSize(QSize(60, 20));
        labelTempRange->setMaximumSize(QSize(60, 20));
        labelTempRange->setAlignment(Qt::AlignmentFlag::AlignCenter);

        gridLayout_2->addWidget(labelTempRange, 1, 2, 1, 3);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_2, 0, 3, 1, 1);


        verticalLayout_6->addWidget(widget02);

        widget03 = new QWidget(Widget);
        widget03->setObjectName("widget03");
        widget03->setStyleSheet(QString::fromUtf8("color:rgb(230,230,230);"));
        verticalLayout = new QVBoxLayout(widget03);
        verticalLayout->setObjectName("verticalLayout");
        labelGanmao = new QLabel(widget03);
        labelGanmao->setObjectName("labelGanmao");
        labelGanmao->setMinimumSize(QSize(100, 20));
        labelGanmao->setMaximumSize(QSize(1000, 20));

        verticalLayout->addWidget(labelGanmao);

        widget0301 = new QWidget(widget03);
        widget0301->setObjectName("widget0301");
        widget0301->setStyleSheet(QString::fromUtf8("background-color: rgb(194, 100, 1);\n"
"border-radius: 10px;"));
        gridLayout = new QGridLayout(widget0301);
        gridLayout->setObjectName("gridLayout");
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        labelFX = new QLabel(widget0301);
        labelFX->setObjectName("labelFX");
        labelFX->setMinimumSize(QSize(45, 45));
        labelFX->setMaximumSize(QSize(45, 45));
        labelFX->setPixmap(QPixmap(QString::fromUtf8(":/res/\351\243\216\351\200\237_\351\235\242.png")));
        labelFX->setScaledContents(true);

        horizontalLayout->addWidget(labelFX);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName("verticalLayout_2");
        labelFXType01 = new QLabel(widget0301);
        labelFXType01->setObjectName("labelFXType01");
        labelFXType01->setMinimumSize(QSize(50, 20));
        labelFXType01->setMaximumSize(QSize(50, 20));
        labelFXType01->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout_2->addWidget(labelFXType01);

        labelFXType02 = new QLabel(widget0301);
        labelFXType02->setObjectName("labelFXType02");
        labelFXType02->setMinimumSize(QSize(50, 20));
        labelFXType02->setMaximumSize(QSize(50, 20));
        labelFXType02->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout_2->addWidget(labelFXType02);


        horizontalLayout->addLayout(verticalLayout_2);


        gridLayout->addLayout(horizontalLayout, 0, 0, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        labelPM = new QLabel(widget0301);
        labelPM->setObjectName("labelPM");
        labelPM->setMinimumSize(QSize(45, 45));
        labelPM->setMaximumSize(QSize(45, 45));
        labelPM->setPixmap(QPixmap(QString::fromUtf8(":/res/PM2.5.png")));
        labelPM->setScaledContents(true);

        horizontalLayout_2->addWidget(labelPM);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName("verticalLayout_3");
        labelPMType01 = new QLabel(widget0301);
        labelPMType01->setObjectName("labelPMType01");
        labelPMType01->setMinimumSize(QSize(50, 20));
        labelPMType01->setMaximumSize(QSize(50, 25));
        labelPMType01->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout_3->addWidget(labelPMType01);

        labelPMType02 = new QLabel(widget0301);
        labelPMType02->setObjectName("labelPMType02");
        labelPMType02->setMinimumSize(QSize(50, 20));
        labelPMType02->setMaximumSize(QSize(50, 20));
        labelPMType02->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout_3->addWidget(labelPMType02);


        horizontalLayout_2->addLayout(verticalLayout_3);


        gridLayout->addLayout(horizontalLayout_2, 0, 1, 1, 1);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        labelWD = new QLabel(widget0301);
        labelWD->setObjectName("labelWD");
        labelWD->setMinimumSize(QSize(45, 45));
        labelWD->setMaximumSize(QSize(45, 45));
        labelWD->setPixmap(QPixmap(QString::fromUtf8(":/res/\345\244\247\346\260\224\346\271\277\345\272\246_\351\235\242.png")));
        labelWD->setScaledContents(true);

        horizontalLayout_3->addWidget(labelWD);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName("verticalLayout_4");
        labelSDType01 = new QLabel(widget0301);
        labelSDType01->setObjectName("labelSDType01");
        labelSDType01->setMinimumSize(QSize(50, 20));
        labelSDType01->setMaximumSize(QSize(50, 20));
        labelSDType01->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout_4->addWidget(labelSDType01);

        labelSDType02 = new QLabel(widget0301);
        labelSDType02->setObjectName("labelSDType02");
        labelSDType02->setMinimumSize(QSize(50, 20));
        labelSDType02->setMaximumSize(QSize(50, 20));
        labelSDType02->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout_4->addWidget(labelSDType02);


        horizontalLayout_3->addLayout(verticalLayout_4);


        gridLayout->addLayout(horizontalLayout_3, 1, 0, 1, 1);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        labelZL = new QLabel(widget0301);
        labelZL->setObjectName("labelZL");
        labelZL->setMinimumSize(QSize(45, 45));
        labelZL->setMaximumSize(QSize(45, 45));
        labelZL->setPixmap(QPixmap(QString::fromUtf8(":/res/\350\264\237\346\260\247\347\246\273\345\255\220.png")));
        labelZL->setScaledContents(true);

        horizontalLayout_4->addWidget(labelZL);

        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setObjectName("verticalLayout_5");
        labelZLType01 = new QLabel(widget0301);
        labelZLType01->setObjectName("labelZLType01");
        labelZLType01->setMinimumSize(QSize(50, 20));
        labelZLType01->setMaximumSize(QSize(50, 20));
        labelZLType01->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout_5->addWidget(labelZLType01);

        labelZLType02 = new QLabel(widget0301);
        labelZLType02->setObjectName("labelZLType02");
        labelZLType02->setMinimumSize(QSize(50, 20));
        labelZLType02->setMaximumSize(QSize(50, 20));
        labelZLType02->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout_5->addWidget(labelZLType02);


        horizontalLayout_4->addLayout(verticalLayout_5);


        gridLayout->addLayout(horizontalLayout_4, 1, 1, 1, 1);


        verticalLayout->addWidget(widget0301);


        verticalLayout_6->addWidget(widget03);

        widget04 = new QWidget(Widget);
        widget04->setObjectName("widget04");
        widget04->setStyleSheet(QString::fromUtf8("color:rgb(230, 230,230);"));
        gridLayout_3 = new QGridLayout(widget04);
        gridLayout_3->setObjectName("gridLayout_3");
        widget0401 = new QGridLayout();
        widget0401->setObjectName("widget0401");
        widget0401->setHorizontalSpacing(-1);
        widget0401->setVerticalSpacing(0);
        widget0401->setContentsMargins(-1, -1, 0, 0);
        labelday0 = new QLabel(widget04);
        labelday0->setObjectName("labelday0");
        labelday0->setMinimumSize(QSize(60, 18));
        labelday0->setMaximumSize(QSize(60, 18));
        labelday0->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 146, 165);\n"
"border-radius: 5px;\n"
"border-bottom-left-radius:0px;\n"
"border-bottom-right-radius:0px;\n"
""));
        labelday0->setAlignment(Qt::AlignmentFlag::AlignCenter);

        widget0401->addWidget(labelday0, 0, 0, 1, 1);

        labelday1 = new QLabel(widget04);
        labelday1->setObjectName("labelday1");
        labelday1->setMinimumSize(QSize(60, 18));
        labelday1->setMaximumSize(QSize(60, 18));
        labelday1->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 146, 165);\n"
"border-radius: 5px;\n"
"border-bottom-left-radius:0px;\n"
"border-bottom-right-radius:0px;\n"
""));
        labelday1->setAlignment(Qt::AlignmentFlag::AlignCenter);

        widget0401->addWidget(labelday1, 0, 1, 1, 1);

        labelday2 = new QLabel(widget04);
        labelday2->setObjectName("labelday2");
        labelday2->setMinimumSize(QSize(60, 18));
        labelday2->setMaximumSize(QSize(60, 18));
        labelday2->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 146, 165);\n"
"border-radius: 5px;\n"
"border-bottom-left-radius:0px;\n"
"border-bottom-right-radius:0px;\n"
""));
        labelday2->setAlignment(Qt::AlignmentFlag::AlignCenter);

        widget0401->addWidget(labelday2, 0, 2, 1, 1);

        labelday3 = new QLabel(widget04);
        labelday3->setObjectName("labelday3");
        labelday3->setMinimumSize(QSize(60, 18));
        labelday3->setMaximumSize(QSize(60, 18));
        labelday3->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 146, 165);\n"
"border-radius: 5px;\n"
"border-bottom-left-radius:0px;\n"
"border-bottom-right-radius:0px;\n"
""));
        labelday3->setAlignment(Qt::AlignmentFlag::AlignCenter);

        widget0401->addWidget(labelday3, 0, 3, 1, 1);

        labelday4 = new QLabel(widget04);
        labelday4->setObjectName("labelday4");
        labelday4->setMinimumSize(QSize(60, 18));
        labelday4->setMaximumSize(QSize(60, 18));
        labelday4->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 146, 165);\n"
"border-radius: 5px;\n"
"border-bottom-left-radius:0px;\n"
"border-bottom-right-radius:0px;\n"
""));
        labelday4->setAlignment(Qt::AlignmentFlag::AlignCenter);

        widget0401->addWidget(labelday4, 0, 4, 1, 1);

        labelday5 = new QLabel(widget04);
        labelday5->setObjectName("labelday5");
        labelday5->setMinimumSize(QSize(60, 18));
        labelday5->setMaximumSize(QSize(60, 18));
        labelday5->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 146, 165);\n"
"border-radius: 5px;\n"
"border-bottom-left-radius:0px;\n"
"border-bottom-right-radius:0px;\n"
""));
        labelday5->setAlignment(Qt::AlignmentFlag::AlignCenter);

        widget0401->addWidget(labelday5, 0, 5, 1, 1);

        labeldate0 = new QLabel(widget04);
        labeldate0->setObjectName("labeldate0");
        labeldate0->setMinimumSize(QSize(60, 18));
        labeldate0->setMaximumSize(QSize(60, 18));
        labeldate0->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 146, 165);\n"
"border-radius: 5px;\n"
"border-top-left-radius:0px;\n"
"border-top-right-radius:0px;"));
        labeldate0->setAlignment(Qt::AlignmentFlag::AlignCenter);

        widget0401->addWidget(labeldate0, 1, 0, 1, 1);

        labeldate1 = new QLabel(widget04);
        labeldate1->setObjectName("labeldate1");
        labeldate1->setMinimumSize(QSize(60, 18));
        labeldate1->setMaximumSize(QSize(60, 18));
        labeldate1->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 146, 165);\n"
"border-radius: 5px;\n"
"border-top-left-radius:0px;\n"
"border-top-right-radius:0px;"));
        labeldate1->setAlignment(Qt::AlignmentFlag::AlignCenter);

        widget0401->addWidget(labeldate1, 1, 1, 1, 1);

        labeldate2 = new QLabel(widget04);
        labeldate2->setObjectName("labeldate2");
        labeldate2->setMinimumSize(QSize(60, 18));
        labeldate2->setMaximumSize(QSize(60, 18));
        labeldate2->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 146, 165);\n"
"border-radius: 5px;\n"
"border-top-left-radius:0px;\n"
"border-top-right-radius:0px;"));
        labeldate2->setAlignment(Qt::AlignmentFlag::AlignCenter);

        widget0401->addWidget(labeldate2, 1, 2, 1, 1);

        labeldate3 = new QLabel(widget04);
        labeldate3->setObjectName("labeldate3");
        labeldate3->setMinimumSize(QSize(60, 18));
        labeldate3->setMaximumSize(QSize(60, 18));
        labeldate3->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 146, 165);\n"
"border-radius: 5px;\n"
"border-top-left-radius:0px;\n"
"border-top-right-radius:0px;"));
        labeldate3->setAlignment(Qt::AlignmentFlag::AlignCenter);

        widget0401->addWidget(labeldate3, 1, 3, 1, 1);

        labeldate4 = new QLabel(widget04);
        labeldate4->setObjectName("labeldate4");
        labeldate4->setMinimumSize(QSize(60, 18));
        labeldate4->setMaximumSize(QSize(60, 18));
        labeldate4->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 146, 165);\n"
"border-radius: 5px;\n"
"border-top-left-radius:0px;\n"
"border-top-right-radius:0px;"));
        labeldate4->setAlignment(Qt::AlignmentFlag::AlignCenter);

        widget0401->addWidget(labeldate4, 1, 4, 1, 1);

        labeldate5 = new QLabel(widget04);
        labeldate5->setObjectName("labeldate5");
        labeldate5->setMinimumSize(QSize(60, 18));
        labeldate5->setMaximumSize(QSize(60, 18));
        labeldate5->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 146, 165);\n"
"border-radius: 5px;\n"
"border-top-left-radius:0px;\n"
"border-top-right-radius:0px;"));
        labeldate5->setAlignment(Qt::AlignmentFlag::AlignCenter);

        widget0401->addWidget(labeldate5, 1, 5, 1, 1);


        gridLayout_3->addLayout(widget0401, 0, 0, 1, 1);

        widget0402 = new QWidget(widget04);
        widget0402->setObjectName("widget0402");
        widget0402->setMinimumSize(QSize(60, 0));
        widget0402->setMaximumSize(QSize(16777215, 16777215));
        widget0402->setStyleSheet(QString::fromUtf8("background-color: rgb(80, 80, 80);\n"
"border-radius: 10px;"));
        gridLayout_4 = new QGridLayout(widget0402);
        gridLayout_4->setObjectName("gridLayout_4");
        gridLayout_4->setContentsMargins(0, 0, 0, 0);
        labelWeather5 = new QLabel(widget0402);
        labelWeather5->setObjectName("labelWeather5");
        labelWeather5->setMinimumSize(QSize(60, 20));
        labelWeather5->setMaximumSize(QSize(60, 20));
        labelWeather5->setAlignment(Qt::AlignmentFlag::AlignHCenter|Qt::AlignmentFlag::AlignTop);

        gridLayout_4->addWidget(labelWeather5, 1, 5, 1, 1);

        labelWeather2 = new QLabel(widget0402);
        labelWeather2->setObjectName("labelWeather2");
        labelWeather2->setMinimumSize(QSize(60, 20));
        labelWeather2->setMaximumSize(QSize(60, 20));
        labelWeather2->setAlignment(Qt::AlignmentFlag::AlignHCenter|Qt::AlignmentFlag::AlignTop);

        gridLayout_4->addWidget(labelWeather2, 1, 2, 1, 1);

        labelWeather0 = new QLabel(widget0402);
        labelWeather0->setObjectName("labelWeather0");
        labelWeather0->setMinimumSize(QSize(60, 20));
        labelWeather0->setMaximumSize(QSize(60, 20));
        labelWeather0->setAlignment(Qt::AlignmentFlag::AlignHCenter|Qt::AlignmentFlag::AlignTop);

        gridLayout_4->addWidget(labelWeather0, 1, 0, 1, 1);

        labelWeather4 = new QLabel(widget0402);
        labelWeather4->setObjectName("labelWeather4");
        labelWeather4->setMinimumSize(QSize(60, 20));
        labelWeather4->setMaximumSize(QSize(60, 20));
        labelWeather4->setAlignment(Qt::AlignmentFlag::AlignHCenter|Qt::AlignmentFlag::AlignTop);

        gridLayout_4->addWidget(labelWeather4, 1, 4, 1, 1);

        labelWeather1 = new QLabel(widget0402);
        labelWeather1->setObjectName("labelWeather1");
        labelWeather1->setMinimumSize(QSize(60, 20));
        labelWeather1->setMaximumSize(QSize(60, 20));
        labelWeather1->setAlignment(Qt::AlignmentFlag::AlignHCenter|Qt::AlignmentFlag::AlignTop);

        gridLayout_4->addWidget(labelWeather1, 1, 1, 1, 1);

        labelWeather3 = new QLabel(widget0402);
        labelWeather3->setObjectName("labelWeather3");
        labelWeather3->setMinimumSize(QSize(60, 20));
        labelWeather3->setMaximumSize(QSize(60, 20));
        labelWeather3->setAlignment(Qt::AlignmentFlag::AlignHCenter|Qt::AlignmentFlag::AlignTop);

        gridLayout_4->addWidget(labelWeather3, 1, 3, 1, 1);

        labelweather0 = new QLabel(widget0402);
        labelweather0->setObjectName("labelweather0");
        labelweather0->setMinimumSize(QSize(60, 60));
        labelweather0->setMaximumSize(QSize(60, 60));
        labelweather0->setPixmap(QPixmap(QString::fromUtf8(":/res/\344\270\255\351\233\250.png")));
        labelweather0->setScaledContents(true);
        labelweather0->setMargin(10);

        gridLayout_4->addWidget(labelweather0, 0, 0, 1, 1);

        labelweather1 = new QLabel(widget0402);
        labelweather1->setObjectName("labelweather1");
        labelweather1->setMinimumSize(QSize(60, 60));
        labelweather1->setMaximumSize(QSize(60, 60));
        labelweather1->setPixmap(QPixmap(QString::fromUtf8(":/res/\344\270\255\351\233\250.png")));
        labelweather1->setScaledContents(true);
        labelweather1->setMargin(10);

        gridLayout_4->addWidget(labelweather1, 0, 1, 1, 1);

        labelweather2 = new QLabel(widget0402);
        labelweather2->setObjectName("labelweather2");
        labelweather2->setMinimumSize(QSize(60, 60));
        labelweather2->setMaximumSize(QSize(60, 60));
        labelweather2->setPixmap(QPixmap(QString::fromUtf8(":/res/\344\270\255\351\233\250.png")));
        labelweather2->setScaledContents(true);
        labelweather2->setMargin(10);

        gridLayout_4->addWidget(labelweather2, 0, 2, 1, 1);

        labelweather3 = new QLabel(widget0402);
        labelweather3->setObjectName("labelweather3");
        labelweather3->setMinimumSize(QSize(60, 60));
        labelweather3->setMaximumSize(QSize(60, 60));
        labelweather3->setPixmap(QPixmap(QString::fromUtf8(":/res/\344\270\255\351\233\250.png")));
        labelweather3->setScaledContents(true);
        labelweather3->setMargin(10);

        gridLayout_4->addWidget(labelweather3, 0, 3, 1, 1);

        labelweather4 = new QLabel(widget0402);
        labelweather4->setObjectName("labelweather4");
        labelweather4->setMinimumSize(QSize(60, 60));
        labelweather4->setMaximumSize(QSize(60, 60));
        labelweather4->setPixmap(QPixmap(QString::fromUtf8(":/res/\344\270\255\351\233\250.png")));
        labelweather4->setScaledContents(true);
        labelweather4->setMargin(10);

        gridLayout_4->addWidget(labelweather4, 0, 4, 1, 1);

        labelweather5 = new QLabel(widget0402);
        labelweather5->setObjectName("labelweather5");
        labelweather5->setMinimumSize(QSize(60, 60));
        labelweather5->setMaximumSize(QSize(60, 60));
        labelweather5->setPixmap(QPixmap(QString::fromUtf8(":/res/\344\270\255\351\233\250.png")));
        labelweather5->setScaledContents(true);
        labelweather5->setMargin(10);

        gridLayout_4->addWidget(labelweather5, 0, 5, 1, 1);


        gridLayout_3->addWidget(widget0402, 1, 0, 1, 1);

        widget0403 = new QGridLayout();
        widget0403->setObjectName("widget0403");
        labelairq0 = new QLabel(widget04);
        labelairq0->setObjectName("labelairq0");
        labelairq0->setMinimumSize(QSize(60, 36));
        labelairq0->setMaximumSize(QSize(60, 36));
        labelairq0->setStyleSheet(QString::fromUtf8("background-color: rgb(116, 168, 0);\n"
"border-radius: 5px;"));
        labelairq0->setAlignment(Qt::AlignmentFlag::AlignCenter);

        widget0403->addWidget(labelairq0, 0, 0, 1, 1);

        labelairq1 = new QLabel(widget04);
        labelairq1->setObjectName("labelairq1");
        labelairq1->setMinimumSize(QSize(60, 36));
        labelairq1->setMaximumSize(QSize(60, 36));
        labelairq1->setStyleSheet(QString::fromUtf8("background-color: rgb(252, 183, 16);\n"
"border-radius: 5px;"));
        labelairq1->setAlignment(Qt::AlignmentFlag::AlignCenter);

        widget0403->addWidget(labelairq1, 0, 1, 1, 1);

        labelairq2 = new QLabel(widget04);
        labelairq2->setObjectName("labelairq2");
        labelairq2->setMinimumSize(QSize(60, 36));
        labelairq2->setMaximumSize(QSize(60, 36));
        labelairq2->setStyleSheet(QString::fromUtf8("background-color: rgb(116, 168, 0);\n"
"border-radius: 5px;"));
        labelairq2->setAlignment(Qt::AlignmentFlag::AlignCenter);

        widget0403->addWidget(labelairq2, 0, 2, 1, 1);

        labelairq3 = new QLabel(widget04);
        labelairq3->setObjectName("labelairq3");
        labelairq3->setMinimumSize(QSize(60, 36));
        labelairq3->setMaximumSize(QSize(60, 36));
        labelairq3->setStyleSheet(QString::fromUtf8("background-color: rgb(116, 168, 0);\n"
"border-radius: 5px;"));
        labelairq3->setAlignment(Qt::AlignmentFlag::AlignCenter);

        widget0403->addWidget(labelairq3, 0, 3, 1, 1);

        labelairq4 = new QLabel(widget04);
        labelairq4->setObjectName("labelairq4");
        labelairq4->setMinimumSize(QSize(60, 36));
        labelairq4->setMaximumSize(QSize(60, 36));
        labelairq4->setStyleSheet(QString::fromUtf8("background-color: rgb(116, 168, 0);\n"
"border-radius: 5px;"));
        labelairq4->setAlignment(Qt::AlignmentFlag::AlignCenter);

        widget0403->addWidget(labelairq4, 0, 4, 1, 1);

        labelairq5 = new QLabel(widget04);
        labelairq5->setObjectName("labelairq5");
        labelairq5->setMinimumSize(QSize(60, 36));
        labelairq5->setMaximumSize(QSize(60, 36));
        labelairq5->setStyleSheet(QString::fromUtf8("background-color: rgb(116, 168, 0);\n"
"border-radius: 5px;"));
        labelairq5->setAlignment(Qt::AlignmentFlag::AlignCenter);

        widget0403->addWidget(labelairq5, 0, 5, 1, 1);


        gridLayout_3->addLayout(widget0403, 2, 0, 1, 1);

        widget0404 = new QWidget(widget04);
        widget0404->setObjectName("widget0404");
        widget0404->setMinimumSize(QSize(0, 70));
        widget0404->setStyleSheet(QString::fromUtf8("background-color: rgb(64, 64, 64);\n"
"border-radius: 10px;"));

        gridLayout_3->addWidget(widget0404, 3, 0, 1, 1);

        widget0405 = new QWidget(widget04);
        widget0405->setObjectName("widget0405");
        widget0405->setMinimumSize(QSize(0, 70));
        widget0405->setStyleSheet(QString::fromUtf8("background-color: rgb(64, 64, 64);\n"
"border-radius: 10px;"));

        gridLayout_3->addWidget(widget0405, 4, 0, 1, 1);

        widget0406 = new QGridLayout();
        widget0406->setObjectName("widget0406");
        labelFX0 = new QLabel(widget04);
        labelFX0->setObjectName("labelFX0");
        labelFX0->setMinimumSize(QSize(60, 36));
        labelFX0->setMaximumSize(QSize(60, 36));
        labelFX0->setStyleSheet(QString::fromUtf8("background-color: rgb(80, 80, 80);\n"
"border-radius: 5px;"));
        labelFX0->setAlignment(Qt::AlignmentFlag::AlignCenter);

        widget0406->addWidget(labelFX0, 0, 0, 1, 1);

        labelFX1 = new QLabel(widget04);
        labelFX1->setObjectName("labelFX1");
        labelFX1->setMinimumSize(QSize(60, 36));
        labelFX1->setMaximumSize(QSize(60, 36));
        labelFX1->setStyleSheet(QString::fromUtf8("background-color: rgb(80, 80, 80);\n"
"border-radius: 5px;"));
        labelFX1->setAlignment(Qt::AlignmentFlag::AlignCenter);

        widget0406->addWidget(labelFX1, 0, 1, 1, 1);

        labelFX2 = new QLabel(widget04);
        labelFX2->setObjectName("labelFX2");
        labelFX2->setMinimumSize(QSize(60, 36));
        labelFX2->setMaximumSize(QSize(60, 36));
        labelFX2->setStyleSheet(QString::fromUtf8("background-color: rgb(80, 80, 80);\n"
"border-radius: 5px;"));
        labelFX2->setAlignment(Qt::AlignmentFlag::AlignCenter);

        widget0406->addWidget(labelFX2, 0, 2, 1, 1);

        labelFX3 = new QLabel(widget04);
        labelFX3->setObjectName("labelFX3");
        labelFX3->setMinimumSize(QSize(60, 36));
        labelFX3->setMaximumSize(QSize(60, 36));
        labelFX3->setStyleSheet(QString::fromUtf8("background-color: rgb(80, 80, 80);\n"
"border-radius: 5px;"));
        labelFX3->setAlignment(Qt::AlignmentFlag::AlignCenter);

        widget0406->addWidget(labelFX3, 0, 3, 1, 1);

        labelFX4 = new QLabel(widget04);
        labelFX4->setObjectName("labelFX4");
        labelFX4->setMinimumSize(QSize(60, 36));
        labelFX4->setMaximumSize(QSize(60, 36));
        labelFX4->setStyleSheet(QString::fromUtf8("background-color: rgb(80, 80, 80);\n"
"border-radius: 5px;"));
        labelFX4->setAlignment(Qt::AlignmentFlag::AlignCenter);

        widget0406->addWidget(labelFX4, 0, 4, 1, 1);

        labelFX5 = new QLabel(widget04);
        labelFX5->setObjectName("labelFX5");
        labelFX5->setMinimumSize(QSize(60, 36));
        labelFX5->setMaximumSize(QSize(60, 36));
        labelFX5->setStyleSheet(QString::fromUtf8("background-color: rgb(80, 80, 80);\n"
"border-radius: 5px;"));
        labelFX5->setAlignment(Qt::AlignmentFlag::AlignCenter);

        widget0406->addWidget(labelFX5, 0, 5, 1, 1);


        gridLayout_3->addLayout(widget0406, 5, 0, 1, 1);


        verticalLayout_6->addWidget(widget04);

        verticalLayout_6->setStretch(0, 1);
        verticalLayout_6->setStretch(1, 2);
        verticalLayout_6->setStretch(2, 3);
        verticalLayout_6->setStretch(3, 7);

        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QCoreApplication::translate("Widget", "Widget", nullptr));
        lineEditCity->setInputMask(QString());
        lineEditCity->setText(QCoreApplication::translate("Widget", "\345\237\216\345\270\202", nullptr));
        pushButton->setText(QString());
        labelCurrentDate->setText(QCoreApplication::translate("Widget", "2025/02/15  \346\230\237\346\234\237\345\205\255", nullptr));
        labelWeathericon->setText(QString());
        labelWeathertype->setText(QCoreApplication::translate("Widget", "\346\231\264\345\244\251", nullptr));
        labelCity->setText(QCoreApplication::translate("Widget", "\350\265\243\345\267\236\345\270\202", nullptr));
        labelTemp->setText(QCoreApplication::translate("Widget", "23\342\204\203", nullptr));
        labelTempRange->setText(QCoreApplication::translate("Widget", "20~26\342\204\203", nullptr));
        labelGanmao->setText(QCoreApplication::translate("Widget", "\346\204\237\345\206\222\346\214\207\346\225\260\357\274\232\345\220\204\347\261\273\344\272\272\347\276\244\345\217\257\344\273\245\350\207\252\347\224\261\346\264\273\345\212\250", nullptr));
        labelFX->setText(QString());
        labelFXType01->setText(QCoreApplication::translate("Widget", "\344\270\234\345\215\227\351\243\216", nullptr));
        labelFXType02->setText(QCoreApplication::translate("Widget", "2\347\272\247", nullptr));
        labelPM->setText(QString());
        labelPMType01->setText(QCoreApplication::translate("Widget", "PM2.5", nullptr));
        labelPMType02->setText(QCoreApplication::translate("Widget", "24", nullptr));
        labelWD->setText(QString());
        labelSDType01->setText(QCoreApplication::translate("Widget", "\346\271\277\345\272\246", nullptr));
        labelSDType02->setText(QCoreApplication::translate("Widget", "85%", nullptr));
        labelZL->setText(QString());
        labelZLType01->setText(QCoreApplication::translate("Widget", "\347\251\272\346\260\224\350\264\250\351\207\217", nullptr));
        labelZLType02->setText(QCoreApplication::translate("Widget", "\344\274\230", nullptr));
        labelday0->setText(QCoreApplication::translate("Widget", "\346\230\250\345\244\251", nullptr));
        labelday1->setText(QCoreApplication::translate("Widget", "\344\273\212\345\244\251", nullptr));
        labelday2->setText(QCoreApplication::translate("Widget", "\346\230\216\345\244\251", nullptr));
        labelday3->setText(QCoreApplication::translate("Widget", "\345\221\250\344\272\214", nullptr));
        labelday4->setText(QCoreApplication::translate("Widget", "\345\221\250\344\270\211", nullptr));
        labelday5->setText(QCoreApplication::translate("Widget", "\345\221\250\345\233\233", nullptr));
        labeldate0->setText(QCoreApplication::translate("Widget", "02/14", nullptr));
        labeldate1->setText(QCoreApplication::translate("Widget", "02/15", nullptr));
        labeldate2->setText(QCoreApplication::translate("Widget", "02/16", nullptr));
        labeldate3->setText(QCoreApplication::translate("Widget", "02/17", nullptr));
        labeldate4->setText(QCoreApplication::translate("Widget", "02/18", nullptr));
        labeldate5->setText(QCoreApplication::translate("Widget", "02/19", nullptr));
        labelWeather5->setText(QCoreApplication::translate("Widget", "\345\244\232\344\272\221", nullptr));
        labelWeather2->setText(QCoreApplication::translate("Widget", "\345\244\232\344\272\221", nullptr));
        labelWeather0->setText(QCoreApplication::translate("Widget", "\345\244\232\344\272\221", nullptr));
        labelWeather4->setText(QCoreApplication::translate("Widget", "\345\244\232\344\272\221", nullptr));
        labelWeather1->setText(QCoreApplication::translate("Widget", "\345\244\232\344\272\221", nullptr));
        labelWeather3->setText(QCoreApplication::translate("Widget", "\345\244\232\344\272\221", nullptr));
        labelweather0->setText(QString());
        labelweather1->setText(QString());
        labelweather2->setText(QString());
        labelweather3->setText(QString());
        labelweather4->setText(QString());
        labelweather5->setText(QString());
        labelairq0->setText(QCoreApplication::translate("Widget", "\344\274\230", nullptr));
        labelairq1->setText(QCoreApplication::translate("Widget", "\350\211\257", nullptr));
        labelairq2->setText(QCoreApplication::translate("Widget", "\344\274\230", nullptr));
        labelairq3->setText(QCoreApplication::translate("Widget", "\344\274\230", nullptr));
        labelairq4->setText(QCoreApplication::translate("Widget", "\344\274\230", nullptr));
        labelairq5->setText(QCoreApplication::translate("Widget", "\344\274\230", nullptr));
        labelFX0->setText(QCoreApplication::translate("Widget", "\344\270\234\345\215\227\351\243\216\n"
"2\347\272\247", nullptr));
        labelFX1->setText(QCoreApplication::translate("Widget", "\344\270\234\345\215\227\351\243\216\n"
"2\347\272\247", nullptr));
        labelFX2->setText(QCoreApplication::translate("Widget", "\344\270\234\345\215\227\351\243\216\n"
"2\347\272\247", nullptr));
        labelFX3->setText(QCoreApplication::translate("Widget", "\344\270\234\345\215\227\351\243\216\n"
"2\347\272\247", nullptr));
        labelFX4->setText(QCoreApplication::translate("Widget", "\344\270\234\345\215\227\351\243\216\n"
"2\347\272\247", nullptr));
        labelFX5->setText(QCoreApplication::translate("Widget", "\344\270\234\345\215\227\351\243\216\n"
"2\347\272\247", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
