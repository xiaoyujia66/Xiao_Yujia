#include <iostream>
#include <iomanip>
#include <array>

using namespace std;

int main()
{
    array< double, 99 > w;

    double max;
    double min;

    for ( size_t i = 0; i < w.size(); ++i )
    {
        if ( max < w[ i ] )
            max = w[ i ];
        else
            min = w[ i ];
        cout << setw( 7 ) << max << setw( 13 ) << w[ i ] << endl;
        cout << setw( 7 ) << min << setw( 13 ) << w[ i ] << endl;
    }
}
