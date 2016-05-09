#ifndef CIRCLE_H
#define CIRCLE_H
#include "Shape.h"
#include "Position.h"

class Circle : public Shape
{
    public:
        Circle();
        Circle(Position position, int r);
        virtual ~Circle();
        bool isIn(Position * position);
    protected:

    private:
        int r;
};

#endif // CIRCLE_H
