#include <iostream>
#include <time.h>
using namespace std;

void addData(int s[][5],int nums){
	for(int i=0; i<nums; i++){
		for(int j=0; j<5; j++){
			s[i][j] = rand() % (100-50+1) + 50;
		}
	}
}

void displayScores(int s[][5], int nums){
	cout << "國文\t英文\t數學\t歷史\t地理" << endl;
	for(int i=0; i<nums; i+=1){
		for(int j=0; j<5; j+=1){
			cout << s[i][j] << "\t\t";
		}
		cout << endl;
	}
}



int main() {
	srand(time(NULL));
	int nums;
	cout << "請輸入學生的數量:";
	cin >> nums;
	int students[nums][5];
	addData(students, nums);
	displayScores(students, nums);
	
}
	
