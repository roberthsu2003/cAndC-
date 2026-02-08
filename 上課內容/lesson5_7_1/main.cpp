#include <iostream>
#include <vector>

using namespace std;

void print(vector<int> &v){
  for(int elem:v){
    cout << elem << endl;
  }
}

int sum(vector<int> &v){
  int result = 0;
  for(int elem:v){
    result += elem;
  }
  return result;
}

int main() { 
  vector<int> list{2, 4, 6, 8};
  print(list);
  cout << "加總是" << sum(list) << endl;
}
