//
//  DeepStudent - this program demonstrates how a copy
//                constructor that performs a deep copy
//                can be used to solve copy problems
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
    Student(const Student& s)
    {
        cout<<"Constructing copy of "<< s.pszName << endl;

        int nLength = strlen(s.pszName) + 25;
        this->pszName = new char[nLength];
        strcpy(this->pszName, "Copy of ");
        strcat(this->pszName, s.pszName);
        this->nID = s.nID;
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
};

void someOtherFn(Student s)
{
    // we don't need to do anything here
}

void someFn()
{
    Student student("Adam Laskowski", 1234);
    someOtherFn(student);

    cout << "The student's name is now "
         << student.getName() << endl;
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
