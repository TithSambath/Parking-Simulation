#include "Generator.h"
#include <QDebug>
Generator::Generator()
{

}

void Generator::setScene(QGraphicsScene *scene)
{
   this->scene = scene;
}

void Generator::addtoScene(Vehicle* v)
{
    scene->addItem(v);
}

void Generator::getEastToWestVehicle()
{
    Vehicle* v = new Vehicle(path->EastToWestPath);
    v->setPos(0,150);
    // set timer to make vehicle move forward:
        QTimer *timer = new QTimer;
        v->setTimerOn(timer,10);
        qDebug()<<"EastToWestVehicle is Created";
        scene->addItem(v);
}

void Generator::getWestToEastVehicle()
{
    Vehicle* v = new Vehicle(path->WestToEastPath);
    v->setPos(500,50);
    // set timer to make vehicle move forward:
        QTimer *timer = new QTimer;
        v->setTimerOn(timer,10);
        qDebug()<<"WestToEastVehicle is Created";
        scene->addItem(v);
}

void Generator::getVehicleToParking1WE()
{
    Vehicle* v = new Vehicle(path->ParkingSpot1WE);
    v->setPos(500,50);
    // set timer to make vehicle move forward:
        QTimer *timer = new QTimer;
        v->setTimerOn(timer,10);
        qDebug()<<"WestToEastVehicle is Created";
        scene->addItem(v);
}

void Generator::getVehicleToParking2WE()
{
    Vehicle* v = new Vehicle(path->ParkingSpot2WE);
    v->setPos(500,50);
    // set timer to make vehicle move forward:
        QTimer *timer = new QTimer;
        v->setTimerOn(timer,10);
        qDebug()<<"WestToEastVehicle is Created";
        scene->addItem(v);
}

void Generator::getVehicleToParking3WE()
{
    Vehicle* v = new Vehicle(path->ParkingSpot3WE);
    v->setPos(500,50);
    // set timer to make vehicle move forward:
        QTimer *timer = new QTimer;
        v->setTimerOn(timer,10);
        qDebug()<<"WestToEastVehicle is Created";
        scene->addItem(v);
}

void Generator::getVehicleToParking4WE()
{
    Vehicle* v = new Vehicle(path->ParkingSpot4WE);
    v->setPos(500,50);
    // set timer to make vehicle move forward:
        QTimer *timer = new QTimer;
        v->setTimerOn(timer,10);
        qDebug()<<"WestToEastVehicle is Created";
        scene->addItem(v);
}

void Generator::getVehicleToParking5WE()
{
    Vehicle* v = new Vehicle(path->ParkingSpot5WE);
    v->setPos(500,50);
    // set timer to make vehicle move forward:
        QTimer *timer = new QTimer;
        v->setTimerOn(timer,10);
        qDebug()<<"WestToEastVehicle is Created";
        scene->addItem(v);
}

void Generator::getVehicleToParking6WE()
{
    Vehicle* v = new Vehicle(path->ParkingSpot6WE);
    v->setPos(500,50);
    // set timer to make vehicle move forward:
        QTimer *timer = new QTimer;
        v->setTimerOn(timer,10);
        qDebug()<<"WestToEastVehicle is Created";
        scene->addItem(v);
}

void Generator::getVehicleToParking1EW()
{
    Vehicle* v = new Vehicle(path->ParkingSpot1EW);
    v->setPos(0,150);
    // set timer to make vehicle move forward:
        QTimer *timer = new QTimer;
        v->setTimerOn(timer,10);
        qDebug()<<"WestToEastVehicle is Created";
        scene->addItem(v);
}

void Generator::getVehicleToParking2EW()
{
    Vehicle* v = new Vehicle(path->ParkingSpot2EW);
    v->setPos(0,150);
    // set timer to make vehicle move forward:
        QTimer *timer = new QTimer;
        v->setTimerOn(timer,10);
        qDebug()<<"WestToEastVehicle is Created";
        scene->addItem(v);
}

void Generator::getVehicleToParking3EW()
{
    Vehicle* v = new Vehicle(path->ParkingSpot3EW);
    v->setPos(0,150);
    // set timer to make vehicle move forward:
        QTimer *timer = new QTimer;
        v->setTimerOn(timer,10);
        qDebug()<<"WestToEastVehicle is Created";
        scene->addItem(v);
}

void Generator::getVehicleToParking4EW()
{
    Vehicle* v = new Vehicle(path->ParkingSpot4EW);
    v->setPos(0,150);
    // set timer to make vehicle move forward:
        QTimer *timer = new QTimer;
        v->setTimerOn(timer,10);
        qDebug()<<"WestToEastVehicle is Created";
        scene->addItem(v);
}

void Generator::getVehicleToParking5EW()
{
    Vehicle* v = new Vehicle(path->ParkingSpot5EW);
    v->setPos(0,150);
    // set timer to make vehicle move forward:
        QTimer *timer = new QTimer;
        v->setTimerOn(timer,10);
        qDebug()<<"WestToEastVehicle is Created";
        scene->addItem(v);
}

void Generator::getVehicleToParking6EW()
{
    Vehicle* v = new Vehicle(path->ParkingSpot6EW);
    v->setPos(0,150);
    // set timer to make vehicle move forward:
        QTimer *timer = new QTimer;
        v->setTimerOn(timer,10);
        qDebug()<<"WestToEastVehicle is Created";
        scene->addItem(v);
}

void Generator::spawVehicleWE()
{
    switch (qrand() % 7) {
    case 1: getWestToEastVehicle();break;
    case 2: getVehicleToParking1WE();break;
    case 3: getVehicleToParking2WE();break;
    case 4: getVehicleToParking3WE();break;
    case 5: getVehicleToParking4WE();break;
    case 6: getVehicleToParking5WE();break;
    case 7: getVehicleToParking6WE();break;
    }
}

void Generator::spawVehicleEW()
{
    switch (qrand() % 7) {
    case 1: getEastToWestVehicle();break;
    case 2: getVehicleToParking1EW();break;
    case 3: getVehicleToParking2EW();break;
    case 4: getVehicleToParking3EW();break;
    case 5: getVehicleToParking4EW();break;
    case 6: getVehicleToParking5EW();break;
    case 7: getVehicleToParking6EW();break;
    }
}

