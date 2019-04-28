#include <iostream>
#include <iomanip>
#include <array>

using namespace std;

int main()
{
    array< int, 10 > counts = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };

    array< int, 15 > bonus;
    for ( size_t i = 0; i < bonus.size(); ++i )
        bonus[ i ] = bonus[ i ] + 1;

    array< int, 12 > monthlyTemperatures;

    double number;
    cout << "Enter twelve integers: ";
    cin >> number;

    cout << "Element" << setw( 13 ) << "Value" << endl;
    for ( size_t i = 0; i < monthlyTemperatures.size(); ++i )
        cout << setw( 7 ) << i << setw( 13 ) << monthlyTemperatures[ i ] << endl;

    array< int, 5 > bestScores;
    for ( size_t i = 0; i < bestScores.size(); ++i )
        cout << setw( 7 ) << i << setw( 13 ) << bestScores[ i ] << endl;
}
