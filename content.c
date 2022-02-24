#include <iostream>
using namespace std;

int main() {
	srandom(time(NULL));
	int min = 60;
	int max = 100;
	int nums = 250;
	int scores[nums];
	int sum = 0;
	for(int i=0; i<nums; i++){		
		scores[i] = random() % (max-min+1) + min;
		sum += scores[i];
		cout << scores[i] << "\t";
		if ((i+1) % 5 == 0){
			cout << "\t" << sum << "\t" << sum / 5.0 << endl;
			sum = 0;
		}		
	}	
}
