#include <iostream>
#include <string.h>
int main() {
	char name1[] = "robert";
	char name2[] = "robert";
	if(strcmp(name1, name2) == 0){
		printf("文字相同");
	}else{
		printf("文字不相同");
	}
}
