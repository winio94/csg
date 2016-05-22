#ifndef COMPLEXSHAPE_H
#define COMPLEXSHAPE_H
#include "Shape.h"
#include "Operation.h"

class Shape;

class ComplexShape : public Shape
{
    public:
        Shape & s1;
        Shape & s2;
        ComplexShape(Shape & s1, Shape & s2, Operation operation);
        virtual ~ComplexShape();
        bool isIn(Position * position);
        ComplexShape & operator+=(Position & position);
    protected:

    private:

};
#endif // COMPLEXSHAPE_H
