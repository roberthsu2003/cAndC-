#include <iostream>
using namespace std;
int add(int a, int b){
	int total;
	total = a + b;
	return total;
}

int main() {
	int total,chinese,english;
	cout << "請輸入國文成績:";
	cin >> chinese;
	cout << "請輸入英文成績:";
	cin >> english;		
	total = add(chinese, english);
	cout << "總分是:" << total << endl;
}
