#include <iostream>
#include "person.h"
using namespace std;

int main() {
	Person p1;
	bool m;
	int height;
	int weight;
	cout << "請輸入姓名:";
	cin >> p1.name;
	
	do{
		cout << "請輸入身高(cm):";
		cin >> height;
		m = p1.setHeight(height);
	}while(m == false);
	
	do{
		cout << "請輸入體重(kg):";
		cin >> weight;
		m = p1.setWeight(weight);
	}while(m == false);
	

	cout << p1.name << "您好:" << endl;
	printf("您的bmi是%.2f\n",p1.getBmi());
	p1.suggestion();
	
	
}



