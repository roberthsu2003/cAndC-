#include <iostream>
#include <time.h>
using namespace std;

int main() {
	srandom(time(NULL));
	int min = 100, max = 500;
	int nums;
	cout << "請輸入元素數量:";
	cin >> nums;
	int array[nums];
	//輸入
	for (int i = 0; i < nums; i++) {
		array[i] = random() % (max - min + 1) + min;
	}
	
	cout << "排序前" << endl;
	for(int i=0; i<nums; i++){
		cout << array[i] << " ";
	}
	cout << endl;

	//泡沫排序
	for(int i=0; i < nums-1; i++){
		for(int j=i+1; j<nums; j++){
			if (array[i] > array[j]){
				//由小到大,對調
				int temp = array[i];
				array[i] = array[j];
				array[j] = temp;
			}
		}
	}

	cout << "排序後" << endl;
	for(int i=0; i<nums; i++){
		cout << array[i] << " ";
	}
	cout << endl;
}
