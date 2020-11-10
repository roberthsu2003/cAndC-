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
}
