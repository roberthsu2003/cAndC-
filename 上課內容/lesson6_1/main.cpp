#include <iostream>
#include <vector>

using namespace std;

void print(const vector<int> &v) {
  cout << "元素數量:"<< v.size() << endl;
  for (int elem : v) {
    cout << elem << " ";
  }
  
}

void make_random(vector<int> &v, int size) {
  v.clear();
  int n = random() % size + 1;
  for (int i = 0; i < n; i++) {
    v.push_back(random());
  }
}

int main() {
  srandom(123);
  vector<int> list;
  cout << "vector初始化";
  print(list);
  cout << "=================" << endl;
  
  cout << "第1次make_random\n";
  make_random(list, 20);
  print(list);
  cout << endl;
  cout << "=====================" << endl;

  cout << "第2次make_random\n";
  make_random(list, 5);
  print(list);
  cout << endl;
  cout << "=====================" << endl;
}
