#include <iostream>
#include <string>

using namespace std;

class Employee
{
private:
    string firstname;
    string lastname;
    int salary;
public:
    void setFirstName( string a )
    {
        name = a;
    }
    string getFirstName()
    {
        return firstname;
    }

    void setLastName( string b )
    {
        lastname = b;
    }
    string getLastName()
    {
        return Lastname;
    }

    void setSalary( int c )
    {
        if( salary < 0 )
        cout << "salary = 0" << endl;
        if( salary >= 0 )
        cout << "Salary is " << c << endl;
    }
    int getSalary()
    {
        return salary;
    }
    void displayMessage()
    {
        cout << "Employee's firstname is " << "a" << getFirstName() << endl;
        cout << "Employee's lastname is " << "b" << getLastName() << endl;
        cout << "Salary is " << getSalary() << endl;
    }
};

int main()
{
    Employee employee1;
    Employee employee2;

    cout << "employee1 salary" << employee1.getSalary()
         << "\nemployee2 salary" << employee2.getSalary()
         << endl;
}
