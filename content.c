#include <iostream>
using namespace std;

class Person{
	public:
		string name;
};



int main() {
	Person p1;
	p1.name="robert";

	Person p2;
	p2.name = "david";

	cout << "p1的名字是:" << p1.name << endl;
	cout << "p2的名字是:" << p2.name << endl;
}
