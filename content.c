//陣列的應用:泡沫排序

#include <iostream>

int main() {
 int arrays[] = {20, 50, 12, 35};
 printf("排序前:\n");

 int nums = sizeof(arrays) / sizeof(arrays[0]);
 for (int i=0; i< nums; i++){
	 printf("%i ", arrays[i]);
 }
}
