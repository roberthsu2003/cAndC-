#include <iostream>
using namespace std;
int main() {
	string subjects[] = {"國文","英文","數學","歷史","地理","理化"};
	int scores[6];
	scores[0] = 96;
	scores[1] = 50;
	scores[2] = 76;
	scores[3] = 81;
	scores[4] = 57;
	scores[5] = 80;
	cout << "同學的分數:" << endl;
	for(int i=0;i<=5;i++){
		cout << subjects[i] << scores[i] << endl;
	}
	
} 
