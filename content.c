#include <iostream>
typedef enum direction {
	North,
	South,
	East,
	West 
} Direction;

using namespace std;
int main() {
  Direction destination = West;
  cout << destination << endl;

  //檢查列舉變數的內容
  switch (destination) {
  case North:
    cout << "North" << endl;
    break;

  case South:
    cout << "South" << endl;
    break;

  case East:
    cout << "East" << endl;
    break;

  case West:
    cout << "West" << endl;
    break;

  default:
    break;
  }
}
