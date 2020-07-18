#include <iostream>
using namespace std;

int main() {
int n = 10;
int *p = &n;
cout << "變數n的值=" << n << endl;
cout << "指標p的指向的內容" << *p << endl;
*p = 20;
cout << "改變後的變數n的值=" << n << endl;
}
