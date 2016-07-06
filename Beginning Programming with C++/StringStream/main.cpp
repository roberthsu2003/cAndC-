// StringStream - demonstrate the use of string stream
//                classes for parsing input safely
#include <cstdio>
#include <cstdlib>
#include <iostream>
#include <sstream>
#include <string>
#include <cstring>
using namespace std;

struct Student
{
  protected:
    char szFirstName[256];
    char szLastName[256];
    int  nStudentID;

  public:
    Student(const char* pszFN, const char* pszLN,int nSID)
    {
        strncpy(szFirstName, pszFN, 256);
        strncpy(szLastName,  pszLN, 256);
        nStudentID = nSID;
    }

    // display - write the student's data into the
    //           array provided; don't exceed the size
    //           of the array set by nLength
    void display(char* pszBuffer, int nLength)
    {
        ostringstream out;

        out << szFirstName << " " << szLastName
            << " [" << nStudentID << "]" << ends;
        string s = out.str();
        strncpy(pszBuffer, s.c_str(), nLength);
    }
};

int main(int nNumberofArgs, char* pszArgs[])
{
    Student *pStudents[128];
    int nCount = 0;

    cout << "Input student <last name, first name ID>\n"
         << "(Input a blank line to stop input)" << endl;

    for(;;)
    {
        // get another line to parse
        char szLine[256];
        cin.getline(szLine, 256);

        // terminate if line is blank
        if (strlen(szLine) == 0)
        {
            break;
        }

        // associate an istrstream object with the
        // array that we just read
        string s(szLine);
        istringstream input(s);

        // now try to parse the buffer read
        char szLastName[256];
        char szFirstName[256];
        int nSSID;

        // read the last name up to a comma separator
        input.getline(szLastName, 256, ',');

        // read the first name until encountering white
        // space
        input >> szFirstName;

        // now read the student id
        input >> nSSID;

        // skip this line if anything didn't work
        if (input.fail())
        {
            cerr << "Bad input: " << szLine << endl;
            continue;
        }

        // create a Student object with the data
        // input and store it in the array of pointers
        pStudents[nCount++] = new Student(szFirstName,
                                       szLastName, nSSID);
    }

    // display the students input - use the Student's
    // output function to format the student data
    for(int n = 0; n < nCount; n++)
    {
        char szBuffer[256];
        pStudents[n]->display(szBuffer, 256);
        cout << szBuffer << endl;
    }

    // wait until user is ready before terminating program
    // to allow the user to see the program results
    cout << "Press Enter to continue..." << endl;
    cin.ignore(10, '\n');
    cin.get();
    return 0;
}
