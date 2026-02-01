#include <iostream>
using namespace std;

//自訂的function

void func1(){
  cout << "我是func1" << endl;
}

void func2(){
  cout << "我是func2" << endl;
}

int main() { 
  cout << "執行一個自訂的function\n";
  //呼叫自訂的function
  func1();
  func2();
  cout << "main function結束\n";
  return 0;
}
