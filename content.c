#include <iostream>
#include <time.h>
using namespace std;

int main() {
  srandom(time(NULL));
  int num;
  cout << "請輸入學生數:";
  cin >> num;
  int numbers[num];
	
  for (int i = 0; i < num; i++) {
    numbers[i] = random() % (100 - 50 + 1) + 50;
  }

  for (int i = 0; i < num; i++) {
    cout << numbers[i] << " ";
  }
  cout << endl;
}
