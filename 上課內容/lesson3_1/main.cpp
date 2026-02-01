#include <iostream>
using namespace std;

int main() {
  int n = 4;
  int array[] = {48, 78, 24, 69};
  //泡沫排序法
  for(int i=0; i<n-1; i++){
    for(int j=i+1; j<n; j++){
      cout << "i=" << i <<",j=" << j << endl;
    }
    cout << "==============\n";
  }
  for(int i=0; i<n; i++){
    cout << array[i] << endl;
  }
  return 0;
}
