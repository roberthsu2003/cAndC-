#include <iostream>
using namespace std;

//由於使用c++語言,參數使用參考，所以可以使用call by reference
void swap(int &n, int &m){
	//2數交換
	int temp;
	temp = n;
	n = m;
	m = temp;	
}

int main() {
	int a = 666, b= 888;
	cout << "交換前" << endl;
	cout << "a=" << a << ",b=" << b << endl;

	cout << "交換後" << endl;
	swap(a,b);
	cout << "a=" << a << ",b=" << b << endl;
}
