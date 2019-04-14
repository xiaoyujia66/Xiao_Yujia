#include <iostream>
#include <iomanip>

using namespace std;

int celsius( int );
int fahrenheit( int );

int main()
{
    for( int i = 1; i < 4; i++ )
        cout << setw(7) << "celsius" << setw(12) << "fahrenheit";
    for( int t = 1; t < 25; t++ )
    {
        for( int k = 1; k <= 75; k += 25 )
            cout << setw(7) << i + k << setw(11) << fahrenheit(i + k);
    }
    cout << setw(64) << 100 << setw(11) << fahrenheit(100);

    cout << "\nCelsius of Fahrenheit temperatures: ";

    for( int t = 1; t < 4; t++ )
        cout << setw(10) << "Fahrenheit" << setw(9) << "Celsius";
    for( int i = 32; i < 77; i++)
    {
        for( int k = 1; k <= 135; k += 45 )
            cout << setw(10) << i + k << setw(8) << celsius(i + k);
    }
    cout << setw(67) << 212 << setw(8) << celsius(212);
}
int celsius( int fah )
{
    return static_cast< int >( 5/9 * (fah - 32) );
}

int fahrenheit( int cel )
{
    return static_cast< int >( 9/5 * cel + 32 );
}

