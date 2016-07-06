//
//  ReadIntegers - this program reads integers from
//                 an input file MyFile.txt contained
//                 in the current directory.
//                 The unsafeFn() function doesn't check
//                 for error when reading while the
//                 safeFn() function does.
//
#include <cstdio>
#include <cstdlib>
#include <fstream>
#include <iostream>
using namespace std;

void unsafeFn()
{
    ifstream myFile("MyFile.txt");
    int nInputValue;

    for(int n = 1; n <= 10; n++)
    {
        // read a value
        myFile >> nInputValue;

        // value successfully read - output it
        cout << n << " - " << nInputValue << endl;
    }
}

void safeFn()
{
    ifstream myFile("MyFile.txt");
    int nInputValue;

    for(int n = 1; n <= 10; n++)
    {
        // read a value
        myFile >> nInputValue;

        // exit the loop on read error
        if (myFile.fail())
        {
            break;
        }

        // value successfully read - output it
        cout << n << " - " << nInputValue << endl;
    }
}

int main(int nNumberofArgs, char* pszArgs[])
{
    // call either unsafeFn() or safeFn()
    unsafeFn();

    // wait until user is ready before terminating program
    // to allow the user to see the program results
    cout << "Press Enter to continue..." << endl;
    cin.ignore(10, '\n');
    cin.get();
    return 0;
}

