//請以(複合指定運算子)設計程式,讓用者輸入三個任意數，程式會顯示3數相加的總和(float)
#include <iostream>
using namespace std;

int main() {
	float num,result=0.0;
	cout << "請輸入第一個數:";
	cin >> num;
	result += num;

	cout << "請輸入第二個數:";
	cin >> num;
	result += num;

	cout << "請輸入第三個數:";
	cin >> num;
	result += num;
	
	printf("三個數的總和為:%.2f\n", result);

}
