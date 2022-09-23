//搜尋
#include <iostream>
#include <time.h>
using namespace std;

int main() {
	srandom(time(NULL));	
	int nums[250];
	int keyin;
	int count = 0;
	
	for(int i=0; i<250; i++){
		nums[i] = random() % (50 - 1 + 1) + 1;
	}
	cout << "請輸入搜尋的數字(1~50):";
	cin >> keyin;
	for(int i=0; i<250; i++){
		if(keyin == nums[i]){
			count += 1;
		}
	}

	cout << keyin << "出現的次數是" << count << "次\n";
}
