#include <iostream>
using namespace std;
//定義矩形結構
typedef struct rectangle{
	int width;
	int height;
}Rectangle;

typedef struct point{
	int x;
	int y;
}Point;


int main() {

Rectangle rec1 = {76, 45};
Point po1 = {5, 10};
cout << "矩形的寬是:" << rec1.width << endl;
cout << "矩形的高是:" << rec1.height << endl;
cout << "矩形的面績是:" << rec1.width * rec1.height <<  endl;

} 
