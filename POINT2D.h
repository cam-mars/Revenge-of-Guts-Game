#include <iostream>
#include <cmath>
#ifndef POINT2D.h
#define POINT2D.h

using namespace std;

class Point2D {
private:
double x, y;

public:
Point2D(double x_coord = 0.0, double y_coord = 0.0);
void setX(double x_coord);
void setY(double y_coord);
double getX() const;
double getY() const;
double distanceTo(const Point2D& other) const;
void print() const;
};

#endif
