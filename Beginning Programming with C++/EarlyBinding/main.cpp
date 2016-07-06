//
//  EarlyBinding - demonstrates early binding in
//                 overriding one member function with
//                 another in a subclass.
//
#include <cstdio>
#include <cstdlib>
#include <iostream>
using namespace std;

class Student
{
  public:
    double calcTuition() { return 0.0; }
};

class GraduateStudent : public Student
{
  public:
    double calcTuition() { return 1.0; }
};

int main(int nNumberofArgs, char* pszArgs[])
{
    // the following calls Student::calcTuition()
    Student s;
    cout << "The value of s.calcTuition() is "
         << s.calcTuition()
         << endl;

    // the following calls GraduateStudent::calcTuition()
    GraduateStudent gs;
    cout << "The value of gs.calcTuition() is "
         << gs.calcTuition()
         << endl;

    // wait until user is ready before terminating program
    // to allow the user to see the program results
    cout << "Press Enter to continue..." << endl;
    cin.ignore(10, '\n');
    cin.get();
    return 0;
}
