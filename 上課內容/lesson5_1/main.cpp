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
  cout << "===============" << endl;

  vector<int> vec_c(10, 8);

  for(int i=0; i<10; i++){
    cout << vec_c[i] << endl;
  }
  cout << "==================" << endl;

  vector<int> vec_d{10, 20, 30, 40, 50};
  for(int i=0; i<5; i++){
    cout << vec_d[i] << endl;
  }
  cout << "==================" << endl;
}
