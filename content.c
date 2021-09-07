#include <iostream>
typedef enum direction{
	North,
	South,
	East,
	West
}Direction;

using namespace std;

int main() {
	Direction direct = West;
	cout << "方向是:";

	switch(direct){
		case North:
		cout << "北方" << endl;
		break;

		case South:
		cout << "南方" << endl;
		break;

		case East:
		cout << "東方" << endl;
		break;

		case West:
		cout << "西方" << endl;
		break;

		default:
		cout << "無資訊" << endl;
	}
	return 0;
}
