#include <iostream>
using namespace std;

void turbo(int *);

int main() {
  int speed;
  cout << "請輸入初始速度:";
  cin >> speed;

  turbo(&speed); 
  cout << "加速後速度:" << speed << endl;
  return 0;
}

void turbo(int *mySpeed){
    cout << "加速前速度是:" << *mySpeed << endl;
    *mySpeed += 10;
   
}
