//
//  CompoundStudent - this version of the Student class
//                    includes a data member that's also
//                    of a user defined type
//
#include <cstdio>
#include <cstdlib>
#include <iostream>
#include <cstring>
using namespace std;

class StudentID
{
  protected:
    static int nBaseValue;
    int        nValue;

  public:
    StudentID()
    {
        nValue = nBaseValue++;
    }

    StudentID(int nNewValue)
    {
        nValue = nNewValue;
    }

    int getID()
    {
        return nValue;
    }
};

// allocate space for the class property
int StudentID::nBaseValue = 1000;

class Student
{
  protected:
    char*        pszName;
    StudentID    sID;

    void initName(const char* pszNewName)
    {
        int nLength = strlen(pszNewName) + 1;
        pszName = new char[nLength];
        strcpy(pszName, pszNewName);
    }

  public:
    Student(const char* pszNewName,
                  int nNewID) : sID(nNewID)
    {
        initName(pszNewName);
    }
    Student(const char* pszNewName)
    {
        initName(pszNewName);
    }
   ~Student()
    {
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
        return sID.getID();
    }
};


int main(int nNumberofArgs, char* pszArgs[])
{
    // create a student and initialize it
    Student student1("Stephen Davis");

    // display the student's name and ID
    cout << "The first student's name is "
         << student1.getName()
         << ", ID is "
         << student1.getID()
         << endl;

    // do the same for a second student
    Student student2("Janet Eddins");
    cout << "The second student's name is "
         << student2.getName()
         << ", ID is "
         << student2.getID()
         << endl;

    // now create a transfer student with a unique ID
    Student student3("Tiffany Amrich", 1234);
    cout << "The third student's name is "
         << student3.getName()
         << ", ID is "
         << student3.getID()
         << endl;

    // wait until user is ready before terminating program
    // to allow the user to see the program results
    cout << "Press Enter to continue..." << endl;
    cin.ignore(10, '\n');
    cin.get();
    return 0;
}
