#include "Circle.h"
#include <math.h>
#include <cstdlib>
Circle::Circle()
{
    //ctor
}

Circle::Circle(Position position, int r)
{
    this->position = position;
    this->r = r;
}
Circle::~Circle()
{
    //dtor
}

bool Circle::isIn( Position * position)
{
    int pointX = position->getX();
    int pointY = position->getY();

    int thisX = this->position.getX();
    int thisY = this->position.getY();

    if(pow(pointX - thisX, 2) + pow(pointY - thisY, 2) <= pow(this->r, 2)) {
        return true;
    } else {
        return false;
    }
}
