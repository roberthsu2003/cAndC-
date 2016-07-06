//
//  Conversion - This is a buggy version of the Conversion
//         program. I go through debugging this program
//         in Chapter 8.
//
#include <cstdio>
#include <cstdlib>
#include <iostream>
using namespace std;

int main(int nNumberofArgs, char* pszArgs[])
{
    // enter the temperature in Celsius
    int nCelsius;
    cout << "Enter the temperature in Celsius: ";
    cin  >> nCelsius;

    // convert Celsius into Fahrenheit values
    int nFahrenheit;

    // nFahrenheit = 9/5 * nCelsius + 32;
    cout << "nCelsius = " << nCelsius << endl;
    int nFactor = 9 / 5;
    cout << "nFactor = " << nFactor << endl;
    int nIntermediate = nFactor * nCelsius;
    cout << "nIntermediate = " << nIntermediate << endl;
    nFahrenheit = nIntermediate + 32;
    cout << "nFahrenheit = " << nFahrenheit << endl;

    // output the results (followed by a NewLine)
    cout << "Fahrenheit value is: ";
    cout << nFahrenheit << endl;

    // wait until user is ready before terminating program
    // to allow the user to see the program results
    cout << "Press Enter to continue..." << endl;
    cin.ignore(10, '\n');
    cin.get();
    return 0;
}

