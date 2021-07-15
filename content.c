#include <iostream>

using namespace std;

namespace Human{
	class Person{
	public:
		string name;
		int tall;
		void walk(int speed){
			cout << name << "每小時可走" << speed << "公里" << endl;
		}
	};
}

using namespace Human;

int main() {
	Person david;
	david.name = "David";
	david.tall = 180;
	cout << david.name << " 身高=" << david.tall << endl;
	david.walk(13);

	Person robert;
	robert.name = "Robert";
	robert.tall = 170;
	cout << robert.name << " 身高=" << robert.tall << endl;
	robert.walk(15);

	Person *john= new Person();
	john -> name = "John";
	john -> tall = 178;
	cout << john -> name << " 身高=" << john -> tall << endl;
	john -> walk(15);
}
