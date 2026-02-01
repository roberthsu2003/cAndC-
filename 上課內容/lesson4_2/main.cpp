#include <iostream>
using namespace std;

//2數對調

int main() { 
  int x = 666;
  int y = 888;
  cout << "x=" << x << ",y=" << y << endl;
  //2數對調
  int temp;
  temp = x;
  x = y;
  y = temp;
  cout << "x=" << x << ",y=" << y << endl;
}
