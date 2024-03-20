#include <iostream>
using namespace std;

typedef struct point {
  double x;
  double y;
} Point;

typedef struct size {
  double width;
  double height;
} Size;

typedef struct rect {
  Point p;
  Size s;
} Rect;

int main() {
  Rect rectangle;
  rectangle.p = {4.5, 5.6};
  rectangle.s = {34.5, 92.1};

  cout << "座標x:" << rectangle.p.x << endl;
  cout << "座標y:" << rectangle.p.y << endl;
  cout << "width:" << rectangle.s.width << endl;
  cout << "height:" << rectangle.s.height << endl;
}
