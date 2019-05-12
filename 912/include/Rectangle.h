#ifndef RECTANGLE_H
#define RECTANGLE_H


class Rectangle
{
    public:
        Rectangle( Point, Point );
        void setCdi( Point, Point, Point, Point );
        double length();
        double width();
        void peimeter();
        void area();

    private:
        Point point 1;
        Point point 2;
        Point point 3;
        Point point 4;
};

#endif // RECTANGLE_H
