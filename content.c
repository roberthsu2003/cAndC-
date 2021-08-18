#include <iostream>

using namespace std;

int main() {
	//c++輸入輸出
	int englishScore = 60;
	cout << "現在的英文分數是" << englishScore << endl;
	cout << "請輸入您的英文分數:";
	cin >> englishScore;
	cout << "輸入的英文分數是:" << englishScore << endl;
	//c輸入輸出
	printf("請輸入您的英文分數:");
	scanf("%d",&englishScore);
	printf("輸入的英文分數是:%d\n",englishScore);
	return 0;
}
