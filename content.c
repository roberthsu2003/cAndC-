#include <iostream>
using namespace std;

int main() {
	int in1,in2,in3;
	int max=0;

	cout << "請輸入第一個數:";
	cin >> in1;

	cout << "請輸入第二個數:";
	cin >> in2;

	max = in1 > in2 ? in1 : in2 ;

	cout << "請輸入第三個數:";
	cin >> in3;

	max = in3 > max ? in3 : max;

	cout << "輸入三個數中，最大的數為:" << max << endl;
	return 0;
}
