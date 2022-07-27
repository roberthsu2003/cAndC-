#include <iostream>
using namespace std;
//定義Square
class Square {
public:
  int width = 0;
};

int main() {
	Square s1; //建立實體
	s1.width = 10;
	cout << "s1:" << s1.width << endl;
	
	Square s2; //建立實體
	s2.width = 20;
	cout << "s2:" << s2.width << endl;
	
	Square s3; //建立實體
	s3.width = 30;
	cout << "s3:" << s3.width << endl;
	
	Square s4; //建立實體
	s4.width = 40;
	cout << "s4:" << s4.width << endl;
}
