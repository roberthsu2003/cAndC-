#include <iostream>
using namespace std;

//overloading 多載
//相同的function名稱
//不同的參數數量和參數型別

int add(int a, int b){
	return a + b;
}

string add(string a, string b){
	return a + b;
}

int main() {
	cout << "add(2,3)=" << add(2, 3) << endl;
	cout << "add(\"nice\",\"Play\")=" << add("nice","play") << endl;
}
