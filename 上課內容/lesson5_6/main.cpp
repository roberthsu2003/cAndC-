#include <iostream>
#include <vector>

using namespace std;

int main() {
  vector<int> list;
  list.push_back(10); // vector的實體方法push_back()
  list.push_back(20);
  list.push_back(30);
  list.push_back(40);
  list.push_back(50);
  cout << "元素的數量是:" << list.size() << endl;
  for (int i = 0; i < list.size(); i++) { // vector的實體方法size()
    cout << list[i] << endl;
  }
}
