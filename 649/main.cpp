#include <iostream>

double circleArea( double );

using namespace std;

int main()
{
    int r;

    cout << "Enter radius of the circle: ";
    cin >> r;

    cout << "The area of the circle is " << circleArea( r ) << endl;
}
inline double circleArea( double r )
{
    double pi = 3.14159;
    return pi * r * r;
}


