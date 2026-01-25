#include <iostream>
using namespace std;

int main() { 
  string name;
  int englishScore = 60;
  cout << "請輸入中文姓名:";
  cin >> name;
  
  cout << "請輸入您的英文分數:";
  cin >> englishScore;
  
  cout << "您好:" << name ;
  cout << " 英文分數是:" << englishScore << endl;
  
}
