#include <iostream>

using namespace std;
typedef enum day {
  saturday = 10,
  sunday,
  monday,
  tuesday,
  wednesday,
  thursday,
  friday
} Day;

int main() {
  Day today = wednesday;
  cout << wednesday << endl;
}
