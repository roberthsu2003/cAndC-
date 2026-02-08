#include <iostream>
using namespace std;

//2數對調
void swap(int &n, int &m){ //call by reference
  int temp;
  temp = n;
  n = m;
  m = temp;
}

int main() { 
  int x = 666;
  int y = 888;
  cout << "x=" << x << ",y=" << y << endl;
  //2數對調
  swap(x, y);
  cout << "x=" << x << ",y=" << y << endl;
}
