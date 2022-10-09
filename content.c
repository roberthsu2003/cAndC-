#include <iostream>
using namespace std;
namespace Human {
class Person {
public:
  string name;
  int age;
};
} // namespace Human

using namespace Human;

// call by address
void addData(Person *person, string name, int age) {
  person->name = name;
  person->age = age;
}

int main() {
  //指標變數
  Person *p1 = new Person();
  addData(p1, "robert", 30);
  cout << "p1的name:" << p1->name << endl;
  cout << "p1的age:" << p1->age << endl;
}
