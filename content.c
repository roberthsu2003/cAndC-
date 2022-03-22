#include <iostream>
#include <math.h>
using namespace std;

class BMI{
	public:
	string name;
	int weight;
	int height;
	BMI(string name, int weight, int height);
	float getBMI();
};

BMI::BMI(string name, int weight, int height){
	this->name = name;
	this->weight = weight;
	this->height = height;
}

float BMI::getBMI(){
	return weight / pow(height/100.0, 2);
}

float getBMI(int weight, int height){
	return weight / pow(height/100.0, 2);
}

int main() {
	
	string name;
	int weight;
	int height;
	cout << "input your name:";
	cin >> name;
	cout << "input weight(kg):";
	cin >> weight;
	cout << "input height(cm):";
	cin >> height;
	
	/*
	BMI p1(name,weight,height);
	cout << p1.getBMI() << endl;
	*/

	cout << getBMI(weight,height) << endl;
}
