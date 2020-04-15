#include "parkingspot.h"
#include<QDebug>
ParkingSpot::ParkingSpot()
{
    for (int i = 0; i < 3; ++i){
        spotPoint.setX(x);
        spotPoint.setY(y);

        spot1[i] = spotPoint;

        x += 100;
    }
    x = 152.5;
    for (int i = 0; i < 3; ++i){
        spotPoint.setX(x);
        spotPoint.setY(y2);

        spot2[i] = spotPoint;

        x += 100;
    }
    /*
    for (int var = 0; var < 3; ++var) {
        qDebug()<<spot1[var];
    }
    qDebug()<<"_____________________________";
    for (int var = 0; var < 3; ++var) {
        qDebug()<<spot2[var];
    }
    */
}
