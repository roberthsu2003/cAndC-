#include <iostream>
//將實體傳送給function使用
using namespace std;

class Square {
public:
  int width; // field,欄位
  double area() { return width * width; }

  int perimeter() { return 4 * width; }
};

void description_square(Square s) {
  cout << "width:" << s.width << endl;
  cout << "perimeter:" << s.perimeter() << endl;
  cout << "area:" << s.area() << endl;
  cout << "==================" << endl;
}

int main() {
  Square s1;
  Square s2;
  s1.width = 10;
  s2.width = 20;
  description_square(s1);
  description_square(s2);
}
