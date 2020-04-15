#ifndef PATH_H
#define PATH_H
#include <QVector>
#include <QPointF>
#include <QList>
#include <QGraphicsScene>
class Path
{
public:
    // default constructor:
    Path();
    Path(QGraphicsScene* scene);
    // Path Point Coordinate in Plane:
    QVector<QVector2D> *EastToWestPath = new QVector<QVector2D>;
    QVector<QVector2D> *WestToEastPath = new QVector<QVector2D>;

    QVector<QVector2D> *ParkingSpot1WE = new QVector<QVector2D>;
    QVector<QVector2D> *ParkingSpot2WE = new QVector<QVector2D>;
    QVector<QVector2D> *ParkingSpot3WE = new QVector<QVector2D>;
    QVector<QVector2D> *ParkingSpot4WE = new QVector<QVector2D>;
    QVector<QVector2D> *ParkingSpot5WE = new QVector<QVector2D>;
    QVector<QVector2D> *ParkingSpot6WE = new QVector<QVector2D>;

    QVector<QVector2D> *ParkingSpot1EW = new QVector<QVector2D>;
    QVector<QVector2D> *ParkingSpot2EW = new QVector<QVector2D>;
    QVector<QVector2D> *ParkingSpot3EW = new QVector<QVector2D>;
    QVector<QVector2D> *ParkingSpot4EW = new QVector<QVector2D>;
    QVector<QVector2D> *ParkingSpot5EW = new QVector<QVector2D>;
    QVector<QVector2D> *ParkingSpot6EW = new QVector<QVector2D>;

};

#endif // PATH_H
