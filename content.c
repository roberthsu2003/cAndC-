#include <iostream>
using namespace std;
int main() {
char a = 1;
int b = 1;
float c = 1;
double d = 1;

cout << "char佔" << sizeof(a) << "bytes\n";
cout << "int佔" << sizeof(b) << "bytes\n";
cout << "float佔" << sizeof(c) << "bytes\n";
cout << "double佔" << sizeof(d) << "bytes\n";
}
