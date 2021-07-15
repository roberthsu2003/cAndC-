#include <iostream>

using namespace std;

class Person{
	public:
	string name;
	int height;
	int weight;
	Person(string name,int height, int weight){
		this -> name = name;
		this -> height = height;
		this -> weight = weight;
	}
};

int main() {
	Person p1("徐國堂",179, 80);
	cout << "姓名:" << p1.name << endl;
	cout << "身高:" << p1.height << endl;
	cout << "體重:" << p1.weight << endl;

	Person p2("robert",170, 72);
	cout << "姓名:" << p2.name << endl;
	cout << "身高:" << p2.height << endl;
	cout << "體重:" << p2.weight << endl;
}
