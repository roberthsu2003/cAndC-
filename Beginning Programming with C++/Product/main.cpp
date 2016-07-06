//
//  Product - demonstrate the use of break and continue.
//
#include <cstdio>
#include <cstdlib>
#include <iostream>
using namespace std;

int main(int nNumberofArgs, char* pszArgs[])
{
    // enter the number to calculate the factorial of
    cout << "This program multiplies the numbers\n"
         << "entered by the user. Enter a negative\n"
         << "number to exit. Zeroes are ignored.\n"
         << endl;

    int nProduct = 1;
    while (true)
    {
        int nValue;
        cout << "Enter a number to multiply: ";
        cin  >> nValue;
        if (nValue < 0)
        {
            cout << "Exiting." << endl;
            break;
        }
        if (nValue == 0)
        {
            cout << "Ignoring zero." << endl;
            continue;
        }

        // multiply accumulator by this value and
        // output the result
        cout << nProduct << " * " << nValue;
        nProduct *= nValue;
        cout << " is " << nProduct << endl;
    }

    // wait until user is ready before terminating program
    // to allow the user to see the program results
    cout << "Press Enter to continue..." << endl;
    cin.ignore(10, '\n');
    cin.get();
    return 0;
}

