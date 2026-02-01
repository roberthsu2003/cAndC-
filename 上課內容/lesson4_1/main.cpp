#include <iostream>
#include <math.h>

using namespace std;

int math1(int x){
  int value = pow(x,2) + 2 * x + 1;
  return value;
}

int main() { 
  for(int i=0; i<=10; i++){
    int result = math1(i);
    cout << "如果x=" << i << "得到的值是" << result << endl;
  }
  return 0;
}
