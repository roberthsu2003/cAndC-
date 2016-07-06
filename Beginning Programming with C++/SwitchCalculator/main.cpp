// SwitchCalculator - use the switch statement to
//                    implement a calculator

#include <cstdio>
#include <cstdlib>
#include <iostream>

using namespace std;

int main(int nNumberofArgs, char* pszArgs[])
{
    // enter operand1 op operand2
    int  nOperand1;
    int  nOperand2;
    char cOperator;
    cout << "Enter 'value1 op value2'\n"
         << "where op is +, -, *, / or %:" << endl;
    cin >> nOperand1 >> cOperator >> nOperand2;

    // echo what the operator entered
    cout << nOperand1 << " "
         << cOperator << " "
         << nOperand2 << " = ";

    // now calculate the result; remember that the
    // user might enter something unexpected
    switch (cOperator)
    {
        case '+':
            cout << nOperand1 + nOperand2;
            break;
        case '-':
            cout << nOperand1 - nOperand2;
            break;
        case '*':
        case 'x':
        case 'X':
            cout << nOperand1 * nOperand2;
            break;
        case '/':
            cout << nOperand1 / nOperand2;
            break;
        case '%':
            cout << nOperand1 % nOperand2;
            break;
        default:
            // didn't understand the operator
            cout << " is not understood";
    }
    cout << endl;

    // wait until user is ready before terminating program
    // to allow the user to see the program results
    cout << "Press Enter to continue..." << endl;
    cin.ignore(10, '\n');
    cin.get();
    return 0;}
