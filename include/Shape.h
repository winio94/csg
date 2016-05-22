#ifndef SHAPE_H
#define SHAPE_H
#include "Position.h"
#include "Operation.h"

class ComplexShape;

class Shape
{
    public:
        Shape();
        virtual ~Shape();
        virtual bool isIn(Position * position) = 0;
        ComplexShape operator+(Shape & s);
        ComplexShape operator-(Shape & s);
        ComplexShape operator&(Shape & s);
        Shape & operator+=(Position & position);
        Position getPosition();
    protected:
        Operation operation;
        Position position;
        void setPosition(Position position);
    private:
};

#endif // SHAPE_H
