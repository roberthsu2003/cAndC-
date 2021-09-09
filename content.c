#include <iostream>
using namespace std;

class BMI{
	private:
	float bmi;

	public:
	BMI(string,unsigned short,unsigned short);
	string name;
	unsigned short weight;
	unsigned short height;
	void suggestion();
};

BMI::BMI(string n,unsigned short w,unsigned short h){
	name = n;
	weight = w;
	height = h;
	bmi = w / ((h/100.0) * (h/100.0));
}



void BMI::suggestion(){	
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
	string name;
	cout << "請輸入姓名:";
	cin >> name;

	unsigned short height;
	cout << "請輸入身高:";
	cin >> height;

	unsigned short weight;
	cout << "請輸入體重:";
	cin >> weight;

	BMI p1(name, weight, height);
	cout << "姓名是" << p1.name << endl;
	cout << p1.name + "的身高是" << p1.height << endl;
	cout << p1.name + "的體重是" << p1.weight << endl;
	p1.suggestion();
	return 0;
}
