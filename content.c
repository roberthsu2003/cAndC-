#include <iostream>
using namespace std;

int main() {
	srandom(time(NULL));
	int min = 60;
	int max = 100;
	int nums = 5;
	int scores[nums];
	for(int i=0; i<nums; i++){
		scores[i] = random() % (max-min+1) + min;
		cout << scores[i] << endl;
	}	
}
