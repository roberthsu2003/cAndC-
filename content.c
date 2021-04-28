#include <iostream>
using namespace std;
//多載(overloading)
int area(int a){
	return a * a;
}

int area(int a, int b){
	return a * b;
}

int main() {
	int side1;
	int side2;
	int side3;
	cout << "請輸入正方形的邊:";
	cin >> side1;
	cout << "正方形的面積是:" << area(side1) << endl;
	cout << "請輸入長方形的2邊(x,y):";
	scanf("%d,%d",&side2,&side3);
	cout << "矩形面積是=" << area(side2, side3) << endl; 
	return 0;
}
