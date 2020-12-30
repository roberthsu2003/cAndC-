#include <iostream>
using namespace std;

class Person{
	public:
		int tall;
		string name;
};

int main() {
	Person david;
	david.tall = 180;
	david.name = "David";
	cout << david.name << " 身高=" << david.tall << endl;
}
