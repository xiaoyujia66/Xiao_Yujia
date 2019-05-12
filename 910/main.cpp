#include <iostream>
#include "Time.h"

using namespace std;

int main()
{
    cout << "Hour: " << time.getHour() << " Minute: "
        << time.getMinute() << "Second: " << time.getSecond() << endl;\
    cout << "Universal time: ";
    time.printUniversal();
    cout << "Standard time: ";
    time.printStandard();
    cout << endl;
}
