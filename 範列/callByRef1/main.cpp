#include <iostream>
using namespace std;

int turbo(int);

int main() {
  int speed;
  cout << "請輸入初始速度:";
  cin >> speed;

  speed = turbo(speed); 
  cout << "加速後速度:" << speed << endl;
  return 0;
}

int turbo(int mySpeed){
    cout << "加速前速度是:" << mySpeed << endl;
    mySpeed += 10;
    return mySpeed;
}
