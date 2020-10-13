/*
讓使用者輸入成績, 若成績在90分以上就顯示「優等」, 80-89分顯示「甲等」，70-79分顯示「乙等」，60-69分顯示「丙等」，60分以下顯示「丁等」。

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
	}else if (score >=80){
      message = "甲等";
    }else if (score >= 70){
      message = "乙等";
    }else if (score >= 60){
      message = "丙等";
    }else{
      message = "丁等";
    }
	cout << "成績是" << message;
}
