#include "Square.h"

Square::Square()
{
    //ctor
}

Square::Square(Position position, int a)
{
    this->position = position;
    this->a = a;
}

Square::~Square()
{
    //dtor
}
bool Square::isIn( Position * position)
{
    Position topLeft = Position((this->position.getX() - a/2), (this->position.getY() + a/2));
    Position topRight = Position((this->position.getX() + a/2), (this->position.getY()) + a/2);
    Position bottomLeft = Position((this->position.getX() - a/2), (this->position.getY() - a/2));

    int positionX = position->getX();
    int positionY = position->getY();

    bool isHorizontally = ((positionX >= topLeft.getX()) && (positionX <= topRight.getX()));
    bool isVertically = ((positionY >= bottomLeft.getY()) && (positionY <= topLeft.getY()));

    return (isHorizontally && isVertically);
}
