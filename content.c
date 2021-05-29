#include <iostream>
using namespace std;

int main() {
 int chinese, math, bonus=0;
 cout << "請輸入國文成績:";
 cin >> chinese;
 cout << "請輸入數學成績:";
 cin >> math;
 if(chinese==100){
	 if(math==100){
		 bonus = 1000;
	 }else{
		bonus = 500; 
	 }
 }else{
	 if (math==100){
		 bonus = 500;
	 }
 }

 cout << "獎金是" << bonus << endl;
}
