#include <iostream>
using namespace std;

void change_value(){
	static int n = 0; //靜態變數
	n++;
	cout << "n的值是:" << n << endl;
}

int main() {
	change_value();
	change_value();
	change_value();
}
