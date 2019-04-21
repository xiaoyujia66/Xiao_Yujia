#include <iostream>

double qualityPoints( double );

using namespace std;

int main()
{
    int averagegrade;

    cout << "Enter a student's average grade: ";
    cin >> averagegrade;

    cout << "The student's average point is " << qualityPoints( averagegrade ) << endl;
}
double qualityPoints( double x )
{
    if( (x > 90)&&(x < 100) )
        return 4;
    else
        if( (x > 80)&&(x < 89) )
            return 3;
    else
        if( (x > 70)&&(x < 79) )
            return 2;
    else
        if( (x > 60)&&(x < 69) )
            return 1;
    else
        if( (x < 60) )
            return 0;
}
