#include <iostream>
//marco巨集
#define RATE(x) (x) * 34.54   

using namespace std;

int main() {
  double us, nt;
  cout << "請輸入您有多少美金:";
  cin >> us;
  nt = RATE(us+1);
  cout << "您有" << nt << "台幣" << endl;
}
