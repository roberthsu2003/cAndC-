#include <iostream>
using namespace std;
typedef enum direction{
	North=10,
	South,
	East,
	West
}direction;

int main() {
	direction desc;
	desc = East;
	//檢查列舉型別內儲存的值
	switch (desc){
		case North:
		cout << "指向北方" << endl;
		break;

		case South:
		cout << "指向南方" << endl;
		break;

		case West:
		cout << "指向西方" << endl;
		break;

		case East:
		cout << "指向東方" << endl;
		break;

		default:
		cout << "不是正確的值";
	}

	return 0;
}
