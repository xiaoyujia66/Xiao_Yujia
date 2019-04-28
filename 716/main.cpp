#include <iostream>
#include <iomanip>
#include <array>

using namespace std;

int main()
{
    array< int, 11 > a;

    int x;
    int y;
    int z;

    for ( int i = 0; i < 36000; ++i )
    {
        x = x + 1;
        y = y + 1;
        z = x + y;

        if ( z == 2 )
            a[ 0 ]++;
        else if ( z == 3 )
            a[ 1 ]++;
        else if ( z == 4 )
            a[ 2 ]++;
        else if ( z == 5 )
            a[ 3 ]++;
        else if ( z == 6 )
            a[ 4 ]++;
        else if ( z == 7 )
            a[ 5 ]++;
        else if ( z == 8 )
            a[ 6 ]++;
        else if ( z == 9 )
            a[ 7 ]++;
        else if ( z == 10 )
            a[ 8 ]++;
        else if ( z == 11 )
            a[ 9 ]++;
        else if ( z == 12 )
            a[ 10 ]++;
        }

        cout << setw( 7 ) << "\n2" << setw( 13 ) << a[ 0 ]
            << setw( 7 ) << "\n3" << setw( 13 ) << a[ 1 ]
            << setw( 7 ) << "\n4" << setw( 13 ) << a[ 2 ]
            << setw( 7 ) << "\n5" << setw( 13 ) << a[ 3 ]
            << setw( 7 ) << "\n6" << setw( 13 ) << a[ 4 ]
            << setw( 7 ) << "\n7" << setw( 13 ) << a[ 5 ]
            << setw( 7 ) << "\n8" << setw( 13 ) << a[ 6 ]
            << setw( 7 ) << "\n9" << setw( 13 ) << a[ 7 ]
            << setw( 7 ) << "\n10" << setw( 13 ) << a[ 8 ]
            << setw( 7 ) << "\n11" << setw( 13 ) << a[ 9 ]
            << setw( 7 ) << "\n12" << setw( 13 ) << a[ 10 ];
 }
