#include <iostream>
using namespace std;
int main() {
  float PI = 3.14159;
  int radius = 10;
  //自動轉換資料類型
  cout << "圓面積=" << PI * radius * radius << endl;
   //如果是指定式，編譯器會自動將=右邊的資料型別轉換為左邊的資料型別。
  int area;
  area = PI * radius * radius;
  cout << "area = " << area; 
