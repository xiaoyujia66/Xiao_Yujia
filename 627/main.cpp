#include <iostream>

using namespace std;

double smallest( double, double, double );

int main()
{
    double a;
    double b;
    double c;

    cout << "Enter three integers: ";
    cin >> a >> b >> c;

    cout << "The smallest integer is " << smallest( a, b, c ) << endl;
}
double smallest( double d, double e, double f )
{
    if((d < e)&&(d < f))
        return d;
    else if((e < d)&&(e < f))
        return e;
    else
        return f;
}
