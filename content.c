#include <iostream>
using namespace std;

class BMI{
	public:
		BMI(string n, int h, int w);
		string name;
		int height;
		int weight;
		float bmi();

};

BMI::BMI(string n, int h, int w){
	name = n;
	height = h;
	weight = w;
}

float BMI::bmi(){
	return weight / ((height / 100.0) * (height / 100.0));
}

int main() {
	BMI user1("robert",175,76);
	cout << "name=" << user1.name << endl;
	cout << "height=" << user1.height << endl;
	cout << "weight=" << user1.weight << endl;
	cout << "bmi=" << user1.bmi() << endl;
	
} 
