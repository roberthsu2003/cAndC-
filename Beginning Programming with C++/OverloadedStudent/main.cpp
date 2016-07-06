//
//  OverloadedStudent - this program overloads the Student
//                 constructor with 3 different choices
//                 that vary by number of arguments
//
#include <cstdio>
#include <cstdlib>
#include <iostream>
#include <cstring>
using namespace std;

class Student
{
  protected:
    char*  pszName;
    int    nID;
    double dGrade;         // the student's GPA
    int    nSemesterHours;


  public:
    Student(const char* pszNewName, int nNewID,
            double dXferGrade, int nXferHours)
    {
        cout << "Constructing " << pszNewName
              << " as a transfer student." << endl;
        int nLength = strlen(pszNewName) + 1;
        pszName = new char[nLength];
        strcpy(pszName, pszNewName);
        nID = nNewID;
        dGrade = dXferGrade;
        nSemesterHours = nXferHours;
    }
    Student(const char* pszNewName, int nNewID)
    {
        cout << "Constructing " << pszNewName
             << " as a new student." << endl;
        int nLength = strlen(pszNewName) + 1;
        pszName = new char[nLength];
        strcpy(pszName, pszNewName);
        nID = nNewID;
        dGrade = 0.0;
        nSemesterHours = 0;
    }
    Student()
    {
        pszName = nullptr;
        nID = 0;
        dGrade = 0.0;
        nSemesterHours = 0;
    }
   ~Student()
    {
        cout << "Destructing " << pszName << endl;
        delete[] pszName;
        pszName = nullptr;
    }

    // access functions
    const char* getName()
    {
        return pszName;
    }
    int getID()
    {
        return nID;
    }
    double getGrade()
    {
        return dGrade;
    }
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
    Student student("Stephen Davis", 1234);

    // now create a transfer student with an initial grade
    Student xfer("Kinsey Davis", 5678, 3.5, 12);

    // give both students a B in the current class
    student.addGrade(3.0, 3);
    xfer.addGrade(3.0, 3);

    // display the student's name and grades
    cout << "Student "
         << student.getName()
         << " has a grade of "
         << student.getGrade()
         << endl;

    cout << "Student "
         << xfer.getName()
         << " has a grade of "
         << xfer.getGrade()
         << endl;

    // wait until user is ready before terminating program
    // to allow the user to see the program results
    cout << "Press Enter to continue..." << endl;
    cin.ignore(10, '\n');
    cin.get();
    return 0;
}
