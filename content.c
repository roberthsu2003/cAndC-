//50個學生
//5個分數

#include <iostream>
#include <time.h>
using namespace std;

int randomScore(){
	int max=100;
	int min=60;
	
	return rand() % (max-min+1) + min;
}

int main() {
	srand(time(NULL));
	int students[50][5];
	for(int i=0; i<50; i++){
		cout << "第" << i+1 << "學生: ";
		int sum = 0;
		for(int j=0; j<5; j++){
			students[i][j] = randomScore();
			cout << students[i][j] << " ";
			sum += students[i][j];
		}
		cout << "總分:" << sum;
		cout << endl;
	}
}
