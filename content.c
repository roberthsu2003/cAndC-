#include <iostream>
#include "tools.h"
#include <time.h>

using namespace std;

int main() {
	int nums;
	int max=600;
	int min=450;
	srand(time(NULL));	
	cout << "請輸入班級學生數:";
	cin >> nums;
	int scores[nums];
	for(int i=0; i<nums; i+=1){		
		scores[i] = rand() % (max - min + 1) + min;
	}
	for(int i=0; i<nums;i+=1){
		cout << scores[i] << " ";
	}
	cout << endl;
	return 0;
}
