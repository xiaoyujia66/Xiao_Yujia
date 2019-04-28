#include <iostream>
#include <iomanip>
#include <array>

using namespace std;

int main()
{
    array< int, 7 > alphabet;

    cout << "Element" << setw( 13 ) << "Value" << endl;

    cout << setw( 7 ) << 6 << setw( 13 ) << alphabet[ 6 ] << endl;
}
