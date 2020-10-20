#include <iostream>

int main() {
	int score[2][3] = {{85, 82, 90},{76, 95, 89}};
	for(int i=0; i<2; i++){
		for(int j=0; j<3; j++){
			printf("第%i位學生第%i科成績:%i\n", i+1, j+1, score[i][j]);
		}
	}
}
