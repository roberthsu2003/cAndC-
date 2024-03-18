#include <iostream>
using namespace std;

int main() {
	//配置記憶體給陣列變數n
	int n[] = {10, 20, 30};	

	for(int i=0; i<3; i++){
		cout << "第" << i+1 << "個元素:";
		cout << n[i] << endl;
	}
}
