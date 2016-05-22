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

Position Position::operator+(Position & p)
{
    return Position(this->getX() + p.getX(), this->getY() + p.getY());
}

Position Position::operator-(Position & p)
{
    return Position(this->getX() - p.getX(), this->getY() - p.getY());
}

Position Position::operator*(int x)
{
    return Position(this->getX() * x, this->getY() * x);
}

Position Position::operator+=(Position & p)
{
    return Position(this->getX() + p.getX(), this->getY() + p.getY());
}
