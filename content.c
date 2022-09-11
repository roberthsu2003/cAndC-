#include <iostream>
#include <time.h>

using namespace std;

int get_score() { return random() % (100 - 50 + 1) + 50; }

int main() {
  srandom(time(NULL));
  int stu_num = 50;
  int score_num = 5;
  int total_nums = stu_num * score_num;
  int scores[total_nums];

  for (int i = 0; i < total_nums; i++) {
    scores[i] = get_score();
  }

  for (int i = 0; i < stu_num; i++) {
    cout << "第" << i + 1 << "學生: ";
		for(int j=0; j < score_num; j++){
			cout << scores[i * score_num + j] << "\t";
		}
		cout << endl;
  }
}
