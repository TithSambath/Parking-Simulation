#include "vehicle.h"
#include <QDebug>
#include <QGraphicsScene>
#include <QtMath>
Vehicle::Vehicle(QVector<QVector2D>* Path)
{
    pathPoint = Path;
    QRect rect;
    rect.setRect(25,-15,50,30);
    setRect(rect);
    this->setX(25);
    this->setY(-15);
    //setTransformOriginPoint(this->x(),this->y());
    qDebug()<<transformOriginPoint();//exit(0);
    setBrush(Qt::black);
    flagPoint->setRect(0,0,1,1);
}
void Vehicle::drive()
{
    if (this->target < 100){
        flagPoint->setPos(pathPoint->at(target).toPointF());
        qDebug()<<"Car pos: "<< this->pos();
        qDebug()<<"Location pos: "<<pathPoint->at(target).toPointF();
        qDebug()<<"target: "<<target;
        if (this->collidesWithItem(flagPoint,Qt::IntersectsItemShape)){

            target++; // change target after toward it.
            qDebug()<<"Update.";

        }else{
            startEngine();
            vehiclePos.setX(this->pos().rx());
            vehiclePos.setY(this->pos().ry());
            qDebug()<<"VehiclePos: "<<vehiclePos.toPointF();
            vehiclePos.operator+=(displacement(vehiclePos,pathPoint->at(target)));
            setPos(vehiclePos.toPointF());
            this->setRotation(theataAngle * (180 /3.14));
        }

    }else {
        qDebug()<<"Car has been deleted ";
        timer->stop();
        delete timer;
        delete this;
    }
}
void Vehicle::searchForOptimalPath(){
    QGraphicsLineItem *displacement = new QGraphicsLineItem;
    displacement->setLine(this->pos().x() + 25,this->pos().y() + 15,parkingspot->spot1[i].x(),
                          parkingspot->spot1[i].y());

    //scene()->addItem(displacement);
    float Vx = this->pos().x() - parkingspot->spot1[i].x();
    float Vy = this->pos().y() - parkingspot->spot1[i].y();

    int distance = qSqrt(qPow(Vx,2) + qPow(Vy,2));

    qDebug()<<"Distance to Top "<<i<<" : "<<distance;

    QGraphicsLineItem *displacement2 = new QGraphicsLineItem;
    displacement2->setLine(this->pos().x() + 25,this->pos().y() + 15,parkingspot->spot2[i].x(),
                           parkingspot->spot2[i].y());

    //scene()->addItem(displacement2);
    Vx = this->pos().x() - parkingspot->spot2[i].x();
    Vy = this->pos().y() - parkingspot->spot2[i].y();

    int distance2 = qSqrt(qPow(Vx,2) + qPow(Vy,2));
    qDebug()<<"Distance to bottom "<<i<<" : "<<distance2;
    qDebug()<<"_________________________________";
}

QVector2D Vehicle::displacement(QVector2D currentPos, QVector2D goalPos)
{
    // Find movement on X and Y axis:
        QVector2D *VectorAB = new QVector2D;
        qDebug()<<currentPos;
        qDebug()<<goalPos;
        VectorAB->operator=(goalPos.operator-=(currentPos));
        qDebug()<<"Vector AB: "<<VectorAB->toPointF();
    // Find Phase to rotate the vehicle:
        theataAngle = qAtan(VectorAB->y()/VectorAB->x());
        qDebug()<<"theata: "<< theataAngle * 180/3.14;
    // movement:
        accelerate->operator=(VectorAB->normalized());
        velocity->operator=(*accelerate);
        velocity->operator*=(Vspeed);
            qDebug()<<"acc: "<<accelerate->toPointF();
            qDebug()<<"velocity: "<<velocity->toPointF();
    return *velocity;
}

void Vehicle::startEngine()
{
    speed_Acceleration();
}

void Vehicle::stopEngine()
{
    speed_Deacceleration();
}

void Vehicle::speed_Acceleration()
{
    Vspeed += acc;
}

void Vehicle::speed_Deacceleration()
{
    if (Vspeed != 0){
        Vspeed -= 0.1;
    }
}

void Vehicle::setPath(QVector<QVector2D> *Path)
{
    pathPoint = Path;
}

void Vehicle::setTimerOn(QTimer *timer, int time)
{
    this->timer = timer;
    connect(this->timer,SIGNAL(timeout()),this,SLOT(drive()));
    this->timer->start(time);
}
