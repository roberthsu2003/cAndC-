#include <iostream>
using namespace std;

int main() {
	srand(time(NULL));
	int guess = rand() % 100 + 1;
	cout << guess;
}
