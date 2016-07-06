//
//  StudentAssignment - this program demonstrates to
//                create an assignment operator that
//                performs the same deep copy as the copy
//                constructor
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

    void init(const char* pszNewName, int nNewID)
    {
        int nLength = strlen(pszNewName) + 1;
        pszName = new char[nLength];
        strcpy(pszName, pszNewName);
        nID = nNewID;
    }

    void destruct()
    {
        delete[] pszName;
        pszName = nullptr;
    }

  public:
    Student(const char* pszNewName, int nNewID)
    {
        cout << "Constructing " << pszNewName << endl;
        init(pszNewName, nNewID);
    }
    Student(Student& s)
    {
        cout<<"Constructing copy of "<< s.pszName << endl;
        init(s.pszName, s.nID);
    }

    virtual ~Student()
    {
        cout << "Destructing " << pszName << endl;
        destruct();
    }

    // overload the assignment operator
    Student& operator=(const Student& source)
    {
        // don't do anything if we are assigned to
        // ourselves
        if (this != &source)
        {
            cout << "Assigning " << source.pszName
                 << " to "       << pszName << endl;

            // first destruct the existing object
            destruct();

            // now copy the source object
            init(source.pszName, source.nID);
        }

        return *this;
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

void someFn()
{
    Student s1("Adam Laskowski", 1234);
    Student s2("Vanessa Barbossa", 5678);

    s2 = s1;
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
