#include <iostream>
using namespace std;


//call by reference 
void turbo(int &);

int main() {
  int speed;
  cout << "請輸入初始速度:";
  cin >> speed;
  turbo(speed);
  cout << "加速後速度:" << speed << endl;
  return 0;
}

//call by value
void turbo(int &mySpeed){
	 mySpeed += 10;
}
