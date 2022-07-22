#include <iostream>
using namespace std;
int main() {
  int *pa = new int(); //動態建立int的記憶體空間和傳出記憶體位址
  int *pb = new int();
  cout << "請輸入a的值:";
  cin >> *pa;
  cout << "請輸入b的值:";
  cin >> *pb;

  int c = *pa + *pb;
  cout << "2數相加的結果是" << c << endl;
}
