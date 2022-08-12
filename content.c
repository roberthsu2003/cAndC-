#include <iostream>

using namespace std;
class Person {
private:
  string _name; //instance field

public:
  string name() { return _name; }

  void setName(string n) { //instance method
    if (n == "") {
      _name = "沒有名字";
    } else {
      _name = n;
    }
  }
};

int main() {
  Person p1;
  p1.setName("");
  cout << p1.name() << endl;
}
