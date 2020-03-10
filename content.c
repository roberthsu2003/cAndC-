#include <iostream>
using namespace std;

int main() {
//c++ string
string str = "DevC++";
str = "JavaC++";
cout << "c++字串:" << str << endl;

//c字元陣列
char str1[7] = {'D', 'e', 'v', 'C', '+', '+', '\0'};
cout << str1 << endl;

//字元陣列
char str2[] = "DevC++";
cout << str2 << endl;
str2[0] = 'G';
cout << str2 << endl;

}
