#include <iostream>
using namespace std;

int main() {
  int deposit = 0;
  int num = 0;
  int inputNum;
  while(deposit < 30000){
	  num++;
	  cout << "請輸入第" << num << "個月份的存款:";
	  cin >> inputNum;
	  deposit += inputNum;
  }

  cout << "恭喜!您已經存夠了,存了" << num << "個月的總存款為:" << deposit << "元。";
}
