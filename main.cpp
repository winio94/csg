#include <iostream>
#include "Circle.h"
#include "Position.h"
#include "Square.h"
#include "ComplexShape.h"
#include "Operation.h"
using namespace std;

int main()
{

    ///////////////////////////////POINT IN SHAPES TESTS//////////////////////////////////////////
    cout << "11111111111111111111111111111111111111" << endl;
    Circle circle(Position(-5,4), 4);
    Square square(Position(-1, 7), 4);
    ComplexShape complex1(&circle, &square, Operation::SUB);

    Position point1(-7,7);
    Position point2(-2, 6);
    Position point3(3,4);
    Position point4(-3,5);
    cout << "Is point1 in complex1 : " << complex1.isIn( &point1)<<endl;
    cout << "Is point2 in complex1 : " << complex1.isIn( &point2)<<endl;
    cout << "Is point3 in complex1 : " << complex1.isIn( &point3)<<endl;
    cout << "Is point4 in complex1 : " << complex1.isIn( &point4)<<endl<<endl<<endl;
    cout << "11111111111111111111111111111111111111" << endl;

    Square square2(Position(1,10), 6);
    Square square3(Position(9,10), 14);
    ComplexShape coAdd(&square2, &square3, Operation::ADD);
    ComplexShape coSub(&square2, &square3, Operation::SUB);
    ComplexShape coCommon(&square2, &square3, Operation::COMMON);

    Position A(8,5);
    Position B(-6,2);
    Position C(3,12);
    Position D(2,7);
    Position E(3,8);
    cout << "Is A in coAdd : " << coAdd.isIn( &A)<<endl;
    cout << "Is B in coAdd : " << coAdd.isIn( &B)<<endl;
    cout << "Is C in coAdd : " << coAdd.isIn( &C)<<endl;
    cout << "Is A in coSub : " << coSub.isIn( &A)<<endl;
    cout << "Is B in coSub : " << coSub.isIn( &B)<<endl;
    cout << "Is C in coSub : " << coSub.isIn( &C)<<endl;
    cout << "Is A in coCommon : " << coCommon.isIn( &A)<<endl;
    cout << "Is B in coCommon : " << coCommon.isIn( &B)<<endl;
    cout << "Is C in coCommon : " << coCommon.isIn( &C)<<endl<<endl<<endl;;


    Circle circle1(Position(3,2), 7);
    Circle circle2(Position(-5, 4), 4);
    //circle1 += A; TODO
    //przesuwanie ksztaltow a potem komplex ksztaltow które przesuwaj¹ rekurencyjnie ksztatly o zadany wektor
    ComplexShape complexCircles(&circle1, &circle2, Operation::SUB);
    ComplexShape complexFromTwoComplexSub(&complexCircles,&coCommon, Operation::SUB);
    ComplexShape complexFromTwoComplexCommon(&complexCircles,&coCommon, Operation::COMMON);

    cout << "Is D in complexFromTwoComplexSub : " << complexFromTwoComplexSub.isIn( &D)<<endl;
    cout << "Is D in complexFromTwoComplexCommon : " << complexFromTwoComplexCommon.isIn( &D)<<endl;
    cout << "Is E in complexFromTwoComplexSub : " << complexFromTwoComplexSub.isIn( &E)<<endl;
    cout << "Is E in complexFromTwoComplexCommon : " << complexFromTwoComplexCommon.isIn( &E)<<endl<<endl<<endl;;

    ///////////////////////////////OPERATORS AND SHAPES TEST//////////////////////////////////////////

    ComplexShape complex11 = circle - square;
    cout << "11111111111111111111111111111111111111" << endl;
    cout << "Is point1 in complex11 : " << complex11.isIn( &point1)<<endl;
    cout << "Is point2 in complex11 : " << complex11.isIn( &point2)<<endl;
    cout << "Is point3 in complex11 : " << complex11.isIn( &point3)<<endl;
    cout << "Is point4 in complex11 : " << complex11.isIn( &point4)<<endl<<endl<<endl;
    cout << "11111111111111111111111111111111111111" << endl;
    ComplexShape complex12 = circle & square;
    cout << "22222222222222222222222222222222222222" << endl;
    cout << "Is point1 in complex12 : " << complex12.isIn( &point1)<<endl;
    cout << "Is point2 in complex12 : " << complex12.isIn( &point2)<<endl;
    cout << "Is point3 in complex12 : " << complex12.isIn( &point3)<<endl;
    cout << "Is point4 in complex12 : " << complex12.isIn( &point4)<<endl<<endl<<endl;
    cout << "22222222222222222222222222222222222222" << endl;
    ComplexShape complex13 = complex11 + complex12;
    cout << "33333333333333333333333333333333333333" << endl;
    cout << "Is point1 in complex13 : " << complex13.isIn( &point1)<<endl;
    cout << "Is point2 in complex13 : " << complex13.isIn( &point2)<<endl;
    cout << "Is point3 in complex13 : " << complex13.isIn( &point3)<<endl;
    cout << "Is point4 in complex13 : " << complex13.isIn( &point4)<<endl<<endl<<endl;
    cout << "33333333333333333333333333333333333333" << endl;

    ///////////////////////////////OPERATORS ON POSITIONS//////////////////////////////////////////
    cout << "Point A:  x=" << A.getX() << ", y=" <<A.getY() <<endl;
    A = A * 5;
    cout << "Point A:  x=" << A.getX() << ", y=" <<A.getY() <<endl<<endl<<endl;

    cout << "Point A:  x=" << A.getX() << ", y=" <<A.getY() <<endl;
    cout << "Point B:  x=" << B.getX() << ", y=" <<B.getY() <<endl;
    B = B + A;
    cout << "Point A:  x=" << A.getX() << ", y=" <<A.getY() <<endl;
    cout << "Point B:  x=" << B.getX() << ", y=" <<B.getY() <<endl<<endl<<endl;

    cout << "Point A:  x=" << A.getX() << ", y=" <<A.getY() <<endl;
    cout << "Point B:  x=" << B.getX() << ", y=" <<B.getY() <<endl;
    B = A - B;
    cout << "Point A:  x=" << A.getX() << ", y=" <<A.getY() <<endl;
    cout << "Point B:  x=" << B.getX() << ", y=" <<B.getY() <<endl;

    ///////////////////////////////OPERATORS ON POSITIONS AND SHAPES//////////////////////////////////////////
    cout << "circle position: ("<< circle1.getPosition().getX() << "," << circle1.getPosition().getY() << ")" <<endl;
    circle1 += A;
    cout << "circle position: ("<< circle1.getPosition().getX() << "," << circle1.getPosition().getY() << ")" <<endl;

    return 0;
}
