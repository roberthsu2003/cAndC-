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

	return 0;
}
