#include <iostream>
using namespace std;

namespace Human{
	class Person{
		public:
			string name;
			int height;
			int weight;
			void walk(int var){
				cout << name << "每小時可跑" << var << "公里" << endl;
			}

			float bmi(void){
				return weight / ((height/100.0) * (height/100));
			}

	};
}

using namespace Human;

int main() {
	Person david;
	david.name = "David";
	david.height = 180;
	david.weight = 60;
	cout << "david's name:" << david.name << endl;
	cout << "david's height:" << david.height << endl;
	david.walk(40);
	cout << "david'd bmi:" << david.bmi() << endl;
	printf("david'd bmi:%.2f\n", david.bmi());

}
