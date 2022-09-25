#include <iostream>
using namespace std;
void change(int n[]){
	cout << "n的記憶體位址:" << n << endl;
	for(int i=0; i<5; i++){
		n[i] *= 10;
	}
}

int main() {
  //陣列變數
  int nums[] = {10, 20, 30, 40, 50};
  cout <<"nums的記憶體位址" <<nums << endl; // 陣列變數儲存的是記憶體位置
	change(nums);

	for(int i=0; i<5; i++){
		cout << nums[i] << endl;
	}
}
