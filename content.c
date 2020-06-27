#include <iostream>
using namespace std;

int main() {
	int scores[5];
	scores[0] = 70;
	scores[1] = 80;
	scores[2] = 90;
	scores[3] = 100;
	scores[4] = 60;

	for(int i=0; i<=4; i++){
		cout << "scores[" << i << "]=" << scores[i] << endl;
	}
}
