#include <iostream>
using namespace std;
class Person {
public:
  string name;
};

int main() {
  Person p1;
  p1.name = "徐國堂";
  cout << p1.name << endl;

  Person p2;
  p2.name = "張xx";
  cout << p2.name << endl;
}
