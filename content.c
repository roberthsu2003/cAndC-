#include <iostream>
#include <time.h>

using namespace std;
void create_scores(int scores[],int num){
	for(int i=0; i<num; i++){
		scores[i] = rand() % (100-60+1) + 60;
		cout << scores[i] << " ";
	}
	cout << endl;
}

void sum_average(int scores[], int num){
	int sum=0;
	for(int i=0; i<num; i++){
		sum += scores[i];
	}	
	cout << "學生總分是:" << sum << endl;
	cout << "學生平均是:" << (float)sum/num << endl;
}



int main() {
	srand(time(NULL));
	int num;
	cout << "請輸入學生考試科目是數量:";
	cin >> num;
	int scores[num];
	//建立學生分數
	create_scores(scores,num);
	sum_average(scores,num);
	
}
