//巢狀結構
#include <iostream>
using namespace std;

typedef struct point {
  float x;
  float y;
} Point;

typedef struct size {
  float width;
  float height;
} Size;

typedef struct rect {
  Point p;
  Size s;
} Rect;

using namespace std;

int main() {
  Rect r1;
  r1.p = {20.5, 10.5};
  r1.s = {10.0, 20.1};
  cout << "r1的x座標:" << r1.p.x << endl;
  cout << "r1的y座標:" << r1.p.y << endl;
  cout << "r1的寬:" << r1.s.width << endl;
  cout << "r1的高:" << r1.s.height << endl;
}
