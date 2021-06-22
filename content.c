#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

int main() {
	//int student[3] = {70, 80, 90};
	srand(time(NULL));
	int student[50][3];
	for(int i=0; i<50; i++){
		for(int j=0; j<3;j++){
			student[i][j] = rand() % 51 + 50;
		}
	}

	for(int i=0; i<50; i++){
		cout << "第" << i+1 << "位學生" << endl;
		for(int j=0; j<3;j++){			
			cout << student[i][j] << ", ";
		}
		cout << "\n======================\n";
	}
	
}
