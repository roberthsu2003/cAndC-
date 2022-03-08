#include <iostream>
using namespace std;

void sort(int *array,int nums){
	int temp;
	for(int i=0; i < nums-1; i++){
		for(int j=i+1; j < nums; j++){
			if (array[i] < array[j]){
				temp = array[i];
				array[i] = array[j];
				array[j] = temp;
			}
		}
	}
}

int main() {	
	cout << "請輸入要排序的數值個數:";
	int n[3] = {20, 10, 50};
	sort(n,3);
	for(int i=0; i<3; i++){
		cout << n[i] << "  ";
	}
	cout << endl;
	
	
}
