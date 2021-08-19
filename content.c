#include <iostream>
using namespace std;
int add(int a, int b){
	return a + b;
}

int multiply(int a, int b){
	return a * b;
}

int main() {
	int first;
	int second;
	cout << "請輸入第一個數值:";
	cin >> first;
	cout << "請輸入第二個數值:";
	cin >> second;
	cout << first << "+" << second << "=" << add(first,second) << endl;
	cout << first << "*" << second << "=" << multiply(first,second) << endl;
  return 0;
}
