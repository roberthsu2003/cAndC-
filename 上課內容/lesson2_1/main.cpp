#include <iostream>
using namespace std;

int main() {
  int scores[5];
  cout << "陣列大小是:" << sizeof(scores) << endl;
  cout << "請輸入學生的5個分數(使用空格分隔):";
  for(int i=0; i<=4; i++){
    cin >> scores[i];
  }
  
  /*
  cout << scores[0] << endl;
  cout << scores[1] << endl;
  cout << scores[2] << endl;
  cout << scores[3] << endl;
  cout << scores[4] << endl;
  */

  for(int i=0;i<5; i++){
    cout << scores[i] << endl;
  }
  
}
