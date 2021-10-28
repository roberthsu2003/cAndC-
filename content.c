#include <iostream>
using namespace std;

class BMI{
	public:
		BMI(string n, int h, int w);
		string name;
		int height;
		int weight;
		float bmi();
		void suggestion();

};

BMI::BMI(string n, int h, int w){
	name = n;
	height = h;
	weight = w;
}

float BMI::bmi(){
	return weight / ((height / 100.0) * (height / 100.0));
}

void BMI::suggestion(){
	string message;
	float bmiValue = bmi();
	if(bmiValue < 18.5){
		message = "體重過輕";
	}else if(bmiValue < 24){
		message = "正常範圍";
	}else if(bmiValue < 27){
		message = "過重";
	}else if(bmiValue < 30){
		message="輕度肥胖";
	}else if(bmiValue < 35){
		message="中度肥胖";
	}else{
		message="重度肥胖";
	}
	cout << "BMI:" << bmiValue << endl;
	cout << "醫生建議:" << message << endl;
}


int main() {
	BMI user1("robert",175,80);
	cout << "name=" << user1.name << endl;
	cout << "height=" << user1.height << endl;
	cout << "weight=" << user1.weight << endl;
	user1.suggestion();
	return 0;
} 
