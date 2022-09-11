#include <iostream>
#include <time.h>

using namespace std;

int get_score() { 
	return random() % (100 - 50 + 1) + 50; 
}

int main() {
  srandom(time(NULL));
  int score_num = 5;
  int scores[score_num];

  for (int i = 0; i < score_num; i++) {
    scores[i] = get_score();
    cout << "scores[" << i << "]的值是" << scores[i] << endl;
  }
}
