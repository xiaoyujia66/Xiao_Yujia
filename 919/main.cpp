#include <iostream>
#include <ctime>

using namespace std;

class Date
{
public:
    explicit Date(int day,int month)
    {
        setdate();
        setday(day);
        setmon(month);
    }
    explicit Date(int day)
    {
        setdate();
        setday(day);
    }
    explicit Date()
    {
        setdate();
    }
    void setday(int number)
    {
        if(0<number && number<=30)
        {
            day=number;
        }
        else
            cout<<"error"<<endl;
    }
    void  setmon(int number)
    {
        if(0<number && number<=12)
        {
            month=number;
        }
    }

    void setdate()
    {
        nowdate=date(0);
        struct tm *Tptr=localdate(&nowdate);
        year=Tptr->tm_year+1900;
        month=Tptr->tm_mon+1;
        day=Tptr->tm_mday;
        hour=Tptr->tm_hour;
        minth=Tptr->tm_min;
        s=Tptr->tm_sec;
    }
    void outdate(void)
    {
        cout<<year<<"-"<<month<<"-"<<day<<"-"<<hour<<":"<<minth<<":"<<s<<endl;
    }
private:
    time_t nowdate;
    int year;
    int month;
    int day;
    int hour;
    int minth;
    int s;
};

int main()
{
    Date mydate(1);
    mydate.outdate();

    return 0;
}
