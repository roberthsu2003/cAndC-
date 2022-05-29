#include <iostream>
using namespace std;


//array是陣列變數call by Reference
int add(int array[]){
	int total;
	total = array[0] + array[1];
	return total;
}

int main() {
	int total;
	int scores[2];
	cout << "請輸入國文成績:";
	cin >> scores[0];
	cout << "請輸入英文成績:";
	cin >> scores[1];		
	total = add(scores);
	cout << "總分是:" << total << endl;
}
