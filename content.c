#include <iostream>

int main() {
	//宣告變數
	int chinese;
	int english;
	//變數給值
	chinese = 85;
	english = 90;

	//宣告變數
	int total;
	total = chinese + english;

	/*
	printf("國文分數是%d\n",chinese);
	printf("英文分數是%d\n",english);
	printf("總分是%d\n",total);
	*/

	std::cout << "國文分數是" << chinese << "\n";
	std::cout << "英文分數是" << english << "\n";
	std::cout << "總分是" << total << std::endl;
  	return 0;
}
