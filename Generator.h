#ifndef GENERATOR_H
#define GENERATOR_H
#include "vehicle.h"
#include <QGraphicsScene>
class Generator: public QObject
{
    Q_OBJECT
public:
    Generator();
    QGraphicsScene *scene;
    void setScene(QGraphicsScene *scene);
    void addtoScene(Vehicle* v);
    Path *path = new Path;

public slots:
    void getEastToWestVehicle();
    void getWestToEastVehicle();

    void getVehicleToParking1WE();
    void getVehicleToParking2WE();
    void getVehicleToParking3WE();
    void getVehicleToParking4WE();
    void getVehicleToParking5WE();
    void getVehicleToParking6WE();

    void getVehicleToParking1EW();
    void getVehicleToParking2EW();
    void getVehicleToParking3EW();
    void getVehicleToParking4EW();
    void getVehicleToParking5EW();
    void getVehicleToParking6EW();

    void spawVehicleWE();
    void spawVehicleEW();

};

#endif // GENERATOR_H
