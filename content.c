#include <iostream>
#include <time.h>
using namespace std;

int main() {
	srandom(time(NULL));
	int students = 50;
	int subjects = 5;
	int totals = students * subjects;
	int scores[totals];

	for(int i=0; i<totals; i++){
		scores[i] = random() % (100-50+1) + 50;
	}
	cout << "姓名 國文 英文 數學 地理 社會\n"; 
	for(int i=0; i<students; i++){
		cout << "學生" << i+1 << " ";
		for(int j=0; j<subjects; j++){
			cout << scores[i*subjects + j] << "  ";
		}
		cout << endl;
	}	
}
