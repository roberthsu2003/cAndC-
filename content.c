#include <iostream>

int main() {
	int deposit = 0, num=0, inputNum;
	while(deposit < 30000){
		num++;
		printf("請輸入第%d個月份的存款:",num);
		scanf("%d", &inputNum);
		deposit += inputNum;
	}

	printf("恭喜!已經存夠了，存了%d個月的總存款為:%d元",num,deposit);
}
