#include <iostream>
using namespace std;

int main() {
	int count = 0;
	for(int i=0;i < 10; i++){
		cout << "i=" << i << endl;
		count += 1;
	}
	cout << "總共執行:" << count << endl;
	
}
