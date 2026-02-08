#include <iostream>
#include <vector>

using namespace std;

void print(const vector<int>& v){
  for(int elem:v){
    cout << elem << " ";
  }
  cout << endl;
}

int main() { 
  vector<int> list;
  cout << "vector初始化";
  print(list);
}
