#include <iostream>
#define SUBNUM 6
using namespace std;
int main() {	
	int stuNum;
	
	cout << "請輸入學生數:";
	cin >> stuNum;
	

	srand(time(NULL));
	int students[stuNum][SUBNUM];
	cout << "國文\t英文\t數學\t歷史\t地理\t理化\t總分\t平均" << endl;	
	for(int i=0; i<stuNum; i++){
		int sum=0;
		for(int j=0;j<SUBNUM;j++){
			students[i][j] = random() % (100-50+1) + 50;
			cout << students[i][j] << "\t\t";
			sum += students[i][j];
		}
		cout << sum << "\t\t";
		printf("%.2f",float(sum)/SUBNUM);
		cout << endl;
	}
	
} 
