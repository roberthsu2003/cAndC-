#include <iostream>
using namespace std;
int main() {
	int nums = 4;
	int array[nums];
	
	for(int i=0; i<nums; i++){
		cout << "請輸入第" << i+1 << "個數值:";
		cin >> array[i];
	}

	//排序後的順序
	cout << "排序前:" << endl;
	for(int i=0; i<nums; i++){
		cout << array[i] << "\t";
	}
	cout << endl;

	//開始排序(泡沫排序法)
	for(int i=0; i<nums-1; i++){
		for(int j=i+1; j<nums; j++){
			int head = array[i];
			int end = array[j];
			if(head > end){
				int temp = head;
				array[i] = end;
				array[j] = temp;
			}
		}
		
	}

	//排序後的順序
	cout << "排序後:" << endl;
	for(int i=0; i<nums; i++){
		cout << array[i] << "\t";
	}
	cout << endl;
}
