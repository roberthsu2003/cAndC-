#include <iostream>
using namespace std;

int main() {
	int nums = 4;
	int array[nums];
	array[0] = 20;
	array[1] = 30;
	array[2] = 17;
	array[3] = 25;
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
