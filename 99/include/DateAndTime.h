#ifndef DATEANDTIME_H
#define DATEANDTIME_H


class DateAndTime
{
    public:
        DateAndTime( int, int, int, int, int );
        void setDate( int, int, int );
        void setMonth( int );
        void setDay( int );
        void setYear( int );
        void nextDay();
        void setTime( int, int, int );
        void setHour( int );
        void setMinute( int );
        void setSecond( int );
        void tick();

        int getMonth();
        int getDay();
        int getYear();
        int getHour();
        int getMinute();
        int getSecond();

        void printUniversal();
        void printStandard();
    private:
        int month;
        int day;
        int year;
        int hour;
        int minute;
        int second;
};

#endif // DATEANDTIME_H
