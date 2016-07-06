// PrintArgs - print the arguments to the program
#include <cstdio>
#include <cstdlib>
#include <iostream>
using namespace std;


int main(int nNumberofArgs, char* pszArgs[])
{
    for(int n = 0; n < nNumberofArgs; n++)
    {
        cout << "Argument " << n
             << " is <" << pszArgs[n]
             << ">" << endl;
    }

    // wait until user is ready before terminating program
    // to allow the user to see the program results
    cout << "Press Enter to continue..." << endl;
    cin.ignore(10, '\n');
    cin.get();
    return 0;
}
