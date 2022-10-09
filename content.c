#include <iostream>

class Size{
	public:
	unsigned int x;
	unsigned int y;
	Size(int n, int m){
		x = n;
		y = m;
	}
};

int main() {
	Size tri1(10,20);
	Size tri2(25,30);
}
