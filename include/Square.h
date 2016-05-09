#ifndef SQUARE_H
#define SQUARE_H
#include "Shape.h"
#include "Position.h"

class Square : public Shape
{
    public:
        Square();
        Square(Position position, int a);
        virtual ~Square();

    protected:
        bool isIn(Position * position);
    private:
        int a;
};

#endif // SQUARE_H
