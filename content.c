#include <iostream>
using namespace std;

int main() {
	int score;
	cout << "請輸入學生分數:";
	cin >> score;
	
	if(score >= 90){
		cout << "優等" << endl;
	}else if(score >= 80){
		cout << "甲等" << endl;
	}else if(score >= 70){
		cout << "乙等" << endl;		
	}else if(score >= 60){
		cout << "丙等" << endl;
	}else{
		cout << "丁等" << endl;
	}
	
	return 0;
}
