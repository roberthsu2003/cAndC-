#include <iostream>
using namespace std;
int main() {
	short s = 10000;
	int i = 8976;
	long long int lli = 8765430;
	int n[] = {1, 3, 5, 7, 9};
	int total = sizeof(n);
	int oneSize = sizeof(n[0]);

	cout << "short的大小" << sizeof(s) << endl;
	cout << "int的大小" << sizeof(i) << endl;
	cout << "long long int" << sizeof(lli) << endl;
	cout << "n陣列所佔用的bytes數" << total << endl;
	cout << "n[0]元素所佔用bytes數" << oneSize << endl;
	cout << "n陣列的元素數量是" << total/oneSize << endl;
	return 0;
}
