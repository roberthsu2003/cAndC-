main.cpp

#include <iostream>
#include "data.h"
#include "time.h"

using namespace std;

int studentScore(int min, int max){
	return rand() % (max - min + 1) + min;
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
		students[i].chinese = studentScore(60,100);
		students[i].english = studentScore(50,100);
		students[i].math = studentScore(55,100);
	}


	//計算總分和平均
	for(int i=0;i<nums;i+=1){
		students[i].sum = students[i].chinese + students[i].english + students[i].math;
		students[i].average = students[i].sum / 3.0;
	}

	//排名次
	studentSorted(students,nums);

	//輸出
	cout << "名次\t姓名\t國文\t英文\t數學\t總分\t平均" << endl;
	for(int i=0;i<nums;i+=1){
		cout << i+1 << "\t\t";
		cout << students[i].name << "\t";
		cout << students[i].chinese << "\t\t";
		cout << students[i].english << "\t\t";
		cout << students[i].math << "\t\t";	
		cout <<  students[i].sum << "\t\t";		
		printf("%.2f\n",students[i].average);
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
