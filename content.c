#include <iostream>
#include <time.h>
using namespace std;

int get_score() { 
	return random() % (100 - 50 + 1) + 50; 
}

int main() {
  srandom(time(NULL));
  int stu_nums;
  int sub_nums;
  cout << "請輸入學生人數:";
  cin >> stu_nums;
  cout << "請輸入科目數:";
  cin >> sub_nums;
	//2維陣列
  int students[stu_nums][sub_nums];
	int scores[stu_nums];		
  for (int i = 0; i < stu_nums; i++) {
    cout << "第" << i + 1 << "位學生:\t";
		int total = 0;
    for (int j = 0; j < sub_nums; j++) {			
      students[i][j] = get_score();
			total += students[i][j];
      cout << students[i][j] << "\t";
    }
		scores[i] = total;
		cout << scores[i] << "\t";
    cout << endl;
  }
}
