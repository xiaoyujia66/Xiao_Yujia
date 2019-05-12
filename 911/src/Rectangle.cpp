#include "Rectangle.h"

Rectangle::Rectangle( double w, double l )
{
    setwidth( w );
    setlength( l );
}

void Rectangle::setwidth( double w )
{
    width = ( w > 0.0 && w < 20.0 ) ? : 1.0;
}

void Rectangle::setlength( double l )
{
    length = ( l > 0.0 && l < 20.0 ) ? : 1.0;
}

double Rectangle::getwidth()
{
    return width;
}

double Rectangle::getlength()
{
    return length;
}

double Rectangle::perimeter()
{
    return 2 * ( width + length );
}

double Rectangle::area()
{
    return width * length;
}
