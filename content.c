#include <iostream>
#include <math.h>

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

	float getBmi(){
		return weight / pow((height/100.0),2);
	}
};

int main() {
	Person p1("徐國堂",179, 80);
	cout << "姓名:" << p1.name << endl;
	cout << "身高:" << p1.height << endl;
	cout << "體重:" << p1.weight << endl;
	cout << "BMI:" << p1.getBmi() << endl;

	Person p2("robert",170, 72);
	cout << "姓名:" << p2.name << endl;
	cout << "身高:" << p2.height << endl;
	cout << "體重:" << p2.weight << endl;
	cout << "BMI:" << p2.getBmi() << endl;
}
