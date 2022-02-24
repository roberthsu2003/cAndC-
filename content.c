#include <iostream>
using namespace std;

int main() {
	srandom(time(NULL));
	int min = 60;
	int max = 100;
	int nums = 250;
	int scores[nums];
	for(int i=0; i<nums; i++){
		scores[i] = random() % (max-min+1) + min;
		cout << scores[i] << " ";
		if ((i+1) % 5 == 0){
			cout << endl;
		}		
	}	
}
