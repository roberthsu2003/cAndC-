//
//  SimpleStudent - this program demonstrates how the
//                  protected keyword is used to protect
//                  key internal members
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
    // init() - initialize the student to a legal state
    void init()
    {
        dGrade = 0.0;
        nSemesterHours = 0;
    }

    // getGrade() - return the current grade
    double getGrade()
    {
        return dGrade;
    }

    // getHours() - get the class hours towards graduation
    int getHours()
    {
        return nSemesterHours;
    }

    // addGrade - add a grade to the GPA and total hours
    double addGrade(double dNewGrade, int nHours)
    {
        double dWtdHrs = dGrade * nSemesterHours;
        dWtdHrs += dNewGrade * nHours;
        nSemesterHours += nHours;
        dGrade = dWtdHrs / nSemesterHours;
        return dGrade;
    }
};

int main(int nNumberofArgs, char* pszArgs[])
{
    // create a student and initialize it
    Student s;
    s.init();

    // add the grades for three classes
    s.addGrade(3.0, 3);  // a B
    s.addGrade(4.0, 3);  // an A
    s.addGrade(2.0, 3);  // a C (average should be a B)

    // now print the results
    cout << "Total # hours = " << s.getHours()
         << ", GPA = " << s.getGrade()
         << endl;

    // wait until user is ready before terminating program
    // to allow the user to see the program results
    cout << "Press Enter to continue..." << endl;
    cin.ignore(10, '\n');
    cin.get();
    return 0;
}
