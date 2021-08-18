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
	cout << "國文\t英文\t數學\t自然\t地理\t總分\t平均" << endl;
	for (int i=0; i<50; i+=1){
		int sum=0;
		for(int j=0; j<5; j+=1){
			sum += students[i][j];
			cout << students[i][j] << "\t\t";
		}
		cout << sum << "\t\t";
		printf("%.2f",sum/5.0);
		cout << endl;
	}
	return 0;
}
