#include <iostream>
#include <stdio.h>

int main() {
  int chinese;
  int english;
  std::cout << "Hello C++!\n";
  std::cout << "這是C++的第一個輸出程式" << std::endl;
  printf("Hello! c語言\n");
  printf("這是c語言的輸出程式\n");
  std::cout << "請輸入國文分數:";
  std::cin >> chinese;
  std::cout << "你的國文分數是" << chinese << std::endl;

  printf("請輸入英文分數:");
  scanf("%d",&english);
  printf("您的英文分數是:%d\n",english);
  return 0;
}
