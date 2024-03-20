#include <iostream>
#include <time.h>
using namespace std;

int main() {
		srandom(time(NULL));
		int min = 100, max = 500;
		int nums;
		cout << "請輸入元素數量:";
		cin >> nums;
		int n[nums];
		//輸入
		for (int i = 0; i < nums; i++) {
			n[i] = random() % (max - min + 1) + min;
		}
		//輸出
		int total = 0;
		int max_value = n[0];
		int min_value = n[0];
		for (int i = 0; i < nums; i++) {
			cout << "第" << i + 1 << "個元素:";
			cout << n[i] << endl;
			total += n[i];
			if (n[i] > max_value) {
				max_value = n[i];
			}
			if (n[i] < min_value) {
				min_value = n[i];
			}
		}
		cout << "元素值總合為:" << total << endl;
		cout << "最大值為:" << max_value << endl;
		cout << "最小值為:" << min_value << endl;
}
