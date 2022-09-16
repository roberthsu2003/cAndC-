#include <iostream>
//學生符合加分條件就加5%分,如果超過300分,就以300為主。
//單項選擇
using namespace std;
int main() {
  int scores;
  bool add;
  cout << "請輸入學生的分數:";
  cin >> scores;

  cout << "學生符合加分條件嗎?yes請輸入1,no請輸入0:";
  cin >> add;

	if(add){
		//有加分
		scores *= 1.05;
		if(scores > 300){
			scores = 300;
		}
	}

	cout << "學生分數是:" << scores << endl;		
	
}
