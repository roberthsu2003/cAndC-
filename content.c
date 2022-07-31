#include <iostream>
using namespace std;

int main() {
	//c語言的使用方法
  char name[] = {'r', 'o', 'b', 'e', 'r', 't'};
  cout << name << endl;
  char name1[7] = "jenny";
  cout << name1 << endl;
	//為何c語言要儲存字串,必需使用下面語法
  const char *name2 = "peter";
  cout << name2 << endl;
  name2 = "peter hsu";
	cout << name2 << endl;

	//c++字串可以由string來管理
	cout << "c++的string" << endl;
	
	string name3 = "peter";
	cout << name3 << endl;	
	name3 = "peter hsu";
	cout << name3 << endl;
	name3 = "徐國堂";
	cout << name3 << endl;
	
}
