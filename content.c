#include <iostream>
using namespace std;
void sub1(int, int &);

int main() {
  int a = 10;
  int b = 20;
  cout << "a=" << a << endl;
  cout << "b=" << b << endl;
  sub1(a,b);
  cout << "a=" << a << endl;
  cout << "b=" << b << endl;

}

void sub1(int x, int &y){
	x = 100;
	y = 200;
}
