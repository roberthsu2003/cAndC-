#include <iostream>
#include <time.h>

using namespace std;

int main() {
	srand(time(NULL));
	int num;
	cout << "請輸入學生考試科目是數量:";
	cin >> num;
	int scores[num];
	for(int i=0; i<num; i++){
		scores[i] = rand() % (100-60+1) + 60;
		cout << scores[i] << " ";
	}
	cout << endl;
}
