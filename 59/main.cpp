#include <iostream>

using namespace std;

int main()
{
    unsigned int product = 1;

    for(unsigned int number = 1; number <= 15; number += 2)
    {
        product *= number;
    }

    cout << "Product is " << product << endl;
}
