#include <iostream>
#include <vector>
using namespace std;

//手動輸入5個值
//得到5個值的加總
//得到5個值的平均

int main() { 
  double sum = 0.0;
  const int NUMBER_OF_ENTRIES = 5; //建立常數,一般常數全部都為大寫
  vector<double> numbers(NUMBER_OF_ENTRIES); //建立一個元素有5個的vector實體
  cout << "請輸入" << NUMBER_OF_ENTRIES << "個數值:\n";
  for(int i=0; i<NUMBER_OF_ENTRIES; i++){
    cin >> numbers[i];
    sum += numbers[i];
  }

  cout << "此vector:";
  for(int i=0; i<NUMBER_OF_ENTRIES; i++){
    cout << numbers[i] << " ";
  }

  cout << endl;
  cout << "加總:" << sum << "平均是" << sum / NUMBER_OF_ENTRIES << endl;
  
  
}
