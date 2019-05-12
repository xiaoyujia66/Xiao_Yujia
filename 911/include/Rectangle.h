#ifndef RECTANGLE_H
#define RECTANGLE_H

using namespace std;

class Rectangle
{
    public:
        Rectangle( double = 1.0, double = 1.0 );
        void setwidth( double w );
        void setlength( double l );

        double getwidth();
        double getlength();
        double perimeter();
        double area();
    private:
        double length;
        double width;
};

#endif // RECTANGLE_H
