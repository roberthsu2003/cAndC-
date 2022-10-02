//結構struct
#include <iostream>
using namespace std;

struct Rectangle{
	int width;
	int height;
};

int main() {
	struct Rectangle rec;
	rec.width = 10;
	rec.height = 20;

	cout << "矩形的寬是:" << rec.width << endl;
	cout << "矩形的高是:" << rec.height << endl;
}
