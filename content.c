#include <iostream>
#define PI 3.14159
#define SQUARE(x) (x) * (x)

using namespace std;
int main() {
	int r;
	cout << "請輸入半徑:" << endl;
	cin >> r;
	cout << "面積是:" << PI * SQUARE(r) << endl;
}
