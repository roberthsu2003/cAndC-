//============================================================================
// Name        : interest.cpp
//試寫一個計算定存本利和的複利函式。程式執行時會要求您輸入定在本金金額，幾年後領回，年利率，最後再算出n年後領回多少總金額。計算方式採每年計息一次及每月計算1次
//本利和計算公式:
//1.每年計息一次的公式:
//本利和 = 本金 * (1+年利率)(年數)次方
//
//2.每月計息一次的公式:
//本利和 = 本金 * (1+年利率/12)(年數*12)次方

#include <iostream>
#include <math.h>
using namespace std;
int year_total(int, int, float);
int mon_total(int, int, float);

int main() {
	cout << "!!!Hello World!!!" << endl; // prints !!!Hello World!!!
	return 0;
}

int year_total(int vmoney, int vyears, float vper_rate){
	return vmoney * pow(1+vper_rate, vyears);
}

int mon_total(int vmoney, int vyears, float vper_rate){
	return vmoney * pow(1+(vper_rate/12), vyears*12);
}
