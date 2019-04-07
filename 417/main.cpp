#include <iostream>

using namespace std;

int main()
{
    int number = 0;
    int largest = 0;
    unsigned int counter = 1;

    cout << "Enter number: ";

    while (counter <= 10)
    {
        cin >> number;
        if(largest <= number)
            largest = number;
            counter++;
    }
    cout << "The largest is " << largest << endl;
}
