#include <iostream>
using namespace std;

class Person{
	public:
		string name;
		int tall;
};

int main() {
	Person david;
	david.name = "David";
	david.tall = 180;

	cout << david.name << " 身高=" << david.tall << endl;

	Person robert;
	robert.name = "Robert";
	robert.tall = 170;

	cout << robert.name << " 身高=" << robert.tall << endl;

	Person* john = new Person();
	john->name = "John";
	john->tall = 175;

	cout << john->name << " 身高=" << john -> tall << endl;

	return 0;
}
