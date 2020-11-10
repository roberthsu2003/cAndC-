#include <iostream>
#include "Human.h"

using namespace std;
using namespace Human;

int main() {
	Person david;
	david.name = "David";
	david.height = 180;
	david.weight = 60;
	cout << "david's name:" << david.name << endl;
	cout << "david's height:" << david.height << endl;
	david.walk(40);
	cout << "david'd bmi:" << david.bmi() << endl;
	printf("david'd bmi:%.2f\n", david.bmi());

}


Human.h
#include <iostream>
using namespace std;

namespace Human{
	class Person{
		public:
			string name;
			int height;
			int weight;
			void walk(int);//原型宣告
			float bmi(void);//原型宣告		

	};
	
	
}

using namespace Human;


void Person::walk(int var){
	cout << name << "每小時可跑" << var << "公里" << endl;
}

float Person::bmi(void){
	return weight / ((height/100.0) * (height/100.0));
}
