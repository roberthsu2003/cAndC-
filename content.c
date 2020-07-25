/*
	typedef
	幫現在的資料類型建立小名
*/
#include <iostream>

typedef int INTERGER;
typedef int* POINTER;

using namespace std;
int main() {
INTERGER x = 100, y = 200;
POINTER ptr = &x;
cout << x << "+" << y << "=" << x+y <<endl;
cout << "*ptr=" << *ptr << endl;
}
