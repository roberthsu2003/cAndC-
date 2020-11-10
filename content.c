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
	david.tall = 180;
	cout << david.name << " 身高=" << david.tall << endl;
	david.walk(20);

	Person robert;
	robert.name = "Robert";
	robert.tall = 183;
	cout << robert.name << " 身高=" << robert.tall << endl;
	robert.walk(40);
}
