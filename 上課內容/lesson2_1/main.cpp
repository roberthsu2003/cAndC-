#include <iostream>
using namespace std;

int main() {
  int n = 3; //元素的數量儲存在變數內
  int scores[n];
  cout << "陣列大小是:" << sizeof(scores) << endl;
  cout << "請輸入學生的" << n << "個分數(使用空格分隔):";
  for(int i=0; i<n; i++){
    cin >> scores[i];
  }
  
  /*
  cout << scores[0] << endl;
  cout << scores[1] << endl;
  cout << scores[2] << endl;
  cout << scores[3] << endl;
  cout << scores[4] << endl;
  */

  for(int i=0;i<n; i++){
    cout << scores[i] << endl;
  }
  
}
