#include <iostream>
#include "Rectangle.h"

using namespace std;

int main()
{
    Point x( 5.0, 1.0 );
    Point y( 5.0, 3.0 );
    Point z( 1.0, 3.0 );

    Rectangle rectangles[ 4 ];

    cout << "length = " << rectangle[ i ].length();
    cout << "\nwidth = " << rectangle[ i ].width();
    rectangles[ i ].perimeter();
    rectangles[ i ].area();
    cout << "The rectangle " << ( rectangles[ i ].square() ? " is " : " is not " )
        << "a square."
}
