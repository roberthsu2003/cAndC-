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
void change_width(Square& s) { 
	s.width += 10; 
}

int main() {
  Square s1;
  Square s2;
  s1.width = 10;
  s2.width = 20;
  description_square(s1);
  description_square(s2);

  //寬加10
	change_width(s1);
	change_width(s2);

	description_square(s1);
  description_square(s2);
}
