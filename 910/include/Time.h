#ifndef TIME_H
#define TIME_H


class Time
{
    public:
        Time( int, int, int );
        bool setTime( int, int, int );
        bool setHour( int );
        bool setMinute( int );
        bool setSecond( int );

        int getHour();
        int getMinute();
        int getSecond();

        void printUniversal();
        void printStandard();

    private:
        int hour;
        int minute;
        int second;
};

#endif // TIME_H
