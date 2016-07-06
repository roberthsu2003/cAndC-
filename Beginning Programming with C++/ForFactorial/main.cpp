//
//  ForFactorial - calculate factorial using the for
//                 construct.
//
#include <cstdio>
#include <cstdlib>
#include <iostream>
using namespace std;

int main(int nNumberofArgs, char* pszArgs[])
{
    cout << "This program calculates factorials of user input.\n"
         << "Enter a negative number to exit\n";

    while(true)
    {
        // enter the number to calculate the factorial of
        int nTarget;
        cout << "Enter a number to take factorial of: ";
        cin  >> nTarget;

        // break if the number entered is negative
        if (nTarget < 0)
        {
            break;
        }

        // start with an accumulator that's initialized to 1
        int nAccumulator = 1;
        for(int nValue = 1; nValue <= nTarget; nValue++)
        {
            cout << nAccumulator << " * "
                 << nValue << " equals ";
            nAccumulator = nAccumulator * nValue;
            cout << nAccumulator << endl;
        }

        // display the result
        cout << nTarget << " factorial is "
             << nAccumulator << endl;
    }

    // wait until user is ready before terminating program
    // to allow the user to see the program results
    cout << "Press Enter to continue..." << endl;
    cin.ignore(10, '\n');
    cin.get();
    return 0;
}

