#include <iostream>
using namespace std;

int main() {
	int score[2][3] = {{85, 82, 90},{76, 95, 89}};
	for(int i=0; i<2; i++){
		for(int j=0; j<3; j++){
			printf("第%d位學生第%d科成績:%d\n",i+1,j+1,score[i][j]);
		}
		cout << "=========================\n" ;
	}
}
