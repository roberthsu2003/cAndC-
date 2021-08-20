main.cpp

#include <iostream>
#include "data.h"

using namespace std;

int main() {
	//建立3個學生
	student students[3];
	students[0].name = "David";
	students[0].chinese = 87;
	students[0].english = 97;
	students[0].math = 78;

	students[1].name = "Alice";
	students[1].chinese = 76;
	students[1].english = 97;
	students[1].math = 73;

	students[2].name = "Jenny";
	students[2].chinese = 91;
	students[2].english = 92;
	students[2].math = 65;

	//計算總分和平均
	for(int i=0;i<3;i+=1){
		students[i].sum = students[i].chinese + students[i].english + students[i].math;
		students[i].average = students[i].sum / 3.0;
	}
	//排名次
	
	//輸出
	for(int i=0;i<3;i+=1){
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
			
		}
	}
}
