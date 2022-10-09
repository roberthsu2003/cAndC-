#include <iostream>
using namespace std;

class Person{
	public:
		string name;
		int age;
};

int main() {
	Person p1;
	p1.name = "robert";
	p1.age = 30;

	cout << p1.name << endl;
	cout << p1.age << endl;
}
