#include <iostream>
using namespace std;

int main() {
	int students[50][5];
	cout << "students佔的記憶體大小是:" << sizeof(students) << endl;

	for (int i=0; i<50; i+=1){
		for(int j=0; j<5; j+=1){
			cout << "學生分數" << students[i][j] << " ";
		}
		cout << endl;
	}
	return 0;
}
