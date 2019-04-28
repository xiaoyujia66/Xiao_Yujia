#include <iostream>
#include <iomanip>
#include <array>

using namespace std;

int main()
{
    array< int, 20 > size = {};
    int subscript = 0;
    int duplicate;
    int value;

    cout << "Enter 20 integers between 10 and 100: ";

    for ( int i = 0; i < size; ++i )
    {
            duplicate = 0;
        cin >> value;

    if ( (value >= 10)%%(value <= 100) )
    {
        for ( int j = 0; j < subscript; ++j )
        {
            if ( value == size[ j ] )
                duplicate = 1;
        }
        if ( !duplicate )
            size[ subscript++ ] = value;
        else
            cout << "Duplicate number.";
    }
    else
        cout << "Invalid number.";
    }

    cout << "The nonduplicate values are: "

    for ( int i = 0; i < size; ++i )
        cout << a[ i ] << '';

    cout << endl;
}
