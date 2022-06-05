main.h

#include <iostream>
#include "tools.h"

#include <iostream>
#include "tools.h"

People p1("robert",170, 76);
People p2("john", 180, 80);
using namespace std;

int main() {	

	cout << p1.name << endl;
	cout << p1.height << endl;
	cout << p1.weight << endl;
	cout << p1.bmi() << endl;
	

	cout << p2.name << endl;
	cout << p2.height << endl;
	cout << p2.weight << endl;
	cout << p2.bmi() << endl;
}

tools.h
#ifndef __TOOLS_H__
#define __TOOLS_H__

#include <iostream>
#define SQUARE(x) ((x)*(x))
using namespace std;

class People{
	public:
		//實體欄位
		string name;
		int height;
		int weight;
		
		//實體方法
		float bmi(){
			return weight / SQUARE(height/100.0);
		}
		//自訂建構式
		People(string n, int h, int w){
			name = n;
			height = h;
			weight = w;
		}
};


#endif
