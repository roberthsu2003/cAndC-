main.cpp

#include <iostream>
#include "data.h"
#include "time.h"

using namespace std;

int studentScore(){
	return rand() % 41 + 60;
}

int main() {
	srand(time(NULL));
	//建立學生
	int nums;
	cout << "請輸入學生人數:";
	cin >> nums;
	student students[nums];

	//給學生姓名和國文,英文,數學
	for(int i=0;i<nums;i+=1){
		students[i].name = "stu" + to_string(i+1);
		students[i].chinese = studentScore();
		students[i].english = studentScore();
		students[i].math = studentScore();
	}


	//計算總分和平均
	for(int i=0;i<nums;i+=1){
		students[i].sum = students[i].chinese + students[i].english + students[i].math;
		students[i].average = students[i].sum / 3.0;
	}
	//排名次
	studentSorted(students,nums);

	//輸出
	for(int i=0;i<nums;i+=1){
		cout << "名次:" << i+1 << endl;
		cout << "姓名:" << students[i].name << endl;
		cout << "國文:" << students[i].chinese << endl;
		cout << "英文:" << students[i].english << endl;
		cout << "數學:" << students[i].math << endl;	
		cout << "總分:" << students[i].sum << endl;		
		printf("平均:%.2f\n\n\n",students[i].average);
	}
	return 0;

}


data.h

#include <iostream>
using namespace std;

typedef struct student{
	string name;
	int chinese;
	int english;
	int math;
	int sum;
	float average;
}student;

void studentSorted(student s[],int nums){
	//泡沫排序法
	for(int i=0; i < nums-1; i++){
		for(int j=i+1; j < nums; j++){
			if(s[i].sum < s[j].sum){
				student temp = s[i];
				s[i] = s[j];
				s[j] = temp;
			}
		}
	}
}
