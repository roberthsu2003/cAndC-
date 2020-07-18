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
	singer allSinger[] = {{"周華見",713,600,310},{"劉得華",999, 512,215},{"張學有",543, 689, 287},{"梁朝為",1125, 387, 769}};

	for(int i=0; i<4; i++){
		cout << allSinger[i].name << endl;
	}
}
