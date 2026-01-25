#include <iostream>

// 格式化輸出
using namespace std;

int main() { 
  double pi = 3.14159265359;
  int number = 42;

  // 設定小數點位數  
  cout << "圓周率:" << pi << endl;
  printf("圓周率:%.2lf\n",pi);

  cout << "number值是" << number << endl;
  printf("number值是:%d\n",number);
}
