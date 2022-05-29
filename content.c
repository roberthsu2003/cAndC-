#include <iostream>
using namespace std;

void add10(int array[],int count){	
	//讓每分數加10分,超出100分,就只給100
	cout << "加完10分後的分數是:" << endl;
	for(int i=0; i<count;i++){
		int newScore = array[i]+10;
		if(newScore > 100){
			array[i] = 100;
		}else{
			array[i] = newScore;
		}
		cout << array[i] << " ";
	}
}

int main() {
	int scores[] = {72, 85, 92, 57, 42, 92,};
	cout << "陣列所有的記憶體:" << sizeof(scores) << endl;
	cout << "陣列內1個元素的大小:" << sizeof(scores[0]) << endl;
	//動態查詢陣列內元素的數量
	int count = sizeof(scores) / sizeof(scores[0]);
	cout << "陣列元素的數量為:" << count << endl;
	//讓每分數加10分,超出100分,就只給100
	add10(scores,count);
	
	cout << endl;
}
