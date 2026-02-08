#include <iostream>
#include <vector>

using namespace std;

int main() { 
  vector<int> vec_a; //沒有任何元素的vector實體
  vector<int> vec_b(10); //建立一個有10個元素,每個元素預設為0的vector實體
  cout << vec_b[0] << endl;
  cout << vec_b[9] << endl;
  cout << "=================" << endl;
  for(int i=0; i<10; i++){
    cout << vec_b[i] << endl;
  }
}
