//
//  StudentDestructor - this program demonstrates the use
//               of the destructor to return resources
//               allocated by the constructor
//
#include <cstdio>
#include <cstdlib>
#include <iostream>
using namespace std;

class Student
{
  protected:
    double* pdGrades;
    int*    pnHours;

  public:
    // constructor - init the student to a legal state
    Student()
    {
        cout << "Constructing a Student object" << endl;
        pdGrades = new double[128];
        pnHours  = new int[128];
    }
   ~Student()
    {
        cout << "Destructing a Student object" << endl;
        delete[] pdGrades;
        pdGrades = nullptr;

        delete[] pnHours;
        pnHours = nullptr;
    }
};

Student* fn()
{
    cout << "Entering fn()" << endl;

    // create a student and initialize it
    cout << "Creating the Student s" << endl;
    Student s;

    // create an array of Students
    cout << "Create an array of 5 Students" << endl;
    Student sArray[5];

    // now allocate one off of the heap
    cout << "Allocating a Student from the heap" << endl;
    Student *pS = new Student;

    cout << "Returning from fn()" << endl;
    return pS;
}

int main(int nNumberofArgs, char* pszArgs[])
{
    // now allocate one off of the heap
    Student *pS = fn();

    // delete the pointer returned by fn()
    cout << "Deleting the pointer returned by fn()"
         << endl;
    delete pS;
    pS = nullptr;

    // wait until user is ready before terminating program
    // to allow the user to see the program results
    cout << "Press Enter to continue..." << endl;
    cin.ignore(10, '\n');
    cin.get();
    return 0;
}
