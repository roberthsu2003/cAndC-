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
int main() {
  Person p1;
  p1.name = "robert";
  p1.age = 30;

  cout << "p1的name:" << p1.name << endl;
  cout << "p1的age:" << p1.age << endl;

	Person p2;
  p2.name = "alice";
  p2.age = 23;

  cout << "p2的name:" << p2.name << endl;
  cout << "p2的age:" << p2.age << endl;

	Person p3 = p2;
	p3.name = "jenny";
  p3.age = 34;
	
	
	cout << "p3的name:" << p3.name << endl;
  cout << "p3的age:" << p3.age << endl;
}
