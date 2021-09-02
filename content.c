#include <iostream>
using namespace std;

typedef struct Rectangle{
	int width;
	int height;
}Rectangle;

int main() {
	Rectangle rec;
	cout << "請輸入width:";
	cin >> rec.width;
	cout << "請輸入height:";
	cin >> rec.height;

	cout << "矩形的面積是" << rec.width * rec.height << endl;
	return 0;
}
