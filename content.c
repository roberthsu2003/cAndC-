#include <iostream>
using namespace std;
int func2(int x, int y){
	return x*x*x + 3*x*x*y + 3*x*y*y + y*y*y;
}

int main() {
	for(int i=1; i<=4; i++){
		for(int j=1; j<=4; j++){
			int result = func2(i,j);
			cout << "x=" << i << "y=" << j << "得到的結果是:" << result << endl;
		}
	}
}
