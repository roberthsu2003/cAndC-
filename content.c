//設計一個投票統計表，包含計算各四位歌手3個地區投票數及總得票數，最後顯示得票數和得票率(計算至小數2位)

#include <iostream>
using namespace std;
//定義結構
typedef struct singer{
	string name;
	int area1;
	int area2;
	int area3;
}singer;

int main() {
	singer allSinger[4];
	
	for(int i=0; i<4; i++){
		string myName;
		cout << "請輸入姓名:";
		cin >> myName;
		cout << "請輸入第一區得票數:";
		int myArea1;
		cin >> myArea1;
		cout << "請輸入第二區得票數:";
		int myArea2;
		cin >> myArea2;
		cout << "請輸入第三區得票數:";
		int myArea3;
		cin >> myArea3;

		allSinger[i] = {myName, myArea1, myArea2, myArea3};
		cout << "===========================\n";
	}

	cout << "===========================\n\n";
	int total=0;
	for(int i=0; i<4; i++){
		singer user = allSinger[i];
		total += user.area1;
		total += user.area2;
		total += user.area3;
	}
	
	for(int i=0; i<4; i++){
		singer user = allSinger[i];
		int userScore = user.area1 + user.area2 + user.area3;
		cout << user.name << endl;
		cout << "總得票分數為:" << userScore << endl;
		cout << "總得票率為:" << (float)userScore / total * 100 << "%" << endl;
		cout << "==============\n";
	}
}
