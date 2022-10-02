#include <iostream>
using namespace std;

typedef enum direction { 
	North, South, East, West 
} Direction;

int main() {
  Direction destination = West;
  cout << "目標=" << destination << endl;
}
