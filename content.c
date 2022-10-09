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
	//一般變數
  Person p1;
  p1.name = "robert";
  p1.age = 30;

  cout << "p1的name:" << p1.name << endl;
  cout << "p1的age:" << p1.age << endl;

	//指標變數
	Person* p2 = new Person();
	p2 -> name = "alice";
	p2 -> age = 23;

	cout << "p2的name:" << p2->name << endl;
  cout << "p2的age:" << p2->age << endl;
	
}
