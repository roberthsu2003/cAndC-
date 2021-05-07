#include <iostream>
#include "source.h"
using namespace std;
using namespace Human;

int main() {
	Person david;
	david.name = "David Hsu";
	cout << "david的姓名:" << david.name << endl;
	david.tall = 180;
	cout << "david的高度是:" << david.tall << "公分" << endl;
	david.walk(8);
	david.weight = 78;
	printf("david的bmi是%.2f\n",david.bmi());

	cout << "=======================\n";

	Person robert;
	robert.name = "Robert Hsu";
	cout << "robert的姓名:" << robert.name << endl;
	robert.tall = 183;
	cout << "robert的高度是:" << robert.tall << "公分" << endl;
	robert.walk(8);
	robert.weight = 80;
	printf("robert的bmi是%.2f\n",robert.bmi());
}


//sourc.h
#include <iostream>
using namespace std;
namespace Human{
	class Person{
		private:
		public:
			//field欄位
			string name;
			int tall;
			int weight;
			//method方法
			//定義方法原型,告知有這個method,但定義在類別外面
			void walk(int);
			float bmi(void);
	};
}
	
//sourc.cpp
#include "source.h"
using namespace Human;

//這是Person類別內的方法
	void Person::walk(int var){
				cout << name << "每小時可以跑多少" << var << "公里" << endl;
			}

	//這是Person類別內的方法
	float Person::bmi(void){
		return weight / ((tall/100.0) * (tall/100.0));
	}

