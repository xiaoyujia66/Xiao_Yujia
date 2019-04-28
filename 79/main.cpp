#include <iostream>
#include <iomanip>
#include <array>

using namespace std;

const size_t rows = 2;
const size_t columns = 3;

int main()
{
    int smallest;
    int sum;

    array< array< int, columns >, rows > t = {1, 2, 3, 4, 5, 6};

    t[ 1 ][ 2 ] = 0;

    t[ 0 ][ 0 ] = 0;
    t[ 0 ][ 1 ] = 0;
    t[ 0 ][ 2 ] = 0;
    t[ 1 ][ 0 ] = 0;
    t[ 1 ][ 1 ] = 0;
    t[ 2 ][ 0 ] = 0;
    t[ 2 ][ 1 ] = 0;
    t[ 2 ][ 2 ] = 0;

    for ( int i = 0; i <= 1; ++i )
    {
        for ( int j = 0; j <= 2; ++j )
            t[ i ][ j ] = 0;
    }

    for ( auto &A : t )
    {
        for ( auto &a : A )
            a = 0;
    }
    for ( int k = 0; k <= 1; ++k )
    {
        for ( int l = 0; l <= 2; ++l )
            cin >> t[ k ][ l ];
    }

    for ( int p = 0; p <= 1; ++p )
    {
        for ( int q = 0; q <= 2; ++q )
        {
            if ( smallest > t[ p ][ q ] )
                smallest = t[ p ][ q ];
        }
    }
    cout << "The smallest is: " << smallest;

    for ( int c = 0; c <= 2; ++c )
        cout << t[ 0 ][ c ];
    for ( int w = 0; w <= 2; ++w )
        sum = sum + t[ 0 ][ w ];
    cout << "Sum is: " << sum;
    cout << setw( 7 ) << "\ncolumns0" << setw( 13 ) << "columns1" << setw( 13 ) << "columns2";
    cout << "\nrow0" << setw( 3 ) << t[ 0 ][ 0 ] << setw( 9 ) << t[ 0 ][ 1 ] << setw( 9 ) << t[ 0 ][ 2 ];
    cout << "\nrow1" << setw( 3 ) << t[ 1 ][ 0 ] << setw( 9 ) << t[ 1 ][ 1 ] << setw( 9 ) << t[ 1 ][ 2 ];
}
