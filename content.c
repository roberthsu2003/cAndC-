#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	float top, bottom, height, area;
	cout << "請輸入梯形的上底(公分):";
	cin >> top;
	
	cout << "請輸入梯形的下底(公分):";
	cin >> bottom;
	
	cout << "請輸入梯形的高(公分):";
	cin >> height;
	area = (top + bottom) * height / 2;
	
	cout << "梯形的面積:" << area << "平方公分\n";
	return 0;
}
