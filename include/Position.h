#ifndef POSITION_H
#define POSITION_H


class Position
{
    public:
        Position();
        Position(int x, int y);
        virtual ~Position();
        int getX();
        int getY();
    protected:

    private:
        int x;
        int y;
};

#endif // POSITION_H
