#include <iostream>
using namespace std;

typedef struct Student{
	string name;
	int score;
} Student;

int main() {
  Student stus[3] = {{"robert", 94}, {"david", 91}, {"alice", 94}};
  int stuCount = sizeof(stus) / sizeof(stus[0]);
  for(int i=0; i<stuCount; i++){
	  cout << "第" << i+1 << "位學生是" << stus[i].name  << "分數是" << stus[i].score << endl; 
  }
}
