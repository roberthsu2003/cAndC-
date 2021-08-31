#include <iostream>
using namespace std;

void addData(int s[][5],int nums){
	for(int i=0; i<nums; i++){
		for(int j=0; j<5; j++){
			s[i][j] = 50;
		}
	}
}

int main() {
	int nums;
	cout << "請輸入學生的數量:";
	cin >> nums;
	int students[nums][5];
	addData(students, nums);
	for(int i=0; i<nums; i++){
		for(int j=0; j<5; j++){
			cout<< students[i][j] << " ";
		}
		cout << endl;
	}
}
	
