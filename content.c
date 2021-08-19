#include <iostream>
#include "tools.h"
#include <time.h>

using namespace std;

int studentScore(){
	//450~600
	return rand() % (600 - 450 + 1) + 450;
}

int main() {
	srand(time(NULL));
	int nums;
	cout << "請輸入班級學生的人數:";
	cin >> nums;
	int students[nums];
	for(int i=0; i<nums; i++){
		students[i] = studentScore();
	}

	sorted(students, nums, true);
	displayArray(students, nums);

	return 0;



}
