//
//  PassObjects - this program demonstrates passing an
//                object by value versus passing the
//                address of the object
//
#include <cstdio>
#include <cstdlib>
#include <iostream>
#include <cstring>
using namespace std;


// Savings - a simple savings account class
class Savings
{
  public:
    int    nAccountNumber;
    double dBalance;

    // deposit - deposit an amount to the balance;
    //           deposits must be positive number; return
    //           the resulting balance or zero on error
    double deposit(double dAmount)
    {
        // no negative deposits - that's a withdrawal
        if (dAmount < 0)
        {
            return 0.0;
        }

        // okay - add to the balance and return the total
        dBalance += dAmount;
        return dBalance;
    }

    // withdraw - execute a withdrawal if sufficient funds
    //            are available
    double withdraw(double dAmount)
    {
        if (dBalance < dAmount)
        {
            return 0.0;
        }

        dBalance -= dAmount;
        return dBalance;
    }

    // balance - return the balance of the current object
    double balance()
    {
        return dBalance;
    }
};

// someFunction(Savings) - accept object by value
void someFunction(Savings s)
{
    cout << "In someFunction(Savings)" << endl;

    cout << "Depositing $100" << endl;
    s.deposit(100.0);

    cout << "Balance in someFunction(Savings) is "
         << s.balance() << endl;
}

// someFunction(Savings*) - accept address of object
void someFunction(Savings* pS)
{
    cout << "In someFunction(Savings*)" << endl;

    cout << "Depositing $100" << endl;
    pS->deposit(100.0);

    cout << "Balance in someFunction(Savings) is "
         << pS->balance() << endl;
}

int main(int nNumberofArgs, char* pszArgs[])
{
    Savings s = {0, 0.0};

    // first, pass by value
    someFunction(s);
    cout << "Balance back in main() is "
         << s.balance() << endl;

    // now pass the address
    someFunction(&s);
    cout << "Balance back in main() is "
         << s.balance() << endl;

    // wait until user is ready before terminating program
    // to allow the user to see the program results
    cout << "Press Enter to continue..." << endl;
    cin.ignore(10, '\n');
    cin.get();
    return 0;
}
