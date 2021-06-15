#include <iostream>
using namespace std;

int main() {
 int scores;
 cout << "請輸入學生分數:";
 cin >> scores;

 if(scores>=80){
	 cout << "特優" << endl;
  }else if(scores >= 60){
	 cout << "優" << endl;
  }else{
	 cout << "有待改進" << endl;
  }

  cout << "程式結束" << endl;
}
