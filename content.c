#include <iostream>
using namespace std;

class Person{
	public:
		string name;
		int tall;
		void walk(int var){
			cout << name << "每小時可跑" << var << "公里" << endl;
		}
};

int main() {
	Person david;
	david.name = "David";
	david.tall = 170;
	cout << "david's name:" << david.name << endl;
	cout << "david's tall:" << david.tall << endl;
	david.walk(20);

	Person robert;
	robert.name = "Robert";
	robert.tall = 180;
	cout << "robert's name:" << robert.name << endl;
	cout << "robert's tall:" << robert.tall << endl;
	robert.walk(30);
}
