#include <iostream>
using namespace std;

class Person{
	public:
		string name;
};

int main() {
	Person david;
	david.name = "David";
	cout << "david's name" << david.name << endl;
	
	Person robert;
	robert.name = "Robert";
	cout << "robert's name" << robert.name << endl;
}
