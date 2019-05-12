#include <iostream>
#include "Rational.h"

Rational::Rational( int n, int d )
{
    numerator = n;
    denominator = d;
    reduction();
}

Rational::addtion( const Rational &a )
{
    Rational t;

    t.numerator = a.numerator * denominator;
    t.numerator += numerator * a.denominator;
    t.denominator = a.denominator * denominator;
    t.reduction();
    return t;
}

Rational::subtraction( const Rational &s )
{
    Rational t;

    t.numerator = s.denominator * numerator;
    t.numerator -= denominator * s.numerator;
    t.denominator = s.denominator * denominator;
    t.reduction();
    return t;
}

Rational::multiplication( const Rational &m )
{
    Rational t;

    t.numerator = m.numerator * numerator;
    t.denominator = m.denominator * denominator;
    t.reduction();
    return t;
}

Rational::division( const Rational &v )
{
    Rational t;

    t.numerator = v.denominator * numerator;
    t.denominator = denominator * v.numerator;
    t.reduction();
    return t;
}

void Rational::printRational()
{
    if( denominator == 0 )
        cout << "Error";
    else
        if( numerator == 0)
            cout << 0;
    else
        cout << numerator << '/' << denominator;
}

void Rational::printRationalAsDounle()
{
    cout << static_cast< double >( numerator )/( denominator );
}
