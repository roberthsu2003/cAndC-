/*
讓使用者輸入成績, 若成績在90分以上就顯示「優等」, 80-89分顯示「甲等」，70-79分顯示「乙等」，60-69分顯示「丙等」，60分以上顯示「丁等」。

顯示:
請輸入成績(0-100):89
甲等

*/
#include <iostream>
using namespace std;

int main() {
	int score;
	printf("請輸入成績(0-100):");
	scanf("%i",&score);
	string message;
	if(score >= 90){
		message = "優等";
	}
}
