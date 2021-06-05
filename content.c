#include <iostream>
#include "temp.h"
using namespace std;

int main() {
	int v;
	float result;
  	cout << "請輸入攝氏溫度:";
	cin >> v;
	result = temperature(v);
	cout << "華氏溫度=" << result << endl;
  return 0;
}

temp.h
float temperature(int value){
	return 1.8 * value + 32;
}
