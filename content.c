#include <iostream>
#include <math.h>
#include <string.h>

using namespace std;


int main() {
	int value;
	cout << "請輸入要開根號的值:";
	cin >> value;
	cout << value << "開根號的值是" << sqrt(value) << endl;
	cout << max(10,5) << endl;
	cout << min(10,5) << endl;
	cout << pow(13,3) << endl;

	for(int i=1; i<=50; i++){
		cout << "學號" + to_string(i) << endl;
	}
} 
