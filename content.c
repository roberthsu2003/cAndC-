#include <iostream>

using namespace std;
int main() {
  string name = "robert";
  const char *name1 = "jenny";
  int scores = 357;

  // c++的輸出
  cout << "姓名:" << name << endl;
  cout << "姓名1:" << name1 << endl;
  cout << "分數是:" << scores << endl;
  // c的輸出
  printf("姓名1:%s", name1);
  printf("分數:%d\n", scores);
}
