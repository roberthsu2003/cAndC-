//
//  NamedStudent - this program demonstrates the use
//               of a constructors with arguments
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

  public:
    Student(const char* pszNewName, int nNewID)
    {
        cout << "Constructing " << pszNewName << endl;
        int nLength = strlen(pszNewName) + 1;
        pszName = new char[nLength];
        strcpy(pszName, pszNewName);
        nID = nNewID;
    }
   ~Student()
    {
        cout << "Destructing " << pszName << endl;
        delete[] pszName;
        pszName = nullptr;
    }

    // getName() - return the student's name
    const char* getName()
    {
        return pszName;
    }

    // getID() - get the student's ID
    int getID()
    {
        return nID;
    }
};

Student* fn()
{
    // create a student and initialize it
    cout << "Constructing a local student in fn()" <<endl;
    Student student("Stephen Davis", 1234);

    // display the student's name
    cout << "The student's name is "
         << student.getName() << endl;

    // now allocate one off of the heap
    cout << "Allocating a Student from the heap" << endl;
    Student *pS = new Student("Kinsey Davis", 5678);

    // display this student's name
    cout << "The second student's name is "
         << pS->getName() << endl;

    cout << "Returning from fn()" << endl;
    return pS;
}

int main(int nNumberofArgs, char* pszArgs[])
{
    // call the function that creates student objects
    cout << "Calling fn()" << endl;
    Student* pS = fn();
    cout << "Back in main()" << endl;

    // delete the object returned by fn()
    delete pS;
    pS = nullptr;

    // wait until user is ready before terminating program
    // to allow the user to see the program results
    cout << "Press Enter to continue..." << endl;
    cin.ignore(10, '\n');
    cin.get();
    return 0;
}
