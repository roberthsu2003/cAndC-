#include <iostream>
#include <time.h>
using namespace std;

int main() {
  srandom(time(NULL));

  int students = 50;
  int subjects = 5;
  int scores[students][subjects];
  for (int i = 0; i < students; i++) {
    cout << "學生" << i + 1 << "\t";
    for (int j = 0; j < subjects; j++) {
      scores[i][j] = random() % (100 - 50 + 1) + 50;
      cout << scores[i][j] << "\t";
    }
    cout << endl;
  }
}
