//
//  TutorPairDestructor - this program demonstrates
//          how data members are destructed automatically
//
#include <cstdio>
#include <cstdlib>
#include <iostream>
using namespace std;

class Student
{
  protected:
    double dGrade;         // the student's GPA
    int    nSemesterHours;

  public:
    // constructor - init the student to a legal state
    Student()
    {
        cout << "Constructing a Student object" << endl;
        dGrade = 0.0;
        nSemesterHours = 0;
    }
   ~Student()
    {
        cout << "Destructing a Student object" << endl;
    }
};

class Teacher
{
  public:
    // constructor - init the student to a legal state
    Teacher()
    {
        cout << "Constructing a Teacher object" << endl;
    }
   ~Teacher()
    {
        cout << "Destructing a Teacher object" << endl;
    }
};

class TutorPair
{
  protected:
    Student s;
    Teacher t;

    int nNumberOfMeetings;

  public:
    TutorPair()
    {
        cout << "Constructing the TutorPair members"
             << endl;
        nNumberOfMeetings = 0;
    }
   ~TutorPair()
    {
        cout << "Destructing the TutorPair object"
             << endl;
    }
};

void fn()
{
    // create a TutorPair and initialize it
    cout << "Creating the TutorPair tp" << endl;
    TutorPair tp;

    cout << "Returning from fn()" << endl;
}

int main(int nNumberofArgs, char* pszArgs[])
{
    fn();

    // wait until user is ready before terminating program
    // to allow the user to see the program results
    cout << "Press Enter to continue..." << endl;
    cin.ignore(10, '\n');
    cin.get();
    return 0;
}
