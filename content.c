
//請使用者輸入一個任意數，程式會顯示此數的平方值及立方值
#include <iostream>
using namespace std;

int main() {
	float num,result=0.0;
	printf("請輸入任意數:");
	cin >> num;
	result = num;
	result *= num;
	printf("此數的平方是%.2f\n",result);
	result *= num;
	printf("此數的立方是%.0f\n",result);
}
