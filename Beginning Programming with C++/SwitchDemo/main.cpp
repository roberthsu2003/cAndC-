// SwitchDemo - demonstrate the switch statement by
//              displaying the name of the month
//
#include <cstdio>
#include <cstdlib>
#include <iostream>

using namespace std;

int main(int nNumberofArgs, char* pszArgs[])
{

    int nMonth;
    cout << "Enter the number of the month: ";
    cin  >> nMonth;

    switch (nMonth)
    {
      case  1:
        cout << "It's January"  << endl;
        break;
      case  2:
        cout << "It's February" << endl;;
        break;
      case  3:
        cout << "It's March"    << endl;;
        break;
      case  4:
        cout << "It's April"    << endl;;
        break;
      case  5:
        cout << "It's May"      << endl;;
        break;
      case  6:
        cout << "It's June"     << endl;;
        break;
      case  7:
        cout << "It's July"     << endl;;
        break;
      case  8:
        cout << "It's August"   << endl;;
        break;
      case  9:
        cout << "It's September"<< endl;;
        break;
      case 10:
        cout << "It's October"  << endl;;
        break;
      case 11:
        cout << "It's November" << endl;;
        break;
      case 12:
        cout << "It's December" << endl;;
        break;
      default:
        cout << "That's not a valid month" << endl;;

    }

    // wait until user is ready before terminating program
    // to allow the user to see the program results
    system("PAUSE");
    return 0;
}

