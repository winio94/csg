#include "ComplexShape.h"
#include <iostream>
ComplexShape::ComplexShape()
{
    //ctor
}

ComplexShape::ComplexShape(Shape * s1, Shape * s2, Operation operation)
{
    this->s1 = s1;
    this->s2 = s2;
    this->operation = operation;
}

ComplexShape::~ComplexShape()
{
    //dtor
}

bool ComplexShape::isIn(Position * position)
{
    bool b1 = s1->isIn(position);
    bool b2 = s2->isIn(position);

    if(operation == Operation::ADD) {
        return (b1 || b2);
    } else if(operation == Operation::COMMON) {
        return (b1 && b2);
    } else if(operation == Operation::SUB) {
        return (b1 && !b2);
    }

}

ComplexShape & ComplexShape::operator+=(Position & position)
{
    this->s1->setPosition(this->s1->getPosition() + position);
    this->s2->setPosition(this->s2->getPosition() + position);
    std::cout<<"Changing position in complex shape: "<<std::endl;
    //this->position = this->position + position;
    return *this;
}
