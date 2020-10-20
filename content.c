//陣列的應用:泡沫排序

#include <iostream>

int main() {
 int arrays[] = {20, 50, 12, 35};
 printf("排序前:\n");

 int nums = sizeof(arrays) / sizeof(arrays[0]);
 for (int i=0; i< nums; i++){
	 printf("%i ", arrays[i]);
 }

 //陣列排序
 for(int start=0; start < nums-1; start++){
	 for(int end=start+1; end < nums; end++){
		 if(arrays[start] > arrays[end]){
			 int temp = arrays[start];
			 arrays[start] = arrays[end];
			 arrays[end] = temp;
		 }
	 }
 }
 
 printf("\n排序後:\n");
 for (int i=0; i< nums; i++){
	 printf("%i ", arrays[i]);
 }

}
