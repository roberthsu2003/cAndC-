#include <iostream>
using namespace std;

int main() {
 int chinese, math, bonus=0;
 cout << "請輸入國文成績:";
 cin >> chinese;
 cout << "請輸入數學成績:";
 cin >> math;
 
 if(chinese == 100 && math == 100){
	 bonus = 1000;
 }else if (chinese==100 || math == 100){
	 bonus = 500;
 }

 cout << "獎金是" << bonus << endl;
 return 0;
}
