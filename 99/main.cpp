#include <iostream>
#include "DateAndTime.h"

using namespace std;

int main()
{
    const int maxticks;
    DateAndTime d( 6, 13, 2013, 23, 59, 57 );

    for( int i = 1; i < maxticks; ++i )
    {
        cout << "Universal time: ";
        d.printUniversal();
        cout << "Standard time: ";
        d.printStandard();
        d.tick();
    }
}
