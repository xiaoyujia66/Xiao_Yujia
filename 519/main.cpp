#include <iostream>

using namespace std;

int main()
{
    double n = 0;
    double d = 1;
    double accuracy = 1;
    int x;

    cout << "Enter accuracy: " << accuracy << "\n\nterm\t\tn\n";

    for(x = 1; x <= accuracy; x++)
    {
        if(d % 2 != 0)
             n += 4 / d;
        else
             n -= 4 / d;
    cout << "x" << "\t\t" << "n" << "\n";

    d += 2;
    }
    cout << endl;
}

