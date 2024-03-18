#include <iostream>
using namespace std;

int main() {  
    //配置記憶體給陣列變數n
		int nums;
		cout << "請輸入元素數量:";
		cin >> nums;

    int n[nums];
    //輸入
    for (int i = 0; i < nums; i++) {
      cout << "請輸入第" << i + 1 << "個元素值:";
      cin >> n[i];
    }

    //輸出
		int total = 0;
    for (int i = 0; i < nums; i++) {
      cout << "第" << i + 1 << "個元素:";
      cout << n[i] << endl;
			total += n[i];
    }

		cout << "元素值總合為:" << total << endl;
}
