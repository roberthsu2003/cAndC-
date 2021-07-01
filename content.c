#include <iostream>
#include <stdio.h>

using namespace std;

int main() {
  int chinese;
  int english;
  cout << "Hello C++!\n";
  cout << "這是C++的第一個輸出程式" << endl;
  printf("Hello! c語言\n");
  printf("這是c語言的輸出程式\n");
  cout << "請輸入國文分數:";
  cin >> chinese;
  cout << "你的國文分數是" << chinese << endl;

  printf("請輸入英文分數:");
  scanf("%d",&english);
  printf("您的英文分數是:%d\n",english);
  return 0;
}
