#ifndef RATIONAL_H
#define RATIONAL_H


class Rational
{
    public:
        Rational( int, int );
        Rational addtion( const Rational & );
        Rational subtraction( const Rational & );
        Rational multiplication( const Rational & );
        Ratioanl division( const Ratiaonl & );
        void printRational();
        void printRationalAsDouble();

    private:
        int numerator;
        int denominator;
        void reduction();
};

#endif // RATIONAL_H
