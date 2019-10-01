#include <iostream>
using namespace std;

int main() {
  char *str1 = "One";
  char str2[] = "Two";
  cout << "以陣列方式顯示str1字串" << endl;
  for(int i=0; i< 3; i++){
      cout << "str1[" << i << "]=" << str1[i] <<endl;
  }

   cout << "以指標方式顯示str2字串" << endl;
   for(int i=0; i< 3; i++){
      cout << "*(str2+" << i << ")=" << *(str2+i) <<endl;
  }

  //指標變數的位址是可以更改的
  str1 = str2;
  cout << "以陣列方式顯示str1字串的新內容" << endl;
  for(int i=0; i< 3; i++){
      cout << "str1[" << i << "]=" << str1[i] <<endl;
  }

  //陣列變數的位址是不可以更改的
  //str2 = str1;
}
