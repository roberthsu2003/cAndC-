#include <iostream>
#include <time.h>
using namespace std;

int randomScore(){
	return rand() % 51 + 50;
} 

int main() {
	srand(time(NULL));
	int scores[] = {randomScore(),randomScore(),randomScore(),randomScore(),randomScore()};
	for(int i=0;i<5;i++){
		cout << scores[i] << " ";
	}
	cout << endl;
}
