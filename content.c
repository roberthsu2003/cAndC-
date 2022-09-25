#include <iostream>
using namespace std;
int main() {
  int nums[] = {10, 20, 30, 40, 50};
  cout << "nums全部使用記憶體大小是:" << sizeof(nums) << endl;
  cout << "元素0的記憶體大小是:" << sizeof(nums[0]) << endl;
  cout << "nums的元素數量是:" << sizeof(nums) / sizeof(nums[0]) << endl;

  float f1 = 34.5;
  cout << "f1的變數佔的記憶體大小是:" << sizeof(f1) << endl;

  double d1 = 34.5;
  cout << "d1的變數佔的記憶體大小是:" << sizeof(d1) << endl;

  char c1 = 'a';
  cout << "c1的變數佔的記憶體大小是:" << sizeof(c1) << endl;

  short s1 = 45;
  cout << "s1的變數佔的記憶體大小是:" << sizeof(s1) << endl;

  int i1 = 45;
  cout << "i1的變數佔的記憶體大小是:" << sizeof(i1) << endl;

  long long int ll1 = 45;
  cout << "ll1的變數佔的記憶體大小是:" << sizeof(ll1) << endl;
}
