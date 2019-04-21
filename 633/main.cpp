#include <iostream>
#include <ctime>
#include <cstdlib>

int flip();

using namespace std;

int main()
{
    int Headcount;
    int Tailcount;

    srand( time( 0 ) );

    for( int i = 1; i <= 100; i++ )
    {
        if( flip() == 0)
            cout << "Tail";
        else
            cout << "Head";
    }
    cout << "\nThe number of Head is " << Headcount
        << "\nThe number of Tail is " << Tailcount << endl;
}
int flip()
{
    return rand() % 2;
}
