#include <iostream>
using namespace std;
int main() {
	//一次給值，只可以在建立陣列的時候
	int scores[3] = {70,80,90};
	/*
	scores[0] = 70;
	scores[1] = 80;
	scores[2] = 90;
	*/

	cout << scores[0] << "," << scores[1] << "," << scores[2] << endl;
	return 0;
}
