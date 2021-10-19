//多載overloading
//建立Add()函式多載，分別處理數值和字串相加。
#include <iostream>
using namespace std;

int add(int a, int b){
	return a + b;
}

string add(string a,string b){
	return a + b;
}

int main() {
	cout << "add(2,3)=" << add(2,3) << endl;
	cout << "====================" << endl;
	cout << "add(\"Nice\", \"Play\") = " << add("Nice","Play") << endl;
	return 0;
}
