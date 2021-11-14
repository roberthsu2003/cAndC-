#include <iostream>
#define NUM 6

using namespace std;

int main() {
	
	int sum = 0;
	int failNum = 0;
	string subjects[] = {"國文","英文","數學","歷史","地理","理化"};
	int scores[NUM];

	for(int i=0;i < NUM;i++){
		cout << "請輸入" << subjects[i] << "分數:";
		cin >> scores[i];
		sum += scores[i];
		if(scores[i] < 60){
			failNum ++;
		}
	}
	cout << endl;

	cout << "同學的分數:" << endl;
	for(int i=0;i < NUM;i++){
		cout << subjects[i] << scores[i] << endl;
	}

	cout << "總分:" << sum << endl;
	printf("平均為:%.2f\n",float(sum)/NUM);
	cout << "不及格的有" << failNum << "科" << endl;
	
} 
