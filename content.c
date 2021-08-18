#include <iostream>
#include <time.h>
using namespace std;

int main() {
	srand(time(NULL));
	int max = 100;
	int min = 60;
	int students[50][5];
	cout << "students佔的記憶體大小是:" << sizeof(students) << endl;

	//給學生亂數分數
	for (int i=0; i<50; i+=1){
		for(int j=0; j<5; j+=1){
			students[i][j] = rand() % (max-min+1) + min;
		}
	}

	for (int i=0; i<50; i+=1){
		for(int j=0; j<5; j+=1){
			cout << students[i][j] << " ";
		}
		cout << endl;
	}
	return 0;
}
