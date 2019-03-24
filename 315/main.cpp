#include <iostream>

using namespace std;

class Date
{
private:
    int year;
    int month;
    int day;
public:
    Date(int DDay,int MMonth,int YYear);
    void setDay(int DDay)
    {
        DDay = day;
    }
    int getDDay()
    {
        return day;
    }
    void setMMonth(int MMonth)
    {
        if((month > 1)&&(month < 12))
            MMonth = month;
        else
            MMonth = 1;
    }
    int getMMonth()
    {
        return month;
    }
    void setYYear(int YYear)
    {
        YYear = year;
    }
    int getYYear()
    {
        return year;
    }
    void displayMessage(int year,int month,int day)
    {
        cout << year << "/" << month << "/" << day << endl;
    }
};

int main()
{
    Date date1(2013,6,13);

    date1.displayMessage();
    return 0;
}


