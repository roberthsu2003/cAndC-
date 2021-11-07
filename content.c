#include <iostream>
using namespace std;

int main() {
	int in1,in2,in3;
	int max;
	cout << "請輸入第1個數字:";
	cin >> in1;

	cout << "請輸入第2個數字:";
	cin >> in2;
	max = in1 > in2 ?  in1 : in2 ;

	cout << "請輸入第3個數字:";
	cin >> in3;

	max = max > in3 ? max : in3;

	cout << "最大數是:" << max << endl;
}  
