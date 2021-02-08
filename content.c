#include <iostream>
using namespace std;

class Person{
	public:
		int tall;
		string name;
		void walk(int var){
			cout << name << "每小時可跑" << var << "公里" << endl;
		}
};

int main() {
	Person david;
	david.tall = 180;
	david.name = "大衛";
	david.walk(20);

	Person robert;
	robert.name = "羅伯";
	robert.tall = 170;
	robert.walk(25);
}
