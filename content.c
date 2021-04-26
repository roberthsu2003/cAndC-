#include <iostream>
#include <time.h>
using namespace std;

int randomScore(){
	return rand() % 41 + 60;
} 

int main() {
	srand(time(NULL));
	int students[50][5];
	for(int i=0; i<50; i++){
		for(int j=0; j<5; j++){
			students[i][j] = randomScore();
			cout << students[i][j] << " ";
		}
		cout << endl;
	}
}
