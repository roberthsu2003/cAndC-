#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

int main() {
	//int student[3] = {70, 80, 90};
	srand(time(NULL));
	int scores = 10;
	int student[50][scores];
	for(int i=0; i<50; i++){
		for(int j=0; j<scores;j++){
			student[i][j] = rand() % 51 + 50;
		}
	}

	for(int i=0; i<50; i++){
		cout << "第" << i+1 << "位學生" << endl;
		int sum=0;
		for(int j=0; j<scores;j++){			
			cout << student[i][j] << ", ";
			sum += student[i][j];
		}
		cout << "\n";
		cout << "總分:" << sum << endl;
		cout << "平均:" << (float)sum/scores << endl;
		cout << "\n======================\n";
	}
	
}
