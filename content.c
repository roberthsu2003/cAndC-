#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

int main() {
	srandom(time(NULL));
	int num;
	cout << "請輸元素的數量:";
	cin >> num;
	int scores[num];
	cout << num << "個元素陣列scores已經建立" << endl;
	//給scores的元素值
	for(int i=0; i < num; i++){
		scores[i] = random() % 200;
	}
	
	//輸出陣列元素的值
	for(int i=0; i < num; i++){
		cout << scores[i] << "\t";
	}
	cout << endl;

	int max = scores[0];
	int min = scores[0];

	for(int i=1; i < num; i++){
		if (max < scores[i]){
			max = scores[i];
		}

		if (min > scores[i]){
			min = scores[i];
		}
	}

	cout << "最大的元素值是:" << max << endl;
	cout << "最小的元素值是:" << min << endl;
	
}
