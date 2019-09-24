#include <iostream>
using namespace std;

//原型宣告
float temperature(int);

int main() {
 cout <<  "攝氏10度轉華氏溫度=" << temperature(10) << endl;

 int value;
 float result;
 string runAgain;
 do{
    cout << "請輸入攝氏溫度:";
    cin >> value;
    result = temperature(value);
    cout << "華氏溫度=" << result << endl;
    cout << "程式還要繼續嗎?(輸人n 結束):";
    cin >> runAgain;
 }while(runAgain != "n");
 cout << "程式結束";
 return 0;
}

float temperature(int value){
   return 1.8 * value + 32;
}
