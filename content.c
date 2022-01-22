#include <iostream>
using namespace std;

int main() {
	srandom(time(NULL));
	int students[50][5]; //2維陣列
	for(int i=0;i<50;i++){
		cout << "第" << i+1 << "位學生:";
		for(int j=0;j<5;j++){
			students[i][j] = random() % (100-60+1) + 60;
			cout << students[i][j] << " ";
		}
		cout << endl;
	}
} 
