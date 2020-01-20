#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	int n=0,total=0;
	for(int i=1;i<=7;i++){
		if(i == 7){
			cout << "請輸入星期日的支出:" << endl;	
		}else{
			cout << "請輸入星期" << i << "的支出:";	
		}
		cin >> n;
		total += n;
	}
	cout << "本星期的支出為:" << total << "元\n";
	return 0;
}
