#include <iostream>

using namespace std;

int integerPower( int, int );

int main()
{
    int base;
    int exponent;

    cout << "Enter base: ";
    cin >> base;
    cout << "Enter exponent: ";
    cin >> exponent;

    cout << base << " to the power " << exponent << " is: " << integerPower( base, exponent ) << endl;
}
int integerPower( int base, int exponent)
{
    int power = 1;

    for ( int i = 1; i <= exponent; i++ )
        power *= base;

    return power;
}
