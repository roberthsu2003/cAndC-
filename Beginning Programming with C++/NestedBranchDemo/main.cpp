// NestedBranchDemo - demonstrate the nested if statements
//
#include <cstdio>
#include <cstdlib>
#include <iostream>

using namespace std;

int main(int nNumberofArgs, char* pszArgs[])
{
    // enter operand1 and operand2
    int  nOperand1;
    int  nOperand2;
    cout << "Enter argument 1:";
    cin  >> nOperand1;
    cout << "Enter argument 2:";
    cin  >> nOperand2;

    // now print the results
    if (nOperand1 > nOperand2)
    {
        cout << "Argument 1 is greater than argument 2"
             << endl;
    }
    else
    {
        if (nOperand1 < nOperand2)
        {
            cout << "Argument 1 is less than argument 2"
                 << endl;
        }
        else
        {
            cout << "Argument 1 is equal to argument 2"
                 << endl;
        }
    }

    // wait until user is ready before terminating program
    // to allow the user to see the program results
    system("PAUSE");
    return 0;
}
