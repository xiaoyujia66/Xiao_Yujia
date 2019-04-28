#include <iostream>
#include <iomanip>
#include <vector>

using namespace std;

int main()
{
   const int size = 20;
   int a[ size ] = {};
   int subscript = 0;
   int duplicate;
   int value;

   cout << "Enter 20 integers between 10 and 100:\n";

   for ( int i = 0; i < size; )
   {
   duplicate = 0;
       cin >> value;

       if ( value >= 10 && value <= 100 )
       {
           for ( int j = 0; j < subscript; j++ )
           {
               if ( value == a[ j ] )
                   duplicate = 1;
           }
       if ( !duplicate )
       {
            a[ subscript++ ] = value;
            ++i;
       }
       else
            cout << "Duplicate number.";
       }
       else
            cout << "Invalid number.";
   }
   cout << "The nonduplicate values are: ";
   for ( int i = 0; i < size; i++ )
       cout << a[ i ] << ' ';

   cout << endl;
}
