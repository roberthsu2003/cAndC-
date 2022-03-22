#include <iostream>
#include <math.h>
using namespace std;

class BMI{
	private:
    int weight;
	int height;
	public:
	string name;	
	BMI(string name, int weight, int height);

    int getWeight();
    void setWeight(int weight);
    int getHeight();
    void setHeight(int height);

	float getBMI();
    string suggestion();
};

int BMI::getWeight(){
    return weight;
}
void BMI::setWeight(int weight){
     if(weight > 200){
        this->weight = 200;    
	 }else if (weight < 40){
		 this->weight = 40;
	 }else{
		 this -> weight = weight;
	 }
     
}

int BMI::getHeight(){
    return height;
}
void BMI::setHeight(int height){
    if(height > 200){
        this->height = 200;    
	 }else if (height < 140){
		 this->height = 140;
	 }else{
		 this -> height = height;
	 } 
}

BMI::BMI(string name, int weight, int height){
	this->name = name;
	setWeight(weight);
	setHeight(height);
}

float BMI::getBMI(){
	return weight / pow(height/100.0, 2);
}

string BMI::suggestion(){
    float bmi = getBMI();
    string message;
    if(bmi<18.5){
       message = "體重過輕";
	}else if(bmi < 24){
       message = "正常範圍";
	}else if(bmi < 27){
       message = "過重";
	}else if(bmi < 30){
       message = "輕度肥胖";
	}else if(bmi < 35){
       message = "中度肥胖";
	}else{
       message = "重度肥胖";
	}
    return message;
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
	
	
	BMI p1(name,weight,height);
    cout << p1.name << endl;
    cout << p1.getHeight() << endl;
    cout << p1.getWeight() << endl;
	cout << p1.getBMI() << endl;
	cout << p1.suggestion() << endl;
}
