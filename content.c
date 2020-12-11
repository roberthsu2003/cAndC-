#include <iostream>

int main() {
	int scores[2][3] = {{85, 82, 90},{76, 95, 89}};
	for(int i=0; i<2; i++){
		for(int j=0; j<3; j++){
			printf("第位%d學生第%d科成績:%d\n", i+1, j+1,scores[i][j]);
		}
	}
}
