#include <iostream>
using namespace std;

class Person{
	public:
	int tall;
	string name;
};


int main() {
	Person david;
	david.name = "David";
	david.tall = 170;

	Person robert;
	robert.name = "Robert";
	robert.tall = 183;

	cout << david.name << "身高=" << david.tall << endl;
	cout << robert.name << "身高=" << robert.tall << endl;
}
