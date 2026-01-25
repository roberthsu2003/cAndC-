#include <iostream>
#include <time.h>

using namespace std;

int main() {
  srandom(time(NULL));
  int max = 100;
  int min = 50;
  int n = 5;
  int score = 0;

  int scores[n];
  for (int i = 0; i < n; i++) {
    scores[i] = random() % (max - min + 1) + min;
  }

  cout << "學生分數: ";
  for (int i = 0; i < n; i++) {
    score += scores[i];
    cout << scores[i] << " ";
  }
  cout << "總分:" << score ;
  cout << " 平均:" << score / (double)n << endl;
}
