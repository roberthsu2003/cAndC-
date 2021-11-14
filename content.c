#include <iostream>
#define SUBNUM 6
using namespace std;
int main() {	
	int stuNum;
	
	cout << "請輸入學生數:";
	cin >> stuNum;
	

	srand(time(NULL));
	int students[stuNum][SUBNUM];
	cout << "國文\t英文\t數學\t歷史\t地理\t理化" << endl;	
	for(int i=0; i<stuNum; i++){
		for(int j=0;j<SUBNUM;j++){
			students[i][j] = random() % (100-50+1) + 50;
			cout << students[i][j] << "\t\t";
		}
		cout << endl;
	}
	
} 
