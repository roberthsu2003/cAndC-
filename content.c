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

// call by value
Person addData(Person person, string name, int age) {
  person.name = name;
  person.age = age;
  return person;
}

int main() {
  //一般變數
  Person p1;
  p1 = addData(p1, "robert", 30);
  cout << "p1的name:" << p1.name << endl;
  cout << "p1的age:" << p1.age << endl;
}
