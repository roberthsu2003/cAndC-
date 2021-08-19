#include <iostream>
#include "tools.h"
#include <time.h>

using namespace std;

int studentScore(int min, int max){
	return rand() % (max - min + 1) + min;
}

int main() {
	srand(time(NULL));
	int nums;
	cout << "請輸入班級學生的人數:";
	cin >> nums;
	int students[nums];
	for(int i=0; i<nums; i++){
		students[i] = studentScore(200, 600);
	}

	sorted(students, nums, true);
	displayArray(students, nums);

	return 0;



}
