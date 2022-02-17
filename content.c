#include <iostream>
using namespace std;

int main() {
	//如果是c++,操控unsigned char,不要使用cin,cout
	unsigned char score;
	cout << "請輸入分數:";
	scanf("%hhu", &score);
	printf("%hhu\n", score);
}
