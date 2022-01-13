#include <iostream>
using namespace std;
//自訂一個Person類別
class Person{
	public:
		//實體欄位
		string name;
		
		//實體方法
		void walk(int var){
			cout << name << "每小時可跑" << var << "公里" << endl;
		}
};

int main() {
	Person david; //建立Person實體
	Person robert;
	david.name = "David";
	robert.name = "Robert";

	cout << "david實體的name是" << david.name << endl;
	cout << "robert實體的name是" << robert.name << endl;
	david.walk(20);
	robert.walk(15);
} 
