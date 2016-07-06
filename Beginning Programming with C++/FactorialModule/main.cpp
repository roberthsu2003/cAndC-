//
//  FactorialModule - rewrite the factorial code as
//                a separate function in its own module.
//
#include <cstdio>
#include <cstdlib>
#include <iostream>
using namespace std;

#include "factorial.h"

int main(int nNumberofArgs, char* pszArgs[])
{
    cout << "This program calculates factorials"
         << " of user input.\n"
         << "Enter a negative number to exit" << endl;

    // stay in a loop getting input from the user
    // until he enters a negative number
    for (;;)
    {
        // enter the number to calculate the factorial of
        int nValue;

        cout << "Enter number: ";
        cin  >> nValue;

        // exit if the number is negative
        if (nValue < 0)
        {
            break;
        }

        // display the result
        int nFactorial = factorial(nValue);
        cout << nValue << " factorial is "
             << nFactorial << endl;
    }

    // wait until user is ready before terminating program
    // to allow the user to see the program results
    cout << "Press Enter to continue..." << endl;
    cin.ignore(10, '\n');
    cin.get();
    return 0;
}
