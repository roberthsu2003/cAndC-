#include <iostream>
using namespace std;
int main() {
	int sum = 0;
	int start = 2;
	int end = 1000;
	for(int i=start; i<=end; i+=2){
		sum += i;
	}

	printf("%d至%d的偶數總合是%d\n",start,end,sum);
}
