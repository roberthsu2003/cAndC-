#include <stdio.h>
//一維字元陣列
int main(void) {
  //char name[] = {'R', 'o', 'b', 'e', 'r', 't','\0'};
 
  char name[] = "Robert";
  printf("%s\n",name); 
  //使用字元陣列，無法更改值 
  //name = "Jenny";

  //使用指標變數來定義字元陣列
  const char* myName = "Robert";
  printf("%s\n",myName);
  myName = "Jenny";
  printf("%s\n",myName);

  return 0;
}
