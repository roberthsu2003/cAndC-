#include <iostream>
using namespace std;
//定義一個列舉型別
typedef enum Direction{
	North,
	South,
	East,
	West
}Direction;

typedef enum Day{
	saturday,      
    sunday,   
    monday,    
    tuesday,
    wednesday,   
    thursday,
    friday
}Day;

int main() {
	Direction dest = East;

	switch(dest){
		case North:
			cout << "北" << endl;;
			break;
		case South:
			cout << "南" << endl;
			break;
		case East:
			cout << "東" << endl;
			break;
		case West:
			cout << "西" << endl;
			break;		

	}

	Day day = monday;
	cout << day << endl;
}
