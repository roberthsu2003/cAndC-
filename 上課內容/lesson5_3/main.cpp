#include <iostream>
using namespace std;

int main() {
	int total = 0;
	//明確知道執行的次數
	for(int i=1;i<=10;i++){
		total += i;
	}
	cout << "總合為:" << total << endl;
}
