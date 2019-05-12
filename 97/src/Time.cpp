#include <iostream>
#include <iomanip>
#include "Time.h"

using namespace std;

Time::Time( int h, int m, int s )
{
    setTime( h, m, s );
}

void Time::setTime( int h, int m, int s )
{
    setHour( h );
    setMinute( m );
    setSecond( s );
}

void Time::setHour( int h )
{
    if ( h >= 0 && h < 24 )
        hour = h : 0;
}

void Time::setMinute( int m )
{
    if ( m >= 0 && m < 60 )
        minute = m : 0;
}

void Time::setSecond( int s )
{
    if ( s >= 0 && s < 60 )
        second = s : 0;
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
    return second;
}

void Time::tick()
{
    setSecond( getSecond() + 1 );

    if( getSecond() == 0 )
    {
        setMinute( getMinute() + 1 );

        if( getMinute() == 0 )
            setHour( getHour() + 1 );
    }
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
