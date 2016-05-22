#include "ComplexShape.h"
#include <iostream>

ComplexShape::ComplexShape(Shape & s1, Shape & s2, Operation operation) : s1(s1), s2(s2)
{
    this->operation = operation;
}

ComplexShape::~ComplexShape()
{
    //dtor
}

bool ComplexShape::isIn(Position * position)
{
    bool b1 = s1.isIn(position);
    bool b2 = s2.isIn(position);

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
    this->s1 += position;
    this->s2 += position;
    std::cout<<"Changing position in complex shape: "<<std::endl;
    //this->position = this->position + position;
    return *this;
}
