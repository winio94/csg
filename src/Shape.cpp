#include "Shape.h"
#include "ComplexShape.h"
Shape::Shape()
{
    //ctor
}

Shape::~Shape()
{
    //dtor
}

ComplexShape Shape::operator+(Shape &s)
{
    return ComplexShape(this, &s, Operation::ADD);
}

ComplexShape Shape::operator-(Shape &s)
{
    return ComplexShape(this, &s, Operation::SUB);
}

ComplexShape Shape::operator&(Shape &s)
{
    return ComplexShape(this, &s, Operation::COMMON);
}

Shape & Shape::operator+=(Position & position)
{
    this->position = this->position + position;

    return *this;
}

Position Shape::getPosition()
{
    return this->position;
}
