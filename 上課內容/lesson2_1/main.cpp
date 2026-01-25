#include <iostream>
using namespace std;

int main() {
  int scores[5];
  cout << "陣列大小是:" << sizeof(scores) << endl;
  scores[0] = 78;
  scores[1] = 96;
  scores[2] = 89;
  scores[3] = 90;
  scores[4] = 63;

  cout << scores[0] << endl;
  cout << scores[1] << endl;
  cout << scores[2] << endl;
  cout << scores[3] << endl;
  cout << scores[4] << endl;
}
