#include <iostream>
using namespace std;

int add(int s[]){
	return s[0] + s[1] + s[2] + s[3] + s[4];
}

int main() {
	int scores[] = {67, 85, 74, 92, 72};
	int total = add(scores);
	cout << "總分為" << total << endl;
}
