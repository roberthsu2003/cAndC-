#include <iostream>
using namespace std;
//檢查使用者輸入的分數是300以內
//學生符合加分條件就加5%分,如果超過300分,就以300為主。

int main() {
  int score;
  bool add;
  cout << "請輸入學生總分:";
  cin >> score;
	if(score<=300){ //雙向選擇
		cout << "學生符合加分條件嗎? yes請輸入1,no請輸入0:";
		cin >> add;
		if (add) { //單項選擇
			score *= 1.05;
			if(score > 300){ //巢狀判斷
				score = 300;
			}
		}

		cout << "學生分數是" << score << endl;
	}else{
		cout << "輸入的範圍錯誤" << endl;
	}
  
}
