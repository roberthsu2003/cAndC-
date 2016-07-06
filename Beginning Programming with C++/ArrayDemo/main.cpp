//
//  ArrayDemo - demonstrate the use of an array
//              to accumulate a sequence of numbers
//
#include <cstdio>
#include <cstdlib>
#include <iostream>

using namespace std;

// displayArray - displays the contents of the array
//                of values of length nCount
void displayArray(int nValues[100], int nCount)
{
    for(int i = 0; i < nCount; i++)
    {
        cout.width(3);
        cout << i << " - " << nValues[i] << endl;
    }
}

// averageArray - averages the contents of an array
//                of values of length nCount
int averageArray(int nValues[100], int nCount)
{
    int nSum = 0;
    for(int i = 0; i < nCount; i++)
    {
        nSum += nValues[i];
    }
    return nSum / nCount;
}

int main(int nNumberofArgs, char* pszArgs[])
{
    int nScores[100];
    int nCount;

    // prompt the user for input
    cout << "This program averages a set of scores\n"
         << "Enter scores to average\n"
         << "(enter a negative value to terminate input"
         << endl;
    for(nCount = 0; nCount < 100; nCount++)
    {
        cout << "Next: ";
        cin >> nScores[nCount];
        if (nScores[nCount] < 0)
        {
            break;
        }
    }

    // now output the results
    cout << "Input terminated." << endl;
    cout << "Input data:" << endl;
    displayArray(nScores, nCount);
    cout << "The average is "
         << averageArray(nScores, nCount)
         << endl;

    // wait until user is ready before terminating program
    // to allow the user to see the program results
    cout << "Press Enter to continue..." << endl;
    cin.ignore(10, '\n');
    cin.get();
    return 0;
}
