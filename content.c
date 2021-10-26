#include <iostream>
using namespace std;

typedef enum direction{
	North,
	South,
	East,
	West
}Direction;

//typedef enum direction Direction;
int main() {
	Direction dest = West;
	//必需使用switch檢查列舉變數內容值
	switch(dest){
		case North:
		cout << "North" << endl;
		break;
		
		case South:
		cout << "South" << endl;
		break;

		case East:
		cout << "East" << endl;
		break;

		case West:
		cout << "West" << endl;
		break;
	}
	return 0;
}
