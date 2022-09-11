#include <iostream>
#include <time.h>
using namespace std;

int get_number() { return random() % (100 - 1 + 1) + 1; }

int main() {
  srandom(time(NULL));
  int nums;
  cout << "請輸入要排序的數值個數:";
  cin >> nums;
  int array[nums];
  cout << "排序前:" << endl;
  for (int i = 0; i < nums; i++) {
    array[i] = get_number();
    cout << array[i] << "\t";
  }
  cout << endl;
  //前面的索引
  for (int f = 0; f < nums - 1; f++) {
    for (int b = f + 1; b < nums; b++) {
			if(array[f] > array[b]){
				//2數對調
				int temp = array[f];
				array[f] = array[b];
				array[b] = temp;
			}
    }
  }
	cout << "排序後:" << endl;
  for (int i = 0; i < nums; i++) {    
    cout << array[i] << "\t";
  }
  cout << endl;
	
}
