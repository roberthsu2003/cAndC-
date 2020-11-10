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


int main() {
  std::cout << "Hello World!\n";
}
