#include <iostream>
#include <time.h>

using namespace std;

int main() {
	srandom(time(NULL));
	int nums[20];
	for(int i=0;i<20;i++){
		nums[i] = random() % (99-1+1) + 1;
		cout << nums[i] << "\t"; 
	}
}
