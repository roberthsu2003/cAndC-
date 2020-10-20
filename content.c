//循序搜尋
#include <iostream>

int main() {
	int nums[] = {256, 731, 943, 389, 142, 645, 829, 945, 371, 418};
	const char *names[] = {"stu1","stu2","stu3","stu4","stu5","stu6","stu7","stu8","stu9","stu10"};

	int inputNum;
	int n = sizeof(nums) /sizeof(nums[0]);
	int foundNum;
	bool isFound = false;
	printf("請輸入中獎者的編號");

	scanf("%i", &inputNum);

	for(int i=0; i<n; i++){
		if(nums[i] == inputNum){
			foundNum = i;
			isFound = true;
			break;
		}
	}


	if(isFound == true){
		printf("中獎者的姓名為:%s\n", names[foundNum]);
	}else{
		printf("沒有中獎\n");
	}

}
