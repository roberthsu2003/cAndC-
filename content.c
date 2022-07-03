#include <iostream>

#include <iostream>
using namespace std;

int main() {
	int scores,total = 0;
	
	while(true){
		//一開始一定會執行一次
		cout << "請輸入分數:";
		cin >> scores;
		if(scores < 0){
			break;
		}
		total += scores;		
	}
	cout << "總分為" << total << endl;
}
