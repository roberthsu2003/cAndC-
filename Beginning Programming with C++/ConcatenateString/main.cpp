//
//  ConcatenateString - demonstrate the manipulation of
//                ASCIIZ strings by implementing a
//                concatenate function
//
#include <cstdio>
#include <cstdlib>
#include <iostream>
using namespace std;


// concatenateString - concatenate one string onto the
//                     end of another
void concatenateString(char szTarget[],
                 const char szSource[])
{
    // first find the end of the target string
    int nT;
    for(nT = 0; szTarget[nT] != '\0'; nT++)
    {
    }

    // now copy the contents of the source string into
    // the target string, beginning at 'nT'
    for(int nS = 0; szSource[nS] != '\0'; nT++, nS++)
    {
        szTarget[nT] = szSource[nS];
    }

    // add the terminator to szTarget
    szTarget[nT] = '\0';
}

int main(int nNumberofArgs, char* pszArgs[])
{
    // Prompt user
    cout << "This program accepts two strings\n"
         << "from the keyboard and outputs them\n"
         << "concatenated together.\n" << endl;

    // input two strings
    cout << "Enter first string: ";
    char szString1[256];
    cin.getline(szString1, 256);

    cout << "Enter the second string: ";
    char szString2[256];
    cin.getline(szString2, 256);

    // now concatenate one onto the end of the other
    cout << "Concatentate first string onto the second"
         << endl;
    concatenateString(szString1, szString2);

    // and display the result
    cout << "Result: <"
         << szString1
         << ">" << endl;

    // wait until user is ready before terminating program
    // to allow the user to see the program results
    cout << "Press Enter to continue..." << endl;
    cin.ignore(10, '\n');
    cin.get();
    return 0;
}
