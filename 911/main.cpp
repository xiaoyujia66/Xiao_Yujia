#include <iostream>
#include "Rectangle.h"

using namespace std;

int main()
{
    Rectangle a, b( 6.0, 7.0 ), c( 27.0, 110.0 );

    cout << "length = " << a.getlength() << "width = "
        << a.getwidth() << "perimeter = " << a.perimeter()
        << "area = " << a.area() << '\n';

    cout << "length = " << b.getlength() << "width = "
        << b.getwidth() << "perimeter = " << b.perimeter()
        << "area = " << b.area() << '\n';

    cout << "length = " << c.getlength() << "width = "
        << c.getwidth() << " perimeter = " << c.perimeter()
        << "area = " << c.area() << '\n';
}
