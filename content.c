#include <iostream>
#include <time.h>

using namespace std;

int get_score() { 
	return random() % (100 - 50 + 1) + 50; 
}

int main() {
  srandom(time(NULL));
	int stu_num = 50;
  int score_num = 5;
	int total_nums = stu_num * score_num;
  int scores[total_nums];

  for (int i = 0; i < total_nums; i++) {
    scores[i] = get_score();
    cout << "scores[" << i << "]的值是" << scores[i] << endl;
  }
}
