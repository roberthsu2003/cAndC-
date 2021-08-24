main.cpp

#include <iostream>
#include "human.h"

using namespace std;
using namespace Human;

int main() {
	Person david;
	david.name = "David";
	david.tall = 180;
	david.weight = 76;

	cout << david.name << " 身高=" << david.tall << endl;
	cout << david.name << " 體重=" << david.weight << endl;
	cout << david.name << " bmi=" << david.bmi() << endl;
	david.walk(10);
	

	Person robert;
	robert.name = "Robert";
	robert.tall = 170;
	robert.weight = 69;

	cout << robert.name << " 身高=" << robert.tall << endl;
	cout << robert.name << " 體重=" << robert.weight << endl;
	cout << robert.name << " bmi=" << robert.bmi() << endl;
	robert.walk(15);

	Person* john = new Person();
	john->name = "John";
	john->tall = 175;
	john->weight = 72;

	cout << john->name << " 身高=" << john -> tall << endl;
	cout << john->name << " 體重=" << john -> weight << endl;
	cout << john->name << " bmi=" << john -> bmi() << endl;
	john->walk(20);

	return 0;
}


human.h
#ifndef _HUMAN_H_
#define _HUMAN_H_

#include <iostream>
using namespace std;
namespace Human{
	class Person{
	public:
		//實體欄位
		string name;
		int tall;
		int weight;

		//實體方法
		void walk(int var){
			cout << name << "每小時可以跑" << var << "公里" << endl;
		}

		float bmi(){
			float myBmi = weight / ((tall/100.0) * (tall/100.0));
			return myBmi;
		}
	};
}

#endif
