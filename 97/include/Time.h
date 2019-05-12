#ifndef TIME_H
#define TIME_H


class Time
{
    public:
        Time( int, int, int );

        void setTime( int, int, int );
        void setHour( int );
        void setMinute( int );
        void setSecond( int );

        int gerHour;
        int getMinute;
        int getSecond;

        void tick;

        void printUniversal();
        void printStandard();
    private:
        int hour;
        int minute;
        int second;
};

#endif // TIME_H
