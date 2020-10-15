#include <iostream>

int main() {
	const char *name1;
	name1 =  "robert";
	const char *name2;
	name2 = "alice";

	name1 = "Dear robert";
	name2 = "Dear robert";

	printf("%s,%s\n", name1, name2);

	if(name1 == name2){
		printf("相同\n");
	}else{
		printf("不相同\n");
	}
}
