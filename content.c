//小明想要存錢買一輛機車,機車每輛30000元，他將每月存的錢輸入，當存款足夠買機車時，就顯示提示訊息告知。

#include <iostream>

int main() {
	int deposit = 0 ,num = 0, inputValue; 
	while(deposit < 30000){
		num++;
		printf("請輸入第%d個月份的存款:", num);
		scanf("%i", &inputValue);
		deposit += inputValue;
	}

	printf("恭喜!已經存夠了，存了%d個月的存款,總存款為:%d元",num, deposit);
}
