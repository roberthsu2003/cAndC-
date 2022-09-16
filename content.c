#include <iostream>
using namespace std;

int main() {
	int scores;	
	cout << "請輸入學生分數:";
	cin >> scores;

	if (scores >= 60){
		cout << "及格" << endl;
	}else{
		cout << "不及格" << endl;
	}
}
