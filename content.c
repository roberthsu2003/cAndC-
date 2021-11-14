#include <iostream>
using namespace std;
int main() {
	srand(time(NULL));
	int scores[6];
	for(int i=0; i<6; i++){
		scores[i] = random() % (100-50+1) + 50;
		cout << scores[i] << endl;
	}
} 
