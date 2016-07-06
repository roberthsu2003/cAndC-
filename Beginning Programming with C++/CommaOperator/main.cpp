//
//  CommaOperator - demonstrate how the comma operator
//                  is used within a for loop.
//
#include <cstdio>
#include <cstdlib>
#include <iostream>
using namespace std;

int main(int nNumberofArgs, char* pszArgs[])
{
    // enter a target number
    int nTarget;
    cout << "Enter maximum value: ";
    cin  >> nTarget;

    for(int nLower = 1, nUpper = nTarget;
              nLower <= nTarget; nLower++, nUpper--)
    {
        cout << nLower << " * "
             << nUpper << " equals "
             << nLower * nUpper << endl;
    }

    // wait until user is ready before terminating program
    // to allow the user to see the program results
    cout << "Press Enter to continue..." << endl;
    cin.ignore(10, '\n');
    cin.get();
    return 0;
}

