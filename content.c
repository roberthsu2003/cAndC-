#include <iostream>
using namespace std;

typedef struct Rectangle{
	int width;
	int height;
} Rectangle;

int main() {
	Rectangle five[] = {{20,20},{30,30},{40,40},{50,50},{60,60}};
	for(int i=0; i<5; i++){
		Rectangle rect = five[i];
		int area = rect.width * rect.height;
		cout << "第" << i+1 << "個的矩形面績是" << area << endl;
	}
}
