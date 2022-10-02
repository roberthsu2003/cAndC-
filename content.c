#include <iostream>
using namespace std;

typedef struct Point {
  float x;
  float y;
} Point;

int main() {
  //一次要給結構值
  Point p1 = {3.5, 2.0};
  cout << "p1的x是:" << p1.x << endl;
  cout << "p1的y是:" << p1.y << endl;

	Point p2 = {3.8, 4.5};
  cout << "p2的x是:" << p2.x << endl;
  cout << "p2的y是:" << p2.y << endl;
}
