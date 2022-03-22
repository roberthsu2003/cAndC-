#include <iostream>
#include <math.h>
using namespace std;

class BMI{
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

int main() {
  std::cout << "Hello World!\n";
}
