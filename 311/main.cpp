#include <iostream>
#include <string>

using namespace std;

class GradeBook
{
public:
    explicit GradeBook( string coursename , string teachername );

    void setCourseName( string coursename )
    {
        courseName = coursename;
    }
    string getCourseName()
    {
        return courseName;
    }
     void setTeacherName( string teachername )
    {
        teacherName = teachername;
    }
    string getTeacherName()
    {
        return teacherName;
    }
    void displayMessage()
    {
        cout << "Welcome to the Grade Book for\n" << getCourseName() << "!"
        << "\nThe course is presented by: " << getTeacherName() << endl;
    }
private:
    string courseName;
    string teacherName;
};

int main()
{
    GradeBook gradeBook1( "C++ course" );
    GradeBook gradeBook2( "xiaoyujia" );

    gradeBook1.displayMessage();
    gradeBook2.displayMessage();
}



