#include <iostream>

using namespace std;

double mathlibrary( double, double );

int main()
{
    double x;
    double y;

    cout << "Enter two integers: ";
    cin >> x >> y;

    cout << "The result is " << mathlibrary( x, y ) << endl;
}
double mathlibrary( double a, double b )
{
    if( b < 0 )
    {
        a *= -1;
        b *= -1;
    }
    if( b == 1 )
        return a;
    else
        return a + mathlibrary( a, b - 1 );
}

