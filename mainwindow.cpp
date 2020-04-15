#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QGraphicsLineItem>
#include <QGraphicsScene>
#include <QPen>
#include "vehicle.h"
#include <QTimer>
#include <path.h>
#include <QDebug>
#include "Generator.h"
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    QPen pen;
    pen.setWidth(6);
    pen.setBrush(Qt::yellow);

    QPen Pline;
    Pline.setWidth(6);
    Pline.setBrush(Qt::white);

    // Structure Enviroment at Parking Scenario:
        QGraphicsLineItem *topRow = new QGraphicsLineItem;
        topRow->setLine(0,0,500,0);
        topRow->setPen(pen);

        QGraphicsLineItem *middleRow = new QGraphicsLineItem;
        middleRow->setLine(0,100,500,100);
        middleRow->setPen(pen);

        QGraphicsLineItem *bottomRow = new QGraphicsLineItem;
        bottomRow->setLine(0,200,500,200);
        bottomRow->setPen(pen);
    // Red Corner:
        QGraphicsRectItem *topLeftCorner = new QGraphicsRectItem;
        topLeftCorner->setRect(0,-5,100,-100);
        topLeftCorner->setBrush(Qt::red);

        QGraphicsRectItem *topRightCorner = new QGraphicsRectItem;
        topRightCorner->setRect(400,-5,100,-100);
        topRightCorner->setBrush(Qt::red);

        QGraphicsRectItem *bottomLeftCorner = new QGraphicsRectItem;
        bottomLeftCorner->setRect(0,205,100,100);
        bottomLeftCorner->setBrush(Qt::red);

        QGraphicsRectItem *bottomRightCorner = new QGraphicsRectItem;
        bottomRightCorner->setRect(400,205,100,100);
        bottomRightCorner->setBrush(Qt::red);
    // Line seperate parking sport:
        QGraphicsLineItem *topLeftline = new QGraphicsLineItem;
        topLeftline->setLine(200,-5,200,-100);
        topLeftline->setPen(Pline);

        QGraphicsLineItem *topRightline = new QGraphicsLineItem;
        topRightline->setLine(300,-5,300,-100);
        topRightline->setPen(Pline);

        QGraphicsLineItem *bottomLeftline = new QGraphicsLineItem;
        bottomLeftline->setLine(200,205,200,305);
        bottomLeftline->setPen(Pline);

        QGraphicsLineItem *bottomRightline = new QGraphicsLineItem;
        bottomRightline->setLine(300,205,300,305);
        bottomRightline->setPen(Pline);
    // Parking Point:
        QGraphicsRectItem *spot1 = new QGraphicsRectItem;
        spot1->setRect(152.5,-50,5,5);
        spot1->setBrush(Qt::black);

        QGraphicsRectItem *spot2 = new QGraphicsRectItem;
        spot2->setRect(252.5,-50,5,5);
        spot2->setBrush(Qt::black);

        QGraphicsRectItem *spot3 = new QGraphicsRectItem;
        spot3->setRect(352.5,-50,5,5);
        spot3->setBrush(Qt::black);

        QGraphicsRectItem *spot4 = new QGraphicsRectItem;
        spot4->setRect(152.5,250,5,5);
        spot4->setBrush(Qt::black);

        QGraphicsRectItem *spot5 = new QGraphicsRectItem;
        spot5->setRect(252.5,250,5,5);
        spot5->setBrush(Qt::black);

        QGraphicsRectItem *spot6 = new QGraphicsRectItem;
        spot6->setRect(352.5,250,5,5);
        spot6->setBrush(Qt::black);
    // Create Scene:
        QGraphicsScene *scene = new QGraphicsScene;

        scene->addItem(topRow);
        scene->addItem(middleRow);
        scene->addItem(bottomRow);

        scene->addItem(topLeftCorner);
        scene->addItem(topRightCorner);
        scene->addItem(bottomLeftCorner);
        scene->addItem(bottomRightCorner);

        scene->addItem(topLeftline);
        scene->addItem(topRightline);
        scene->addItem(bottomLeftline);
        scene->addItem(bottomRightline);

        scene->addItem(spot1);
        scene->addItem(spot2);
        scene->addItem(spot3);

        scene->addItem(spot4);
        scene->addItem(spot5);
        scene->addItem(spot6);

    // Vehicle Generator:
        Generator *generator = new Generator;
        generator->setScene(scene);
        //generator->getWestToEastVehicle();
        //generator->getVehicleToParking6EW();


        Path *path = new Path(scene);

    // Create timer:
        QTimer *timer = new QTimer;
        connect(timer,SIGNAL(timeout()),generator,SLOT(spawVehicleWE()));
        timer->start(1000);

        QTimer *timer1 = new QTimer;
        connect(timer1,SIGNAL(timeout()),generator,SLOT(spawVehicleEW()));
        timer1->start(2000);

        //QTimer *timer2 = new QTimer;
        //connect(timer2,SIGNAL(timeout()),generator,SLOT(getVehicleToParking1WE()));
        //timer2->start(3000);

        //QTimer *timer3 = new QTimer;
        //connect(timer3,SIGNAL(timeout()),generator,SLOT(getVehicleToParking2WE()));
        //timer3->start(3000);

/*
        QTimer *timer4 = new QTimer;
        connect(timer4,SIGNAL(timeout()),generator,SLOT(getVehicleToParking3WE()));
        timer4->start(3000);

        QTimer *timer5 = new QTimer;
        connect(timer5,SIGNAL(timeout()),generator,SLOT(getVehicleToParking4WE()));
        timer5->start(3500);

        QTimer *timer6 = new QTimer;
        connect(timer6,SIGNAL(timeout()),generator,SLOT(getVehicleToParking5WE()));
        timer6->start(4000);
*/
        //QTimer *timer7 = new QTimer;
        //connect(timer7,SIGNAL(timeout()),generator,SLOT(getVehicleToParking6WE()));
        //timer7->start(3000);

        //QTimer *timer8 = new QTimer;
        //connect(timer8,SIGNAL(timeout()),generator,SLOT(getVehicleToParking1EW()));
        //timer8->start(4000);

        //QTimer *timer9 = new QTimer;
        //connect(timer9,SIGNAL(timeout()),generator,SLOT(getVehicleToParking2EW()));
        //timer9->start(2000);
/*
        QTimer *timer10 = new QTimer;
        connect(timer10,SIGNAL(timeout()),generator,SLOT(getVehicleToParking3EW()));
        timer10->start(2500);

        QTimer *timer11 = new QTimer;
        connect(timer11,SIGNAL(timeout()),generator,SLOT(getVehicleToParking4EW()));
        timer11->start(3000);

        QTimer *timer12 = new QTimer;
        connect(timer12,SIGNAL(timeout()),generator,SLOT(getVehicleToParking5EW()));
        timer12->start(3500);

        QTimer *timer13 = new QTimer;
        connect(timer13,SIGNAL(timeout()),generator,SLOT(getVehicleToParking6EW()));
        timer13->start(4000);
*/
    // Add scene to Graphicsview:
        //QPainter painter;
        //QPainterPath *longPath = new QPainterPath;
        //longPath->moveTo(0,150);
        //longPath->quadTo(-100,150,-100,-150);

        //painter.drawPath(*longPath);
        //scene->addPath(*longPath);
        ui->graphicsView->setScene(scene);

}

MainWindow::~MainWindow()
{
    delete ui;
}

