#include <iostream>
using namespace std;

int main() {
  int num;
	cout << "請輸入學生數:";
	cin >> num;	
	
  int numbers[num];
  for (int i = 0; i < num; i++) {
    cout << "請輸入第" << i + 1 << "學生的分數:";
    cin >> numbers[i];
  }

  for (int i = 0; i < num; i++) {
    cout << numbers[i] << " ";
  }
  cout << endl;
}
