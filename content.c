#include <iostream>
#include <stdlib.h>
#include <stdio.h>
using namespace std;

int main() {
  cout << "姓名\t\t座號\t\t電話\n";
  cout << "李振聲\t\t" << 11 << "\t\t0229435437\n";
  cout << "張四聲\t\t" << 13 << "\t\t0229439937\n";

  char chrB;
  chrB = 'A';
  cout << chrB << "\n";

  char chrC;
  chrC = 97;
  cout << chrC << "\n";

  //字串
  string str1;
  string str2 = "這是字串";
  string str3 = "這是\"C++\",非常簡單";

  cout << "\nstr1:" << str1 << "\n";
  cout << "str2:" << str2 << endl;
  cout << "str3:" << str3 << "\n";

  //字元陣列(C語言)
  char *name = "徐國堂";
  cout << "name=" << name << "\n";
  printf("name=%s\n",name);

  bool bolA = true;
  bool bolB = false;

  cout << bolA << endl;
  cout << bolB << endl;
}
