#include <iostream>
using namespace std;

void addThree(int s[],int nums){
	for(int i=0; i<nums; i+=1){
		s[i] += 3;
		if(s[i] > 100){
			s[i] = 100;
		}
	}
}

int main() {
	int scores[] = {75, 89, 69, 92, 98};
	addThree(scores, 5);
	for(int i=0; i<5; i+=1){
		cout << scores[i] << endl;
	}
	return 0;
}
