main.cpp

#include <iostream>
#include "mysort.h"

using namespace std;
int main() {
	int nums[] = {5, 7, 9, 24, 93}; //建立陣列
	//由小到大
	sortedArrayAscending(5, nums); //排序陣列
	for(int i=0; i<5; i++){ //輸出陣列
		cout << nums[i] << " ";
	}
	cout << endl;

	//由大到小
	sortedArrayDescending(5, nums); //排序陣列
	for(int i=0; i<5; i++){ //輸出陣列
		cout << nums[i] << " ";
	}
	cout << endl;
} 


mysort.h

/*-------------------------------
sortedArrayAscending(int num, int *scores)
這是由小到大排序，num是陣列元素的數量，scores是陣列
*/
void sortedArrayAscending(int, int*);

/*-------------------------------
void sortedArrayDescending(int num, int *scores)
這是由大到小排序，num是陣列元素的數量，scores是陣列
*/
void sortedArrayDescending(int , int*);


mysort.cpp

#include "mysort.h"

void sortedArrayAscending(int num, int *scores){
	for(int i=0;i<num-1;i++){		
		for(int j=i+1;j<num;j++){			
			//由小到大排序
			if(scores[i] > scores[j]){
				//2數對調
				int temp = scores[i];
				scores[i] = scores[j];
				scores[j] = temp;
			}

		}		
	}
}

void sortedArrayDescending(int num, int *scores){
	for(int i=0;i<num-1;i++){		
		for(int j=i+1;j<num;j++){			
			//由小到大排序
			if(scores[i] < scores[j]){
				//2數對調
				int temp = scores[i];
				scores[i] = scores[j];
				scores[j] = temp;
			}

		}		
	}
}
