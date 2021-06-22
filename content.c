#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

int main() {
	//int student[3] = {70, 80, 90};
	srand(time(NULL));
	int student[3];
	student[0] = rand() % 51 + 50;
	student[1] = rand() % 51 + 50;
	student[2] = rand() % 51 + 50;
	
	cout << student[0] << "," << student[1] << "," << student[2] << endl;
}
