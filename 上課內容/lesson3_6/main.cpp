#include <iostream>
using namespace std;

int main() {
  int nums[] = {10, 20, 30};

  cout << nums << endl;
  cout << "=================" << endl;
  cout << "nums[0]的值" << nums[0] << endl;
  cout << "nums[1]的值" << nums[1] << endl;
  cout << "nums[2]的值" << nums[2] << endl;
  cout << "====================" << endl;
  cout << "nums[0]的記憶體位址" << &nums[0] << endl;
  cout << "nums[1]的記憶體位址" << &nums[1] << endl;
  cout << "nums[2]的記憶體位址" << &nums[2] << endl;
  cout << "===================" << endl;
  cout << "nums+0的記憶體位址" << nums + 0 << endl;
  cout << "nums+1的記憶體位址" << nums + 1 << endl;
  cout << "nums+2的記憶體位址" << nums + 2 << endl;
  cout << "====================" << endl;
  cout << "num+0指向的值是" << *(nums + 0) << endl;
  cout << "num+1指向的值是" << *(nums + 1) << endl;
  cout << "num+2指向的值是" << *(nums + 2) << endl;
}
