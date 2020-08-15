#include <iostream>
using namespace std;

	int main() {
	int scores[2][5] = {{85, 82, 90, 74, 69},{94, 67, 25, 67, 89}};
	for(int i=0; i<2; i++){
		for(int j=0; j<5; j++){
			printf("第%d位學生第%d科成績:%d\n",i+1, j+1, scores[i][j]);
			cout << "==============================================\n";
		}
	}
}
