#include <iostream>
#include <iomanip>
#include <array>

using namespace std;

int main()
{
    array< int, 5 > values = { 8, 8, 8, 8, 8 };

    cout << "Element" << setw( 13 ) << "Value" << endl;

    for ( size_t i = 0; i < values.size(); ++i )
        cout << setw( 7 ) << i << setw( 13 ) << values[ i ] << endl;
}
