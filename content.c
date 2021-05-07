#include <iostream>
using namespace std;
namespace Human{
	class Person{
		private:
		public:
			//field欄位
			string name;
			int tall;
			//method方法
			void walk(int var){
				cout << name << "每小時可以跑多少" << var << "公里" << endl;
			}

	};
}

using namespace Human;

int main() {
	Person david;
	david.name = "David Hsu";
	cout << "david的姓名:" << david.name << endl;
	david.tall = 180;
	cout << "david的高度是:" << david.tall << "公分" << endl;
	david.walk(8);

	cout << "=======================\n";

	Person robert;
	robert.name = "Robert Hsu";
	cout << "robert的姓名:" << robert.name << endl;
	robert.tall = 183;
	cout << "robert的高度是:" << robert.tall << "公分" << endl;
	robert.walk(8);
}
