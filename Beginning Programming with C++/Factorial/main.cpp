//
//  Factorial - calculate factorial using the while
//              construct.
//
#include <cstdio>
#include <cstdlib>
#include <iostream>
using namespace std;

int main(int nNumberofArgs, char* pszArgs[])
{
    // enter the number to calculate the factorial of
    int nTarget;
    cout << "This program calculates factorial.\n"
         << "Enter a number to take factorial of: ";
    cin  >> nTarget;

    // start with an accumulator that's initialized to 1
    int nAccumulator = 1;
    int nValue = 1;
    while (nValue <= nTarget)
    {
        cout << nAccumulator << " * "
             << nValue << " equals ";
        nAccumulator = nAccumulator * nValue;
        cout << nAccumulator << endl;
        nValue++;
    }

    // display the result
    cout << nTarget << " factorial is "
         << nAccumulator << endl;

    // wait until user is ready before terminating program
    // to allow the user to see the program results
    cout << "Press Enter to continue..." << endl;
    cin.ignore(10, '\n');
    cin.get();
    return 0;
}

