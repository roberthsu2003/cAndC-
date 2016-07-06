//
//  AmbiguousBindng - demonstrates a case where it's not
//                    clear what should happen. In this
//                    case, C++ goes with early binding
//                    while languages like Java and C#
//                    use late binding.
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

double someFn(Student* pS)
{
    return pS->calcTuition();
}

int main(int nNumberofArgs, char* pszArgs[])
{
    // the following calls Student::calcTuition()
    Student s;
    cout << "The value of someFn(&s) is "
         << someFn(&s)
         << endl;

    // the following calls GraduateStudent::calcTuition()
    GraduateStudent gs;
    cout << "The value of someFn(&gs) is "
         << someFn(&gs)
         << endl;

    // wait until user is ready before terminating program
    // to allow the user to see the program results
    cout << "Press Enter to continue..." << endl;
    cin.ignore(10, '\n');
    cin.get();
    return 0;
}
