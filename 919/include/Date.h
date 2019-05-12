#ifndef DATE_H
#define DATE_H


class Date
{
    public:
        Date();
        virtual ~Date();

        int month, int day, int Getyear() { return year; }
        void Setyear(int month, int day, int val) { year = val; }

    protected:

    private:
        int month, int day, int year;
};

#endif // DATE_H
