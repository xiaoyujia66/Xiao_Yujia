#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

double hypotenuse( double, double );

int main()
{
    double a;
    double b;

    cout << "Enter two right angles: ";
    cin >> a >> b;

    cout << "The length of the hypotenuse is " << hypotenuse( a, b ) << endl;
}
double hypotenuse( double a, double b )
{
    return sqrt( a * a + b * b );
}
