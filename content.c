#include <iostream>
using namespace std;

int addValueFun(int value){ //call by value,如果有改變內容,要傳回值
	value *= 1.1;
	value = (value > 500)? 500 : value;
	return value;
}	

int main() {
	int scores;
	int addValue;
	cout << "請輸入學生總分(總分,0是不加分,1是加分):";
	scanf("%d,%d",&scores,&addValue);
	
	if(addValue){
		cout << "加分" << endl;
		scores = addValueFun(scores);
	}

	cout << "學生的分數是:" << scores << endl;
	
}
