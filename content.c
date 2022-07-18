#include <iostream>
#include <time.h>

using namespace std;

int main() {
	srandom(time(NULL));
	int nums[20];
	int lucky_num;
	int match_num=0;
	for(int i=0;i<20;i++){
		nums[i] = random() % (99-1+1) + 1;
		cout << nums[i] << "\t"; 
	}
	cout << endl;

	cout << "請輸入一個幸運號碼:";
	cin >> lucky_num;
	//循序搜尋
	for(int i=0; i<20; i++){
		if(lucky_num == nums[i]){
			match_num += 1;
		}
	}

	cout << "符合號碼的有" << match_num << "個" << endl;
	
	
}
