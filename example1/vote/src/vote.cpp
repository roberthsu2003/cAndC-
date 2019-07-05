//============================================================================
// Name        : vote.cpp
//設計一個投票統計表，包含計算各四位歌手小個地區投票數及總得票數，最後顯示得票數和得票率(計算至小數2位)
#include <iostream>
using namespace std;

int main() {
	string names[] = {"周華見", "劉得華", "張學有", "梁朝為"};
	int namesCount = sizeof(names) / sizeof(names[0]);
	for (int i=0; i<namesCount; i++){
		cout << "names" << "[" << i << "]:" << names[i] << endl;
	}

	int votes[4][3] = {
			{713, 600, 310},
			{999, 512, 215},
			{543, 689,287},
			{1125,387, 769}
	};

	int scores[4] = {0, 0, 0, 0};
	float totalScores = 0;
	for(int i=0; i<namesCount;i++){
		for(int j=0; j<3; j++){
			scores[i] += votes[i][j];

		}

		totalScores += scores[i];
	}

	for (int i=0; i<namesCount; i++){
		cout << names[i] << "總票數為:" << scores[i] << endl;
		cout << names[i] << "得票率為" << scores[i] / totalScores * 100 << "%" << "\n\n";
	}


	return 0;
}
