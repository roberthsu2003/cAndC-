#include <iostream>
//將實體傳送給function使用
using namespace std;

class Square {
public:
  int width; // field,欄位
	Square(int w){ // 自訂建構式
		width = w;
	}
  double area() { return width * width; } //method,方法

  int perimeter() { return 4 * width; }//method,方法
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
  Square s1(10);
	Square s2(20);
 
  description_square(s1);
  description_square(s2);

  //寬加10
	change_width(s1);
	change_width(s2);

	description_square(s1);
  description_square(s2);
}
