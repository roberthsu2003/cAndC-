//
//  ConcatenatePtr - this is the pointer version of the
//                   ConcatenateHeap program. This version
//                   demonstrates the similarity between
//                   a pointer and an array
//
#include <cstdio>
#include <cstdlib>
#include <iostream>
#include <cstring>
using namespace std;


// concatenateString - concatenate two strings together
//                     into an array allocated off of the
//                     heap
char* concatenateString(const char* pszSrc1,
                        const char* pszSrc2)
{
    // allocate an array of sufficient length
    int nTargetSize = strlen(pszSrc1)+strlen(pszSrc2)+1;
    char* pszTarget = new char[nTargetSize];

    // first copy the first string into the target
    char* pszT = pszTarget;
    for(; *pszSrc1 != '\0'; pszT++, pszSrc1++)
    {
        *pszT = *pszSrc1;
    }

    // now copy the contents of the second string onto
    // the end of the first
    for(; *pszSrc2 != '\0'; pszT++, pszSrc2++)
    {
        *pszT = *pszSrc2;
    }

    // add the terminator to szTarget
    *pszT = '\0';

    // return the unmodified address of the array
    // to the caller
    return pszTarget;
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
    char* pszT = concatenateString(szString1, szString2);

    // and display the result
    cout << "Result: <"
         << pszT
         << ">" << endl;

    // return the memory to the heap
    delete pszT;
    pszT = nullptr;

    // wait until user is ready before terminating program
    // to allow the user to see the program results
    cout << "Press Enter to continue..." << endl;
    cin.ignore(10, '\n');
    cin.get();
    return 0;
}
