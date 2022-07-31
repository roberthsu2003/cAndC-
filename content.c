#include <iostream>
using namespace std;

int main() {
	//動態配置記憶體
  int *n = new int();
  int *m = new int();
 
  cout << "請輸入n的值:";
  cin >> *n;

  cout << "請輸入m的值:";
  cin >> *m;

  int sum;
  sum = *n + *m;
  cout << "n和m加總為:" << sum << endl;
}
