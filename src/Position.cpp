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

Position Position::operator+(Position & s)
{
    return Position(this->getX() + s.getX(), this->getY() + s.getY());
}

Position Position::operator-(Position & s)
{
    return Position(this->getX() - s.getX(), this->getY() - s.getY());
}

Position Position::operator*(int x)
{
    return Position(this->getX() * x, this->getY() * x);
}
