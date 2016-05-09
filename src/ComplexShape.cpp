#include "ComplexShape.h"

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

