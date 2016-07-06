// CustomExceptionClass - demonstrate the flexibility of
//                    the exception mechanism by creating
//                    a custom exception class.
#include <cstdio>
#include <cstdlib>
#include <iostream>
#include <sstream>
#include <exception>
using namespace std;

class ArgOutOfRange : public exception
{
  protected:
    string sMsg;
    int nValue;
    int nMaxLegal;
    int nMinLegal;

  public:
    ArgOutOfRange(const char* pszFName, int nVal,
                  int nMin = 0, int nMax = 0)
    {
        nValue = nVal;
        nMinLegal = nMin;
        nMaxLegal = nMax;

        ostringstream out;
        out << "Argument out of range in " << pszFName
            << ", arg is " << nValue;
        if (nMin != nMax)
        {
            out << ", legal range is "
                << nMin << " to " << nMax;
        }
        out << ends;
        sMsg = out.str();
    }

    virtual const char* what()
    {
        return sMsg.c_str();
    }
};


// factorial - compute factorial
int factorial(int n)
{
    // argument must be positive; throw exception if
    // n is negative
    if (n < 0)
    {
        throw ArgOutOfRange("factorial()", n, 0, 100);
    }

    // anything over 100 will overflow
    if (n > 100)
    {
        throw ArgOutOfRange("factorial()", n, 0, 100);
    }

    // go ahead and calculate factorial
    int nAccum = 1;
    while(n > 1)
    {
        nAccum *= n--;
    }
    return nAccum;
}

int main(int nNumberofArgs, char* pszArgs[])
{
    try
    {
        cout << "Factorial of 3 is "
             << factorial(3)
             << endl;

        cout << "Factorial of -1 is "
             << factorial(-1)
             << endl;

        cout << "Factorial of 5 is "
             << factorial(5)
             << endl;
    }
    catch(ArgOutOfRange e)
    {
        cerr << "Error occurred:\n" << e.what() << endl;
    }
    catch(...)
    {
        cerr << "Unexpected error thrown" << endl;
    }

    // wait until user is ready before terminating program
    // to allow the user to see the program results
    cout << "Press Enter to continue..." << endl;
    cin.ignore(10, '\n');
    cin.get();
    return 0;
}
