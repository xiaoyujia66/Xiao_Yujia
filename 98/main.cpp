#include <iostream>
#include "Date.h"

using namespace std;

int main()
{
    const int maxdays;

    Date d( 6, 13, 2013 );

    for( int i < 1; i <= maxdays; ++i )
    {
        d.print();
        d.nextDay();
    }
    cout << endl;
}
