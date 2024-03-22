#include <iostream>
#include <time.h>
using namespace std;
typedef struct student{
	string name;
	int chinese;
	int english;
	int math;
}Student;


int main() {
	srandom(time(NULL));
	int min = 50;
	int max = 100;
	int nums = 50;
	Student student[nums];

	
	for(int i=0; i<nums; i++){
		student[i].name = "stu" + to_string(i+1);
		student[i].chinese = random() % (max-min+1)+min;
		student[i].english = random() % (max-min+1)+min;
		student[i].math = random() % (max-min+1)+min;	
	}
	// 使用泡沫排序法依據總分由高而低排序
	for(int i=0; i<nums-1; i++){
		for(int j=i+1; j<nums; j++){
			int font_total = student[i].chinese + student[i].english + student[i].math;
			int back_total = student[j].chinese + student[j].english + student[j].math;
			if(font_total < back_total){
				Student temp = student[i];
				student[i] = student[j];
				student[j] = temp;
			}
		}
	}
	for(int i=0; i<nums; i++){
		cout << "name:" << student[i].name << endl;
		cout << "總分:" << student[i].math + student[i].chinese + student[i].english 
 << endl;
		cout << "排名:" << i+1 << endl;
		cout << "=========" << endl;
	}
}
