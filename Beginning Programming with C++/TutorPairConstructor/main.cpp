//
//  TutorPairConstructor - this program demonstrates
//          how data members are constructed automatically
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
};

class Teacher
{
  public:
    // constructor - init the student to a legal state
    Teacher()
    {
        cout << "Constructing a Teacher object" << endl;
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
};

int main(int nNumberofArgs, char* pszArgs[])
{
    // create a TutorPair and initialize it
    cout << "Creating the TutorPair tp" << endl;
    TutorPair tp;

    // wait until user is ready before terminating program
    // to allow the user to see the program results
    cout << "Press Enter to continue..." << endl;
    cin.ignore(10, '\n');
    cin.get();
    return 0;
}
