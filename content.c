#include <iostream>
using namespace std;

class BMI{
	private:
	float bmi();

	public:
	string name;
	unsigned short weight;
	unsigned short height;
	void suggestion();
};

float BMI::bmi(){
	return weight / ((height/100.0) * (height/100.0));
}

void BMI::suggestion(){
	float bmi = BMI::bmi();
	cout << name + "的bmi是" << bmi << endl;

	string suggest;
	if(bmi< 18.5){
		suggest = "體重過輕";
	}else if(bmi<24){
		suggest = "體重正常";
	}else if(bmi < 27){
		suggest = "過重";
	}else if(bmi < 30){
		suggest = "輕度肥胖";
	}else if(bmi < 35){
		suggest = "中度肥胖";
	}else{
		suggest = "重度肥胖";		
	}
	cout << "提醒:" << suggest << endl;
}

int main() {
	BMI p1;
	cout << "請輸入姓名:";
	cin >> p1.name;
	cout << "請輸入身高:";
	cin >> p1.height;
	cout << "請輸入體重:";
	cin >> p1.weight;
	cout << "姓名是" << p1.name << endl;
	cout << p1.name + "的身高是" << p1.height << endl;
	cout << p1.name + "的體重是" << p1.weight << endl;
	p1.suggestion();
	return 0;
}
