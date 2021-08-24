#include <iostream>
using namespace std;

namespace Human{
	class Person{
	public:
		//實體欄位
		string name;
		int tall;

		//實體方法
		void walk(int var){
			cout << name << "每小時可以跑" << var << "公里" << endl;
		}
	};
}

using namespace Human;

int main() {
	Person david;
	david.name = "David";
	david.tall = 180;

	cout << david.name << " 身高=" << david.tall << endl;
	david.walk(10);

	Person robert;
	robert.name = "Robert";
	robert.tall = 170;

	cout << robert.name << " 身高=" << robert.tall << endl;
	robert.walk(15);

	Person* john = new Person();
	john->name = "John";
	john->tall = 175;

	cout << john->name << " 身高=" << john -> tall << endl;
	john->walk(20);

	return 0;
}
