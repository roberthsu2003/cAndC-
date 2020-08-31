//建立一個2*3的二維陣列並初始化，用來儲存2個學生各三科成績，再以2層巢狀迴圈將所有成績顯示出來。

#include <iostream>
using namespace std;
int main() {
	int scores[2][3] = {{85, 82, 90}, {76, 95, 89}};
	for(int i=0; i<2; i+=1){
		for(int j=0; j<3; j++){
			cout << "第" << i+1 << "位學生第" << j+1 << "科成績:" << scores[i][j] << endl;
		}
		cout << "==================================\n";
	}
}
