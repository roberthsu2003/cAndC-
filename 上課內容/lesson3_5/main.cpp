#include <iostream>
using namespace std;

//有參數,有傳出值的自訂function
float temperature(int value){
  return 1.8 * value + 32;
}

int main() {
  int celsius;
  float falen;
  cout << "請輸入攝氏溫度:";
  cin >> celsius;
  falen= temperature(celsius);
  cout << "華氏溫度=" << falen << endl;
  return 0;  
}
