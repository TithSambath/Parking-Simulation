#ifndef PARKINGSPOT_H
#define PARKINGSPOT_H
#include<QPointF>

class ParkingSpot
{
public:
    // default constructor:
        ParkingSpot();

    // Data field:
        QPointF *spot1 = new QPointF[3];
        QPointF *spot2 = new QPointF[3];
private:
        float x = 152.5;
        float y = -50;
        float y2 = 250;
        QPointF spotPoint;

};

#endif // PARKINGSPOT_H
