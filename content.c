#include <iostream>

using namespace std;
class Person {
public:
  string name;
};

int main() {
  Person p1; //預設建構式
  p1.name = "robert";

  Person p2;
  p2.name = "Ting";

  cout << "p1.name:" << p1.name << endl;
  cout << "p2.name:" << p2.name << endl;

	Person *p3 = new Person();
	p3 -> name = "john";
	cout << "p3的name" << p3->name << endl;
}
