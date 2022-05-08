#include <iostream>
using namespace std;
int main() {
	int scores[5]; //建立陣列
	//給值
	scores[0] = 93;
	scores[1] = 75;
	scores[2] = 94;
	scores[3] = 65;
	scores[4] = 82;

	//輸出值
	for(int i=0; i<5; i++){
		cout << scores[i];
		if(i==4){
			cout << "\n";
		}else{
			cout << ",";
		}
	}
}
