#include <iostream>
#include <time.h>

using namespace std;

int main() {
  srandom(time(NULL));
  int n = 20; //元素數量
  int array[n];

  //使用亂數1~99,建立元素值
  int min = 1;
  int max = 99;
  for(int i=0; i<n; i++){
    array[i] = random() % (max-min+1) + min;
  }
  cout << "元素數量:" << n << endl;
  for (int i = 0; i < n; i++) {
    cout << array[i] << " ";
  }
  cout << endl;
  

  return 0;
}
