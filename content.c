#include <iostream>
using namespace std;

int main() {
	int length = 5;
	int scores[length];

	for(int i=0; i<length; i++){
		cout << "請輸入分數:";
		cin >> scores[i];
	}

	for(int i=0; i<length; i++){
		cout << scores[i] << " ";
	}

	cout << endl;
	return 0;
}
