#include <iostream>
using namespace std;
//定義Square
class Square {
public:
  int width = 0;
  int area() { return width * width; }
};

//(Square s)會copy整個實體過來
//(Square &s)會copy參考過來
void changeSquare(Square &s) { 
	s.width = 20; 
}

int main() {
  Square s1; //建立實體
  s1.width = 10;
  changeSquare(s1);
  cout << "s1:" << s1.width << endl;
  cout << "s1面積:" << s1.area() << endl;
}
