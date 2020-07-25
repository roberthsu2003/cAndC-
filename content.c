#include <iostream>
using namespace std;

namespace Human{
	class Person{
	public:
		string name;
		int tall;
		int weight;
		void walk(int); //將方法定義在類別的外面
		float bmi(void);
	};
	//:: 類別範圍解析子
	void Person::walk(int var){
			cout << name << "每小時可跑" << var << "公里" << endl;
	}

	float Person::bmi(){
		float myBmi = weight / ((tall / 100.0) * (tall / 100.0));
		return myBmi;
	}
}

using namespace Human;

int main() {
	Person david;
	david.name = "David";
	david.tall = 170;
	david.weight = 60;
	cout << "david's name:" << david.name << endl;
	cout << "david's tall:" << david.tall << endl;
	david.walk(20);
	cout << "david's bmi:" << david.bmi() << endl;

	cout << "===========================\n";
	
	Person robert;
	robert.name = "Robert";
	robert.tall = 180;
	robert.weight = 75;
	cout << "robert's name:" << robert.name << endl;
	cout << "robert's tall:" << robert.tall << endl;
	robert.walk(30);
	cout << "robert's bmi:" << robert.bmi() << endl; 
}
