#include <iostream>
using namespace std;

int main() {
	//手動給分數
	int nums = 5;
	int scores[nums];
	for(int i=0; i<nums; i++){
		cout << "請輸入第" << i+1 << "個分數:";
		cin >> scores[i];
	}
	
	

	//取出陣列內的值
	int sum=0;
	cout << "學生分數是:" << endl;
	for(int i=0;i<nums;i++){
		cout << scores[i] << "\t";
		sum += scores[i];
	}
	cout << endl;
	cout << "總分為:" << sum << endl;
	cout << "平均是" << (float)sum / nums << endl;
}
