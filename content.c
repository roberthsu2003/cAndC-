#include <iostream>
#include <time.h>
using namespace std;
int main() {
	srandom(time(NULL));
	int nums;
	int temp;
	cout << "請輸入要排序的數值個數:";
	cin >> nums;
	int array[nums];

	cout << "排序前:\n";
	for(int i=0; i<nums; i++){
		array[i] = random() % (99-1+1) + 1;
		cout << array[i] << " ";
	}
	cout << endl;

	//陣列排序
	for(int i=0; i<nums-1; i++){
		for(int j=i+1;j<nums;j++){
			if(array[i] > array[j]){
				temp = array[i];
				array[i] = array[j];
				array[j] = temp;
			}
		}
		
	}

	cout << "排序後:\n";
	for(int i=0; i<nums; i++){		
		cout << array[i] << " ";
	}
	cout << endl;
	
}
