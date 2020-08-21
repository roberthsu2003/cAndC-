#include <iostream>
#include <stdio.h>

using namespace std;

int main() {
	//使用c的輸出
	int englishScore;
	int chinese = 75;
	int math = 85;
	printf("請輸入您的英文分數:");
	cin >> englishScore;
	printf("Hello ! 您的英文分數是: %d,國文分數是:%d,數學分數是:%d\n", englishScore,chinese,math);
}
