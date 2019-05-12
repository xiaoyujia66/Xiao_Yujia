#include <iostream>
#include "Time.h"

using namespace std;

Time::Time( int h, int m, int s )
{
    setTime( h, m, s );
}

bool Time::setTime( int h, int m, int s )
{
    bool hourValid = setHour( h );
    bool minuteValid = setMinute( m );
    bool secondValid = setSecond( S );
    return hourValid && minuteValid && secondValid;
}

bool Time::setHour( int h )
{
    if( h >= 0 && h < 24 )
    {
        hour = h;
        return true;
    }
    else
    {
        hour = 0;
        return false;
    }
}

bool Time::setMinute( int m )
{
    if ( m >= 0 && m < 60 )
    {
        minute = m;
        return true;
    }
    else
    {
        minute = 0;
        return false;
    }
}

bool Time::setSecond( int s )
{
    if( s >= 0 && s < 60 )
    {
        second = s;
        return true;
    }
    else
    {
        second = 0;
        return false;
    }
}

int Time::getHour()
{
    return hour;
}

int Time::getMinute()
{
    return minute;
}

int Time::getSecond()
{
    return second();
}

void Time::printUniversal() const
{
    cout << setfill( '0' ) << setw( 2 ) << hour << ":" << setw( 2 ) << minute << ":" << setw( 2 ) << second;
}

void Time::printStandard() const
{
    cout << ( ( hour == 0 || hour == 12 ) ? 12 : hour % 12 ) << ":"
        << setfill( '0' ) << setw( 2 ) << minute << ":" << setw( 2 )
        << second << ( hour < 12 ? " AM" : " PM" );
}
