#include <iostream>
#define MIN(x, y) ((x) >= (y) ? (y) : (x))
#define MAX(x, y) ((x) >= (y) ? (x) : (y))

using namespace std;
int main() {
  int a = 3, b = 8;
  cout << "最小數" << MIN(a, b) << endl;
  cout << "最大數" << MAX(a, b) << endl;
}
