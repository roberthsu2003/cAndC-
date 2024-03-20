#include <iostream>
using namespace std;

//定義結構
struct rectangle {
  string name;
  int width;
  int height;
};

int main() {
  //建立結構變數
  struct rectangle rec1;
  rec1.name = "rec1";
  rec1.width = 20;
  rec1.height = 40;

  //建立結構變數
  struct rectangle rec2 = {"rec2", 10, 15};

  cout << rec2.name << endl;
  cout << rec2.width << endl;
  cout << rec2.height << endl;
}
