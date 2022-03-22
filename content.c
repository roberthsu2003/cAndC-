#include <iostream>
using namespace std;


class Tools{
    public:
	static int add(int a, int b){
		return  a + b;
	}

   static int sub(int a, int b){
        return a - b;
   }
};



int main() {
cout << Tools::add(10, 20) << endl;
cout << Tools::sub(50, 20) << endl;

}
