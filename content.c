#include <iostream>
using  namespace std;

int main() {
int x = 1;
int y = ++x;
cout << "x=" << x << "\ny=" << y << endl;

cout << "後置" << endl;
int m =1;
int n = m++;
cout << "m=" << m << "\nn=" << n << endl;

cout << "左邊沒有等於" << endl;
++x;
cout << "x=" << x << endl;
}
