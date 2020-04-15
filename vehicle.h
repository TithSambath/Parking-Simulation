#ifndef VEHICLE_H
#define VEHICLE_H
#include <QGraphicsRectItem>
#include <QTimer>
#include <path.h>
#include <QList>
#include <parkingspot.h>
#include <QRandomGenerator>
#include <QVector2D>
class Vehicle: public QObject, public QGraphicsRectItem
{
    Q_OBJECT
public:
    // default constructor:
        Vehicle(QVector<QVector2D> *Path);
        void setPath(QVector<QVector2D> *Path);
        QVector<QVector2D> *pathPoint = new QVector<QVector2D>;
        QGraphicsRectItem *flagPoint = new  QGraphicsRectItem;
        void setTimerOn(QTimer *timer,int time);
private:
    // data field:
        float force = 0.01;
        float acc = force;
        float theataAngle;
        int i = 0;
        float Vspeed = 0;

        int target = 1;
        ParkingSpot *parkingspot = new ParkingSpot;
        QVector2D* velocity = new QVector2D;
        QVector2D* accelerate = new QVector2D;
        QVector2D vehiclePos;
        //QVector2D *vehicleVector = new QVector2D;
        //QVector2D *locationVector = new QVector2D;
        QTimer *timer;

    // method field:
        void searchForOptimalPath();
        QVector2D displacement(QVector2D currentPos, QVector2D goalPos);
        void startEngine();
        void stopEngine();
        void speed_Acceleration();
        void speed_Deacceleration();

// slots method field:
signals:
    void onTheWay();
public slots:
    void drive();

};

#endif // VEHICLE_H
