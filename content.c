#include <iostream>
using namespace std;
//定義一個point 結構
struct point {
  int x;
  int y;
};

int main() {
  struct point p1;
  p1.x = 50;
  p1.y = 100;

  struct point p2;
  p2.x = 10;
  p2.y = 20;

  struct point p3;
  p3.x = 100;
  p3.y = 200;

  cout << "(" << p1.x << "," << p1.y << ")" << endl;
  cout << "(" << p2.x << "," << p2.y << ")" << endl;
  cout << "(" << p3.x << "," << p3.y << ")" << endl;
}
