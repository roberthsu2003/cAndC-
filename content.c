#include <iostream>
using namespace std;
int main() {
	string subjects[] = {"國文","英文","數學","歷史","地理","理化"};
	int scores[6];

	for(int i=0;i<=5;i++){
		cout << "請輸入" << subjects[i] << "分數:";
		cin >> scores[i];
	}
	
	cout << "同學的分數:" << endl;
	for(int i=0;i<=5;i++){
		cout << subjects[i] << scores[i] << endl;
	}
	
} 
