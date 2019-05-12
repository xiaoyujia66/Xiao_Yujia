#ifndef COMPLEX_H
#define COMPLEX_H


class Complex
{
    public:
        Complex( double, double );
        Complex add( const Complex & );
        Complex subtract( const Complex & );
        void printComplex();
        void setComplexNumber( double, double );
    private:
        double realPart;
        double imaginaryPart;
};

#endif // COMPLEX_H
