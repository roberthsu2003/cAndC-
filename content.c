#include <iostream>
#include <time.h>
using namespace std;

void generateLot(){
	int lot[49];

  for (int i = 0; i < 49; i++) {
    lot[i] = i + 1;
  }
  int num = 7;
  int choose[num];
  int maxIndex = 48;
  for (int i = 0; i < num; i++) {
    int randIndex = random() % (maxIndex + 1);
    choose[i] = lot[randIndex];
    lot[randIndex] = lot[maxIndex];
    maxIndex--;
  }

  for (int i = 0; i < num-1; i++) {
    cout << choose[i] << " ";
  }
  cout << endl;
	cout << "特別號:" << choose[num-1] << endl;
}

int main() {
  srandom(time(NULL));
	int groups;
	cout << "請輸大樂透電腦選號組數:";
	cin >> groups;

	for(int i=0; i<groups; i++){
		cout << "第" << i+1 << "組:\n";
		generateLot();
		cout << "=====================\n";
	}
  
}
