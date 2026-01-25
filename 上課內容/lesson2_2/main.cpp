#include <iostream>
#include <time.h>

using namespace std;

int main() {
  srandom(time(NULL));
  int max = 55;
  int min = 50;
  int value = random() % (max - min + 1) + min;
  cout << value << endl;
  /*
  int n = 3; //元素的數量儲存在變數內
  int scores[n];
  cout << "請輸入學生的" << n << "個分數(使用空格分隔):";
  for(int i=0; i<n; i++){
    cin >> scores[i];
  }

  
  for(int i=0;i<n; i++){
    cout << scores[i] << endl;
  }
  */

}
