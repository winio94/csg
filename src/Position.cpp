#include "Position.h"

Position::Position()
{
    //ctor
}

Position::Position(int x, int y)
{
    this->x = x;
    this->y = y;
}

Position::~Position()
{
    //dtor
}

int Position::getX()
{
    return this->x;
}

int Position::getY()
{
    return this->y;
}
