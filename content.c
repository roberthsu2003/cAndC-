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
	sorted(scores,nums);
	cout << "名次\t分數\n";
	for(int i=0; i<nums;i+=1){
		cout << i+1 << "\t\t" << scores[i] << endl;
	}
	cout << endl;
	return 0;
}
