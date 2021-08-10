#include <iostream>
using namespace std;

int main() {
	string name;//c++的型別
	const char* sex; //c的字串型別
	cout << "請輸入您的中文姓名:";
	cin >> name;
	sex = "女";

	cout << "歡迎光臨:" << name << endl;
	cout << "您的性別是" << sex << endl; 

	return 0;


}
