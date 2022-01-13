main.cpp

#include <iostream>
#include "tool.h"
using namespace std;



int main() {
	int radius;
	cout << "請輸入半徑:";
	cin >> radius;
	cout << "圓面積是:" <<  Tools::circleArea(radius) << endl;

	cout << "矩形面積是:" << rectangleArea(100, 150) << endl;
} 

tools.h
// #define
// function
// 類別


float circleArea(int radius){
		return radius * radius * 3.14159;
}

float rectangleArea(int width, int height){
		return width * height;
}

class Tools{
	public:
	static float circleArea(int radius){
		return radius * radius * 3.14159;
	}

	static int add(int a, int b){
		return a + b;
	}

	static float rectangleArea(int width, int height){
		return width * height;
	}
};
