#include <iostream>
using namespace std;
int main() {	
	int stuNum;
	int subjectNum;
	cout << "請輸入學生數:";
	cin >> stuNum;
	cout << "請輸入科目數:";
	cin >> subjectNum;

	srand(time(NULL));
	int students[stuNum][subjectNum];	
	for(int i=0; i<stuNum; i++){
		for(int j=0;j<subjectNum;j++){
			students[i][j] = random() % (100-50+1) + 50;
			cout << students[i][j] << " ";
		}
		cout << endl;
	}
	
} 
