#include <iostream>
using namespace std;
int main() {
	int nums;
	cout << "請輸入要排序的數值個數:";
	cin >> nums;
	int values[nums];

	for(int i=0; i<nums; i++){
		cout << "請輸入第" << i+1 << "個數值:";
		cin >> values[i];
	}

	cout << "排序前:\n";
	for(int i=0; i<nums; i++){
		cout << values[i] << " ";
	}
	cout << endl;


	for(int i=0; i < nums-1; i++){
		for(int j=i+1; j < nums; j++){
			//cout << "前面的值是:" << values[i] << ",後面的數值是:" << values[j] << endl;

			if(values[i] > values[j]){
				int temp = values[i];
				values[i] = values[j];
				values[j] = temp;
			}
		}
	}

	cout << "排序後:\n";
	for(int i=0; i<nums; i++){
		cout << values[i] << " ";
	}
	cout << endl;
}
