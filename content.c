#include <iostream>
using namespace std;
int main() {
	int scores[] = {72, 85, 92, 57, 42, 92, 76, 85, 54};
	cout << "陣列所有的記憶體:" << sizeof(scores) << endl;
	cout << "陣列內1個元素的大小:" << sizeof(scores[0]) << endl;
	//動態查詢陣列內元素的數量
	int count = sizeof(scores) / sizeof(scores[0]);
	cout << "陣列元素的數量為:" << count << endl;

	//讓每分數加10分,超出100分,就只給100
	cout << "加完10分後的分數是:" << endl;
	for(int i=0; i<count;i++){
		int newScore = scores[i]+10;
		if(newScore > 100){
			scores[i] = 100;
		}else{
			scores[i] = newScore;
		}
		cout << scores[i] << " ";
	}
	cout << endl;
}
