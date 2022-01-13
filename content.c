#include <iostream>
using namespace std;
//自訂一個Person類別
class Person{
	public:
		string name;
};

int main() {
	Person david; //建立Person實體
	Person robert;
	david.name = "David";
	robert.name = "Robert";

	cout << "david實體的name是" << david.name << endl;
	cout << "robert實體的name是" << robert.name << endl;
} 
