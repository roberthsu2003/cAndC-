#include <iostream>
using namespace std;

int main() {
	int nums;
	cout << "請輸入要排序的數值個數:";
	cin >> nums;
	int n[nums];

	for(int i=0;i<nums;i++){
		cout << "請輸入第" << i+1 << "個值:";
		cin >> n[i];		
	}

	for(int i=0; i<nums; i++){
		cout << "排序前的順序" << n[i] << " ";
	}
	cout << endl;


}
