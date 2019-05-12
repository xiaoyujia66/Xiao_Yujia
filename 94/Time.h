#ifndef TIME_H
#define TIME_H

#include <ctime>

class Time
{
    public:
        Time();
        void setTime( int, int, int );
        void printUniversal() const;
        void printStandard() const;
        void time();
        void localtime();
    private:
        unsigned int hour;
        unsigned int minute;
        unsigned int second;
};

#endif // TIME_H
