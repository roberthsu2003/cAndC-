#include <iostream>

int main() {
	unsigned short a = 3000;
	int b;
	b = a;
	printf("b=%d\n", b);

	char c;
	c = a;//由大轉小，資料會移失
	printf("c=%d\n", c);
}
