#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

int main() {
	int nums[] = {2, 5, 3, 4};
	int numsCount = sizeof(nums)/sizeof(nums[0]);
	for(int i=0;i<numsCount-1;i++){
		printf("i=%d\n",i);
		for(int j=i+1; j<numsCount;j++){
			if(nums[i] > nums[j]){
				int temp = nums[i];
				nums[i] = nums[j];
				nums[j] = temp;
			}
		}
	}

	for(int i=0; i<numsCount; i++){
		printf("%d ",nums[i]);
	}
}
