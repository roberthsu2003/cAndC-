#include <iostream>
#include <time.h>
using namespace std;

int main() {
	srandom(time(NULL));
	int groups;
	cout << "請輸入大樂透電腦選號組數:";
	cin >> groups;

	for(int j=0; j<groups; j++){
		int lot[49];
		int choose[7];
		int max_index = 48;
		for(int i=0; i<49; i++){
			lot[i] = i+1;
		}
	
		
		for(int i=0; i<7; i++){
			int randIndex = random() % (max_index+1);
			choose[i] = lot[randIndex];
			lot[randIndex] = lot[max_index];
			max_index -= 1;
		}
	
		cout << "本期大樂透電腦選號第" << j+1 << "組\n";
		for(int i=0; i<7;i++){
			cout << choose[i] << " ";
		}
		cout << "\n\n\n";
	}
	

	
}
