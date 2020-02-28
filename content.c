#include <iostream>
using namespace std;
//call by value
//宣告原型
int turbo(int);
int main() {
  int speed;
  cout << "請輸入初始速度:";
  cin >> speed;
  speed = turbo(speed);
  cout << "加速後速度:" << speed << endl;
  return 0;
}

//call by value
int turbo(int mySpeed){
	return mySpeed + 10;
}
