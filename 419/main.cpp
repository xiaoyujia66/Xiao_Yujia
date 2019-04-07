#include <iostream>

using namespace std;

int main()
{
    int nunber = 0;
    int largest = 0;
    int secondlargest = 0;
    unsigned int counter = 1;

    cout << "Enter number: ";

    while(counter <= 10)
    {
        cin >> number;
        if(largest <= number)
            secondlargest = largest;
            largest = number;
    }
    cout << "The secondlargest is " << endl;
    cout << "The largest is " << endl;
}
