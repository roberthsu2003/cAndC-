#include <iostream>
using namespace std;
class Person {
public:
  string name;
	double us;
	Person(string n,double money){ //自訂的建構式
		name = n;
		us = money;
	}
};

int main() {
  Person p1("徐國堂",10);
  cout << p1.name << endl;
	cout << p1.us << endl;

  Person p2("張xx",20);
  cout << p2.name << endl;
	cout << p2.us << endl;
}
