//宣告Rectangle結構，並建立結構變數Height,Width表示長和寬，輸入矩形的長和寬後計算面積

#include <iostream>
using namespace std;

typedef struct rectangle{
	int width;
	int height;
}Rectangle;

int main() {
	Rectangle rec;

	cout << "請輸入矩形的寬:";
	cin >> rec.width;
	cout << "請輸入矩形的高:";
	cin >> rec.height;
	cout << "矩形的面績是:" << rec.width * rec.height << endl;
	return 0;
}
