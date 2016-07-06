//
//  GSInherit - demonstrate inheritance by creating
//              a class GraduateStudent that inherits
//              from Student.
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
    Student(const char* pszNewName, int nNewID)
    {
        cout << "Constructing student "
             << pszNewName << endl;
        pszName = new char[strlen(pszNewName) + 1];
        strcpy(pszName, pszNewName);
        nID = nNewID;
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

class Advisor
{
  public:
    Advisor() { cout << "Advisor constructed" << endl;}
};

class GraduateStudent : public Student
{
  protected:
    double dQualifierGrade;
    Advisor advisor;

  public:
    GraduateStudent(const char* pszName, int nID) :
       Student(pszName, nID)
    {
        cout << "Constructing GraduateStudent" << endl;
        dQualifierGrade = 0.0;
    }
};

void someOtherFn(Student* pS)
{
    cout << "Passed student " << pS->getName() << endl;
}

void someFn()
{
    Student student("Lo Lee Undergrad", 1234);
    someOtherFn(&student);

    GraduateStudent gs("Upp R. Class", 5678);
    someOtherFn(&gs);
}

int main(int nNumberofArgs, char* pszArgs[])
{
    someFn();

    // wait until user is ready before terminating program
    // to allow the user to see the program results
    cout << "Press Enter to continue..." << endl;
    cin.ignore(10, '\n');
    cin.get();
    return 0;
}
