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

	for(int i=0;i<3;i+=1){
		cout << "姓名:" << students[i].name << endl;
		cout << "國文:" << students[i].chinese << endl;
		cout << "英文:" << students[i].english << endl;
		cout << "數學:" << students[i].math << endl;
		int sum = students[i].chinese + students[i].english + students[i].math;
		cout << "總分:" << sum << endl;
		printf("%.2f\n\n\n",sum/3.0);
	}
	return 0;

}
