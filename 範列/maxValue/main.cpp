#include <iostream>
using namespace std;

int getBiggerValue(int , int );

int main() {
  int aValue,bValue;
  cout << "請輸入a的數值:";
  cin >> aValue;
  cout << "請輸人b的數值:";
  cin >> bValue;
   
  cout << "較大的數是" << getBiggerValue(aValue,bValue) << endl;
}

int getBiggerValue(int a, int b){
    if (a>b){
        return a;
    }else{
        return b;
    }
}
