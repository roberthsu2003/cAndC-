#include <iostream>
using namespace std;

int main() {
	srandom(time(NULL));
	int num;
	cout << "請輸元素的數量:";
	cin >> num;
	int scores[num];
	cout << num << "個元素陣列scores已經建立" << endl;
	//給scores的元素值
	for(int i=0; i < num; i++){
		scores[i] = random() % 200;
	}
	
	//輸出陣列元素的值
	for(int i=0; i < num; i++){
		cout << scores[i] << endl;
	}
	
}
