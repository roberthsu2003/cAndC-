#include <iostream>
#include "source.h"
using namespace std;
using namespace Human;

int main() {
	Person david("David Hsu",180,78);	
	cout << "david的姓名:" << david.name << endl;	
	cout << "david的高度是:" << david.tall << "公分" << endl;
	david.walk(8);	
	printf("david的bmi是%.2f\n",david.bmi());

	cout << "=======================\n";

	Person robert("Robert Hsu",183,80);	
	cout << "robert的姓名:" << robert.name << endl;	
	cout << "robert的高度是:" << robert.tall << "公分" << endl;
	robert.walk(8);	
	printf("robert的bmi是%.2f\n",robert.bmi());
}

source.h


#ifndef __SOURCE__
#define __SOURCE__

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
			//定義建構式
			Person(string n, int t, int w);
			//method方法
			//定義方法原型,告知有這個method,但定義在類別外面
			//walk會傳出列印時速
			void walk(int);
			//bmi是計算bmi
			float bmi(void);
	};
}

#endif
	




//source.cpp

#include "source.h"
using namespace Human;
using namespace std;

//這是實作Person類別的建構式
Person::Person(string n, int t, int w){
	name = n;
	tall = t;
	weight = w;
}

//這是Person類別內的方法
	void Person::walk(int var){
				cout << name << "每小時可以跑多少" << var << "公里" << endl;
			}

	//這是Person類別內的方法
	float Person::bmi(void){
		return weight / ((tall/100.0) * (tall/100.0));
	}
