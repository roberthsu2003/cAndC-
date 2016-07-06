// CalculatorError2 - the CalculatorError program with
//                    a debug function that makes the
//                    error obvious
//
#include <cstdio>
#include <cstdlib>
#include <iostream>
using namespace std;

void printErr(int nLN, char cOperator, int nOp1, int nOp2)
{
    cout << "On line " << nLN
         << ": \'" << cOperator
         << "\' operand 1 = " << nOp1
         << " and operand 2 = " << nOp2
         << endl;
}

// prototype declarations
int calculator(char cOperator, int nOper1, int nOper2);

int main(int nNumberofArgs, char* pszArgs[])
{
    // enter operand1 op operand2
    int  nOper1;
    int  nOper2;
    char cOperator;
    cout << "Enter 'value1 op value2'\n"
         << "where op is +, -, *, / or %:" << endl;
    cin >> nOper1 >> cOperator >> nOper2;

    // echo what the user entered followed by the
    // results of the operation
    cout << nOper1 << " "
         << cOperator << " "
         << nOper2 << " = "
         << calculator(cOperator, nOper1, nOper2)
         << endl;

    // wait until user is ready before terminating program
    // to allow the user to see the program results
    cout << "Press Enter to continue..." << endl;
    cin.ignore(10, '\n');
    cin.get();
    return 0;
}

// calculator -return the result of the cOperator
//             operation performed on nOper1 and nOper2
int calculator(char cOperator, int nOper1, int nOper2)
{
    printErr(__LINE__, cOperator, nOper1, nOper2);
    int nResult = 0;
    switch (cOperator)
    {
        case '+':
            printErr(__LINE__, cOperator, nOper1, nOper2);
            nResult = nOper1 + nOper2;
        case '-':
            printErr(__LINE__, cOperator, nOper1, nOper2);
            nResult = nOper1 - nOper2;
            break;
        case '*':
        case 'x':
        case 'X':
            printErr(__LINE__, cOperator, nOper1, nOper2);
            nResult = nOper1 * nOper2;
            break;
        case '/':
            printErr(__LINE__, cOperator, nOper1, nOper2);
            nResult = nOper1 / nOper2;
            break;
        case '%':
            printErr(__LINE__, cOperator, nOper1, nOper2);
            nResult = nOper1 % nOper2;
            break;
        default:
            // didn't understand the operator
            cout << " is not understood";
    }
    return nResult;
}
