#include "path.h"
#include <QDebug>
#include <QPainterPath>
#include <QPainter>
#include <QVector2D>
Path::Path()
{
        // drawing path to parking spot
          QPainter painter;

        // Straight path:
          QPainterPath *eastToWestPath = new QPainterPath;
          eastToWestPath->moveTo(0,150);
          eastToWestPath->quadTo(250,150,500,150);
          painter.drawPath(*eastToWestPath);
          for (float i = 0; i < 1; i+=0.01){
              //EastToWestPath->append(eastToWestPath->pointAtPercent(i));
              QVector2D *vector = new QVector2D(eastToWestPath->pointAtPercent(i).x(),eastToWestPath->pointAtPercent(i).y());
              //vector->setX(eastToWestPath->pointAtPercent(i).x());
              //vector->setY(eastToWestPath->pointAtPercent(i).y());
              EastToWestPath->append(*vector);
              //qDebug()<<"Path: "<<EastToWestPath->at(idx)->toPointF();idx++;
          }

          QPainterPath *westToEastPath = new QPainterPath;
          westToEastPath->moveTo(500,50);
          westToEastPath->quadTo(250,50,0,50);
          painter.drawPath(*westToEastPath);
          for (float i = 0; i < 1; i+=0.01){
              //WestToEastPath->append(westToEastPath->pointAtPercent(i));
              QVector2D *vector = new QVector2D;
              vector->setX(westToEastPath->pointAtPercent(i).x());
              vector->setY(westToEastPath->pointAtPercent(i).y());
              WestToEastPath->append(*vector);
              //qDebug()<<"Path: "<<WestToEastPath->at(idx)->toPointF();idx++;
          }

          // Path to parking spot for vehicles from West to East:
          QPainterPath *pathToparkingSpot1WE = new QPainterPath;
          pathToparkingSpot1WE->moveTo(500,50);
          pathToparkingSpot1WE->quadTo(152.5,50,152.5,-50);
          painter.drawPath(*pathToparkingSpot1WE);
          for (float i = 0; i < 1; i+=0.01){
              //ParkingSpot1WE->append(pathToparkingSpot1WE->pointAtPercent(i));
              QVector2D *vector = new QVector2D(pathToparkingSpot1WE->pointAtPercent(i));
              ParkingSpot1WE->append(*vector);
          }

          QPainterPath *pathToparkingSpot2WE = new QPainterPath;
          pathToparkingSpot2WE->moveTo(500,50);
          pathToparkingSpot2WE->quadTo(252.5,50,252.5,-50);
          painter.drawPath(*pathToparkingSpot2WE);
          for (float i = 0; i < 1; i+=0.01){
              //ParkingSpot2WE->append(pathToparkingSpot2WE->pointAtPercent(i));
              QVector2D *vector = new QVector2D(pathToparkingSpot2WE->pointAtPercent(i));
              ParkingSpot2WE->append(*vector);
          }

          QPainterPath *pathToparkingSpot3WE = new QPainterPath;
          pathToparkingSpot3WE->moveTo(500,50);
          pathToparkingSpot3WE->quadTo(352.5,50,352.5,-50);
          painter.drawPath(*pathToparkingSpot3WE);
          for (float i = 0; i < 1; i+=0.01){
              //ParkingSpot3WE->append(pathToparkingSpot3WE->pointAtPercent(i));
              QVector2D *vector = new QVector2D(pathToparkingSpot3WE->pointAtPercent(i));
              ParkingSpot3WE->append(*vector);
          }

          QPainterPath *pathToparkingSpot4WE = new QPainterPath;
          pathToparkingSpot4WE->moveTo(500,50);
          pathToparkingSpot4WE->quadTo(152.5,50,152.5,250);
          painter.drawPath(*pathToparkingSpot4WE);
          for (float i = 0; i < 1; i+=0.01){
              //ParkingSpot4WE->append(pathToparkingSpot4WE->pointAtPercent(i));
              QVector2D *vector = new QVector2D(pathToparkingSpot4WE->pointAtPercent(i));
              ParkingSpot4WE->append(*vector);
          }

          QPainterPath *pathToparkingSpot5WE = new QPainterPath;
          pathToparkingSpot5WE->moveTo(500,50);
          pathToparkingSpot5WE->quadTo(252.5,50,252.5,250);
          painter.drawPath(*pathToparkingSpot5WE);
          for (float i = 0; i < 1; i+=0.01){
              //ParkingSpot5WE->append(pathToparkingSpot5WE->pointAtPercent(i));
              QVector2D *vector = new QVector2D(pathToparkingSpot5WE->pointAtPercent(i));
              ParkingSpot5WE->append(*vector);
          }

          QPainterPath *pathToparkingSpot6WE = new QPainterPath;
          pathToparkingSpot6WE->moveTo(500,50);
          pathToparkingSpot6WE->quadTo(352.5,50,352.5,250);
          painter.drawPath(*pathToparkingSpot6WE);
          for (float i = 0; i < 1; i+=0.01){
              //ParkingSpot6WE->append(pathToparkingSpot6WE->pointAtPercent(i));
              QVector2D *vector = new QVector2D(pathToparkingSpot6WE->pointAtPercent(i));
              ParkingSpot6WE->append(*vector);
          }

          // Path to parking spot for vehicles from East to West:
          QPainterPath *pathToparkingSpot1EW = new QPainterPath;
          pathToparkingSpot1EW->moveTo(0,150);
          pathToparkingSpot1EW->quadTo(152.5,150,152.5,-50);
          painter.drawPath(*pathToparkingSpot1EW);
          for (float i = 0; i < 1; i+=0.01){
              //ParkingSpot1EW->append(pathToparkingSpot1EW->pointAtPercent(i));
              QVector2D *vector = new QVector2D(pathToparkingSpot1EW->pointAtPercent(i));
              ParkingSpot1EW->append(*vector);
          }

          QPainterPath *pathToparkingSpot2EW = new QPainterPath;
          pathToparkingSpot2EW->moveTo(0,150);
          pathToparkingSpot2EW->quadTo(252.5,150,252.5,-50);
          painter.drawPath(*pathToparkingSpot2EW);
          for (float i = 0; i < 1; i+=0.01){
              //ParkingSpot2EW->append(pathToparkingSpot2EW->pointAtPercent(i));
              QVector2D *vector = new QVector2D(pathToparkingSpot2EW->pointAtPercent(i));
              ParkingSpot2EW->append(*vector);
          }

          QPainterPath *pathToparkingSpot3EW = new QPainterPath;
          pathToparkingSpot3EW->moveTo(0,150);
          pathToparkingSpot3EW->quadTo(352.5,150,352.5,-50);
          painter.drawPath(*pathToparkingSpot3EW);
          for (float i = 0; i < 1; i+=0.01){
              //ParkingSpot3EW->append(pathToparkingSpot3EW->pointAtPercent(i));
              QVector2D *vector = new QVector2D(pathToparkingSpot3EW->pointAtPercent(i));
              ParkingSpot3EW->append(*vector);
          }

          QPainterPath *pathToparkingSpot4EW = new QPainterPath;
          pathToparkingSpot4EW->moveTo(0,150);
          pathToparkingSpot4EW->quadTo(152.5,150,152.5,250);
          painter.drawPath(*pathToparkingSpot4EW);
          for (float i = 0; i < 1; i+=0.01){
              //ParkingSpot4EW->append(pathToparkingSpot4EW->pointAtPercent(i));
              QVector2D *vector = new QVector2D(pathToparkingSpot4EW->pointAtPercent(i));
              ParkingSpot4EW->append(*vector);
          }

          QPainterPath *pathToparkingSpot5EW = new QPainterPath;
          pathToparkingSpot5EW->moveTo(0,150);
          pathToparkingSpot5EW->quadTo(252.5,150,252.5,250);
          painter.drawPath(*pathToparkingSpot5EW);
          for (float i = 0; i < 1; i+=0.01){
              //ParkingSpot5EW->append(pathToparkingSpot5EW->pointAtPercent(i));
              QVector2D *vector = new QVector2D(pathToparkingSpot5EW->pointAtPercent(i));
              ParkingSpot5EW->append(*vector);
          }

          QPainterPath *pathToparkingSpot6EW = new QPainterPath;
          pathToparkingSpot6EW->moveTo(0,150);
          pathToparkingSpot6EW->quadTo(352.5,150,352.5,250);
          painter.drawPath(*pathToparkingSpot6EW);
          for (float i = 0; i < 1; i+=0.01){
              //ParkingSpot6EW->append(pathToparkingSpot6EW->pointAtPercent(i));
                QVector2D *vector = new QVector2D(pathToparkingSpot6EW->pointAtPercent(i));
                ParkingSpot6EW->append(*vector);
          }
/*
      // these longPath below is just test:
          QPainterPath *longPath = new QPainterPath;
          longPath->moveTo(-100,-150);
          longPath->quadTo(-100,150,0,150);
          for (float i = 0; i < 1; i+=0.01){
              ParkingSpot6EW->append(longPath->pointAtPercent(i));
          }
*/

}
Path::Path(QGraphicsScene* scene)
{
          // drawing path to parking spot
          QPainter painter;
          painter.drawPoint(100,100);
          // Straight path:
          QPainterPath *eastToWestPath = new QPainterPath;
          eastToWestPath->moveTo(0,150);
          eastToWestPath->quadTo(250,150,500,150);
          painter.drawPath(*eastToWestPath);
          scene->addPath(*eastToWestPath);

          QPainterPath *westToEastPath = new QPainterPath;
          westToEastPath->moveTo(500,50);
          westToEastPath->quadTo(250,50,0,50);
          painter.drawPath(*westToEastPath);
          scene->addPath(*westToEastPath);

          // Path to parking spot for vehicles from West to East:
          QPainterPath *pathToparkingSpot1WE = new QPainterPath;
          pathToparkingSpot1WE->moveTo(500,50);
          pathToparkingSpot1WE->quadTo(152.5,50,152.5,-50);
          painter.drawPath(*pathToparkingSpot1WE);
          scene->addPath(*pathToparkingSpot1WE);

          QPainterPath *pathToparkingSpot2WE = new QPainterPath;
          pathToparkingSpot2WE->moveTo(500,50);
          pathToparkingSpot2WE->quadTo(252.5,50,252.5,-50);
          painter.drawPath(*pathToparkingSpot2WE);
          scene->addPath(*pathToparkingSpot2WE);

          QPainterPath *pathToparkingSpot3WE = new QPainterPath;
          pathToparkingSpot3WE->moveTo(500,50);
          pathToparkingSpot3WE->quadTo(352.5,50,352.5,-50);
          painter.drawPath(*pathToparkingSpot3WE);
          scene->addPath(*pathToparkingSpot3WE);

          QPainterPath *pathToparkingSpot4WE = new QPainterPath;
          pathToparkingSpot4WE->moveTo(500,50);
          pathToparkingSpot4WE->quadTo(152.5,50,152.5,250);
          painter.drawPath(*pathToparkingSpot4WE);
          scene->addPath(*pathToparkingSpot4WE);

          QPainterPath *pathToparkingSpot5WE = new QPainterPath;
          pathToparkingSpot5WE->moveTo(500,50);
          pathToparkingSpot5WE->quadTo(252.5,50,252.5,250);
          painter.drawPath(*pathToparkingSpot5WE);
          scene->addPath(*pathToparkingSpot5WE);

          QPainterPath *pathToparkingSpot6WE = new QPainterPath;
          pathToparkingSpot6WE->moveTo(500,50);
          pathToparkingSpot6WE->quadTo(352.5,50,352.5,250);
          painter.drawPath(*pathToparkingSpot6WE);
          scene->addPath(*pathToparkingSpot6WE);

          // Path to parking spot for vehicles from East to West:
          QPainterPath *pathToparkingSpot1EW = new QPainterPath;
          pathToparkingSpot1EW->moveTo(0,150);
          pathToparkingSpot1EW->quadTo(152.5,150,152.5,-50);
          painter.drawPath(*pathToparkingSpot1EW);
          scene->addPath(*pathToparkingSpot1EW);

          QPainterPath *pathToparkingSpot2EW = new QPainterPath;
          pathToparkingSpot2EW->moveTo(0,150);
          pathToparkingSpot2EW->quadTo(252.5,150,252.5,-50);
          painter.drawPath(*pathToparkingSpot2EW);
          scene->addPath(*pathToparkingSpot2EW);

          QPainterPath *pathToparkingSpot3EW = new QPainterPath;
          pathToparkingSpot3EW->moveTo(0,150);
          pathToparkingSpot3EW->quadTo(352.5,150,352.5,-50);
          painter.drawPath(*pathToparkingSpot3EW);
          scene->addPath(*pathToparkingSpot3EW);

          QPainterPath *pathToparkingSpot4EW = new QPainterPath;
          pathToparkingSpot4EW->moveTo(0,150);
          pathToparkingSpot4EW->quadTo(152.5,150,152.5,250);
          painter.drawPath(*pathToparkingSpot4EW);
          scene->addPath(*pathToparkingSpot4EW);

          QPainterPath *pathToparkingSpot5EW = new QPainterPath;
          pathToparkingSpot5EW->moveTo(0,150);
          pathToparkingSpot5EW->quadTo(252.5,150,252.5,250);
          painter.drawPath(*pathToparkingSpot5EW);
          scene->addPath(*pathToparkingSpot5EW);

          QPainterPath *pathToparkingSpot6EW = new QPainterPath;
          pathToparkingSpot6EW->moveTo(0,150);
          pathToparkingSpot6EW->quadTo(352.5,150,352.5,250);
          painter.drawPath(*pathToparkingSpot6EW);
          scene->addPath(*pathToparkingSpot6EW);
}

