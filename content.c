#include <iostream>
using namespace std;

int main() {
	srandom(time(NULL));
	int students = 50;
	int scores = 5;
	//2維陣列
	int allStudents[students][scores];
	for(int i=0; i<students; i++){
		for(int j=0; j<scores; j++){
			allStudents[i][j] = random() % (100-60+1) + 60;
		}
	}

	for(int i=0; i<students; i++){
		for(int j=0; j<scores; j++){
			cout << allStudents[i][j] << "\t";
		}
		cout << endl;
	}
}
