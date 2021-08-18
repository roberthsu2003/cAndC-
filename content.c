#include <iostream>

using namespace std;

int main() {
	short s1;
	int i1;
	long long int lli;
	int score[] = {78, 65, 92, 76, 99};
	//string c++ 才有的型別
	string name = "robert hsu";
	cout << "short=" << sizeof(s1) << endl;
	cout << "int=" << sizeof(i1) << endl;
	cout << "long long int=" << sizeof(lli) << endl;
	cout << "string=" << sizeof(name) << endl;
	cout << "score陣列變數,佔的記憶體大小是" << sizeof(score)  << endl;
	cout << "score陣列變數內,一個元素的大小是" << sizeof(score[0]) << endl;
	cout << "score陣列變數的元素數量:" << sizeof(score) / sizeof(score[0]) << endl;
	return 0;
}
