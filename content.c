#include <iostream>
using namespace std;

class Person{
	public:
	int tall;
	string name;

	//實體的方法
	void walk(int var){
		cout << name << "每小時可以跑多少" << var << "公里" << endl;
	}

};


int main() {
	Person david;
	david.name = "David";
	david.tall = 170;
	david.walk(20);

	Person robert;
	robert.name = "Robert";
	robert.tall = 183;
	robert.walk(25);
	
	cout << david.name << "身高=" << david.tall << endl;
	cout << robert.name << "身高=" << robert.tall << endl;
}
