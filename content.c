#include <iostream>
using namespace std;

void sayHello(){
	cout << "歡迎光臨!" << endl;
}

float temperature(int value){
	return 1.8 * value + 32;
}

int main() {
  sayHello();
  int inputT;
  int result;
  cout << "請輸入攝氏溫度:";
  cin >> inputT;
  result = temperature(inputT);
  cout << "華氏溫度=" << result << endl;
  return 0;
}
