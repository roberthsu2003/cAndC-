#include <iostream>
using namespace std;

int main() {
  int first;
  int second;
  /*
  printf("請輸入第一個值:");
  scanf("%d", &first);
  printf("請輸入第二個值:");
  scanf("%d",&second);
  */
  cout << "請輸入第一個值:";
  cin >> first;
  cout << "請輸入第二個值:";
  cin >> second;
  /*
  printf("您的第一個數值是%d\n",first);
  printf("您的第二個數值是%d\n",second);
  */

  cout << "您的第一個數值是" << first << endl;
  cout << "您的第二個數值是" << second << endl;
  /*
  printf("2數相加是:%d\n",first + second);
  printf("2數相乘的結果:%d\n", first * second);
  */
  
  cout << "2數相加是:" << first + second << endl;
  cout << "2數相乘的結果:" << first * second << endl;

  return 0;
}
