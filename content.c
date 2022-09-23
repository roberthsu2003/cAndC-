#include <iostream>
using namespace std;

int main() {
  int numbers[5];
	for(int i=0;i<5;i++){
		cout << "請輸入第" << i+1 << "學生的分數:";
		cin >> numbers[i];		
	}

  for(int i=0; i<5; i++){
		cout << numbers[i] << " ";
	}
	cout << endl;
}
