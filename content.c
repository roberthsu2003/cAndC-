#include <iostream>
#include <time.h>
using namespace std;

int main() {
	srandom(time(NULL));
	int students;
	int score_num;
	cout << "請輸入學生人數:";
	cin >> students;
	cout << "每位學生的科目數:";
	cin >> score_num;
	int nums = students * score_num;
	int scores[nums];
	for(int i=0; i<nums; i++){		
		scores[i] = random() % (100-60+1) + 60;
	}
	
	

	//取出陣列內的值
	for(int i=0;i<students;i++){
		cout << "學生" << i+1 << "\t";
		int sum = 0;		
		for(int j=0; j<score_num; j++){
			int index = i*score_num + j;
			cout << scores[index] << "\t";
			sum += scores[index];
		}
		cout << sum << "\t";
		cout << endl;
	}
}
