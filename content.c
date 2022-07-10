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
	int sum = 0;	
	
	for(int i=0; i<num;i++){		
		scores[i] = random() % (100-50+1) + 50; //50~100的亂數 	
	}	

	for(int i=0; i<num; i++){
		cout << scores[i] << "\t";
		sum += scores[i];
	}
	cout << endl;

	cout << "所有學生總分是:" << sum << endl;
	cout << "所有學生平均分數是" << (float)sum / num << endl;
	
}
