#include <iostream>
#include <time.h>
using namespace std;

int main() {
	srandom(time(NULL));
	int nums = 250;
	int scores[nums];
	for(int i=0; i<nums; i++){		
		scores[i] = random() % (100-60+1) + 60;
	}
	
	

	//取出陣列內的值
	int sum=0;
	cout << "學生分數是:" << endl;
	for(int i=0;i<nums;i++){
		cout << scores[i] << "\t";
		sum += scores[i];
	}
	cout << endl;
	cout << "總分為:" << sum << endl;
	cout << "平均是" << (float)sum / nums << endl;
}
