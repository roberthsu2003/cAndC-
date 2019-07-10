//============================================================================
// Name        : interest1.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <math.h>
using namespace std;
int year_total(int,int,float);
int month_total(int, int, float);
int main() {
	int money, years, rate;
	cout << "==複利率本利和試算==\n";
	cout << "1.請輸入本金:(元)";
	cin >> money;
	cout << "2.請輸入年利率(%):";
	cin >> rate;
	cout << "3.幾年後領回:";
	cin >> years;
	cout << "\n\n***每年計息一次 ,"<< years << "後領回本利和" << year_total(money, years, rate/100.0);
	cout << "\n\n***每月計息一次 ,"<< years << "後領回本利和" << month_total(money, years, rate/100.0);
	return 0;
}
int year_total(int money,int year ,float rate){
	return money * pow(1 + rate,year);
}
int month_total(int money, int year, float rate){
	return money * pow(1 + rate/12, year*12);
}
