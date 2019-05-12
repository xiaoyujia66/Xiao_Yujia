#include <iostream>
#include "Rectangle.h"

Rectangle::Rectangle( Point a, Point b, Point c, Point d )
{
    setCdi( a, b, c, d )
}

void Rectangle::setCdi( Point p1, Point p2, Point p3, Point p4 )
{
    point1 = p1;
    point2 = p2;
    point3 = p3;
    point4 = p4;
}

double Rectangle::length()
{
    double side1 = fabs ( point4 - point1 );
    double side2 = fabs ( point2 - point1 );
    double length = ( side1 > side2 ) ? side1 : side2;
    return length;
}

double Rectangle::width()
{
    double side1 = fabs ( point4 - point1 );
    double side2 = fabs ( point2 - point1 );
    double width = ( side1 < side2 ) ? side1 : side2;
    return width;
}

void Rectangle::peimeter()
{
    cout << fixed << "\nThe perimeter is " << setprecision( 1 )
        << 2 * ( length() + width() ) << endl;
}

void Rectangle::area()
{
    cout << fixed << "The area is " << setprecision( 1 )
        << length() * width << endl;
}
