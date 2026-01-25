#include <iostream>
using namespace std;

int main() { 
  int score;

  cout << "請輸入考試分數(0-100):";
  cin >> score ;

  //cout << cin.fail() << endl;

  if(score < 0 || score > 100){
    cout << "錯誤: 分數必須在 0-100 之間!" << endl;
    return 1;
  }

  cout << "有效分數:" << score << endl;
  return 0;
  
}
