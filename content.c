#include <iostream>
#include <time.h>
using namespace std;

int main() {
	//建立一個學生的分數
	//宣告的同時給值
	//由亂數建立分數
	srandom(time(NULL));
	int num;
	int subjectNum;
	int studentNum;
	cout << "請輸入學生人數:";
	cin >> studentNum;	
	cout << "請輸入學生的科目數量";
	cin >> subjectNum;

	num = studentNum * subjectNum;
	
	int scores[num];
		
	
	for(int i=0; i<num;i++){		
		scores[i] = random() % (100-50+1) + 50; //50~100的亂數 	
	}	

	for(int i=0; i<studentNum; i++){
		cout << "學生" << i+1 << "分數:" << endl;
		int sum = 0;
		for(int j=0;j<subjectNum;j++){
			int scores_index = i * subjectNum + j;
			cout << scores[scores_index] << "\t";
			sum += scores[scores_index];
		}
		cout << sum << "\t";
		cout << (float)sum / subjectNum << endl;
	}
	
}
