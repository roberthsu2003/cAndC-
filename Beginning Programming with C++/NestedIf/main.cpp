// NestedIf - demonstrate a nested if statement
//
#include <cstdio>
#include <cstdlib>
#include <iostream>

using namespace std;

int main(int nNumberofArgs, char* pszArgs[])
{
    // enter your birth year
    int  nYear;
    cout << "Enter your birth year: ";
    cin  >> nYear;

    // Make determination of century
    if (nYear > 2000)
    {
        cout << "You were born in the 21st century"
             << endl;
    }
    else
    {
        cout << "You were born in ";
        if (nYear < 1950)
        {
            cout << "the first half";
        }
        else
        {
            cout << "the second half";
        }
        cout << " of the 20th century"
             << endl;
    }

    // wait until user is ready before terminating program
    // to allow the user to see the program results
    cout << "Press Enter to continue..." << endl;
    cin.ignore(10, '\n');
    cin.get();
    return 0;
}
