#include <iostream>
#include <string>
using namespace std;

int main() {
  //c++語言的字串
  string str1 = "ReplItC++";
  cout << "str1:" << str1 << endl;

  //c語言的方式
  char str2[] = {'R','e','p','l','I','t','C','+','+','\0'};
  cout << "str2:" << str2 << endl;
  char str3[] = "ReplItC++";
  cout << "str3:" << str3 << endl;
}
