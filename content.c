//試用巢狀的if-else敘述，撰寫一個可以判斷輸入數字為正負數以及奇偶數的的程式
#include <iostream>

using namespace std;

int main() {
  int values;
  string message;
  cout << "請輸入數字:";
  cin >> values;
  if (values >= 0) {
    if (values % 2 == 0) {
      message = "正偶數";
    } else {
			message = "正偶數";
    }

  } else {
    if (values % 2 == 0) {
			message = "正偶數";
    } else {
			message = "正偶數";
    }
  }

	cout << "您輸入的" << values << "是" << message << endl;	
}
