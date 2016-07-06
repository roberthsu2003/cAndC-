//
//  NestedLoops - this program uses a nested loop to
//                display multiplication tables.
//
#include <cstdio>
#include <cstdlib>
#include <iostream>
using namespace std;

int main(int nNumberofArgs, char* pszArgs[])
{
    // display the column headings
    int nColumn = 0;
    cout << "    ";
    while (nColumn < 10)
    {
        // set the display width to two characters
        // (even for one digit numbers)
        cout.width(2);

        // now display the column number
        cout << nColumn << " ";

        // increment to the next column
        nColumn++;
    }
    // go to the next row
    cout << endl;

    // now go loop through the rows
    int nRow = 0;
    while (nRow < 10)
    {
        // start with the row value
        cout << nRow << " - ";

        // now for each row, start with column 0 and
        // go through column 9
        nColumn = 0;
        while(nColumn < 10)
        {
            // display the product of the column*row
            // (use 2 characters even when product is
            // a single digit)
            cout.width(2);
            cout << nRow * nColumn << " ";

            // go to next column
            nColumn++;
        }

        // go to next row
        nRow++;
        cout << endl;
    }

    // wait until user is ready before terminating program
    // to allow the user to see the program results
    cout << "Press Enter to continue..." << endl;
    cin.ignore(10, '\n');
    cin.get();
    return 0;
}

