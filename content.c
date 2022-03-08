#include <iostream>
using namespace std;

int main() {
	int scores;
	int addValue;
	cout << "請輸入學生總分(總分,0是不加分,1是加分):";
	scanf("%d,%d",&scores,&addValue);
	
	if(addValue){
		cout << "加分" << endl;
	}else{
		cout << "不加分" << endl;
	}

	cout << "學生的分數是:" << scores << endl;
	
}
