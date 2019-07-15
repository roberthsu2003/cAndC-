//============================================================================
// Name        : array4.cpp
// 傳遞陣列元素，使用call By Value和call By Reference


#include <iostream>
using namespace std;
void sub1(int, int &);
int main() {
	int ary[] = {1, 2, 3};
	cout << "ary陣列元素 ary[0]傳值,ary[1]傳搖控器後" << endl;
	sub1(ary[0], ary[1]);
	for(int i=0; i < 3; i++){
		cout << ary[i] << " ";
	}
	cout << endl;
	return 0;
}

void sub1(int a, int &b){
	a = 5;
	b = 5;
}
