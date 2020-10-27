#include <iostream>

int main() {
	//c的輸出
	int score;
	scanf("%i",&score);
	printf("C的輸出=%i\n",score);
	//c++輸出
	std::cin >> score;
	std::cout << "C++的輸出=" << score << std::endl;
}
