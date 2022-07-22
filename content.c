#include <iostream>

using namespace std;
int main() {
  int *pa = new int(333);
  int *pb = new int(666);
  int temp = *pa;
  *pa = *pb;
  *pb = temp;

  cout << "pa內容是:" << *pa << endl;
  cout << "pb內容是:" << *pb << endl;
}
