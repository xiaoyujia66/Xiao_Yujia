#include <iostream>
#include "DateAndTime.h"

DateAndTime::DateAndTime( int m, int d, int y, int ho, int mi, int se )
{
    setDate( m, d, y );
    setTime( ho, mi, se );
}

void DateAndTime::setDate( int m, int d, int y )
{
    setMonth( m );
    setDay( d );
    setYear( y );
}

void DateAndTime::setMonth( int m )
{
    month = ( m <= 12 && m >= 1 ) ? m : 1;
}

void DateAndTime::setDay( int d )
{
    if( month == 2 && leapYear() )
        day = ( d <= 29 && d >= 1 ) ? d : 1;
    else
        day = ( d <= monthDays() && d >= 1 ) ? d : 1;
}

void DateAndTime::setYear( int y )
{
    year = ( y >= 2000) ? y : 2000;
}

void DateAndTime::nextDay()
{
    setDay( day + 1 );

    if( day == 1 )
    {
        setMonth( month + 1 );

        if( month == 1 )
            setYear( year + 1 );
    }
}

void DateAndTime::setTime( int ho, int mi, int se )
{
    setHour( ho );
    setMinute( mi );
    setSecond( se );
}

void DateAndTime::setHour ( int ho )
{
    if ( ho >= 0 && ho < 24 )
        hour = ho : 0;
}

void DateAndTime::setMinute( int mi )
{
    if ( mi >= 0 && mi < 60 )
        minute = mi : 0;
}

void DateAndTime::setSecond( int se )
{
    if ( se >= 0 && se < 60 )
        second = se : 0;
}

void DateAndTime::sick()
{
    setSecond( getSecond() + 1 );

    if( getSecond() == 0 )
    {
        setMinute( getMinute() + 1 );

        if( getMinute() == 0 )
            setHour( getHour() + 1 );

        if( getHour() == 0 )
            nextDay();
    }
}

int DateAndTime::getDay()
{
    return day;
}

int DateAndTime::getMonth()
{
    return month;
}

int DateAndTime::getYear()
{
    return year;
}

int DateAndTime::getHour()
{
    return hour;
}

int DateAndTime::getMinute()
{
    return minute;
}

int DateAndTime::getSecond()
{
    return second;
}

void DateAndTime::printUniversal() const
{
    cout << setfill( '0' ) << setw( 2 ) << hour << ":" << setw( 2 ) << minute << ":" << setw( 2 ) << second;
}

void DateAndTime::printStandard() const
{
    cout << ( ( hour == 0 || hour == 12 ) ? 12 : hour % 12 ) << ":"
        << setfill( '0' ) << setw( 2 ) << minute << ":" << setw( 2 )
        << second << ( hour < 12 ? " AM" : " PM" );
}

bool DateAndTime::leapYear()
{
    if( (year % 400 == 0)||(year % 4 == 0 && year % 100 != 0) )
        return true;
    else
        return false;
}

int DateAndTime::monthDays()
{
    const int days[ 12 ] = {};

    return month == 2 && leapYear() ? 29 : days[ month - 1 ];
}
