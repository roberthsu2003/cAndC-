#include <iostream>
using namespace std;
int main() {
	int num,result;
	//printf("請輸入一個數值:");
	cout << "請輸入一個數值:";
	//scanf("%d",&num);
	cin >> num;
	result = num;
	result *= num;
	//printf("%d的平方是%d\n",num, result);
	cout << num << "的平方是" << result << endl;
	result *= num;
	//printf("%d的立方是%d\n",num, result);
	cout << num << "的立方是" << result << endl;
} 
