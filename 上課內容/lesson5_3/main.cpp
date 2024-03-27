#include "people.h"
#include <iostream>
using namespace std;

void change_name(People* p){
	p -> name = "無名氏";
}

int main() {
  People p1;
  p1.name = "徐國堂";
  p1.height = 183;
  p1.weight = 81;
	change_name(&p1);
  p1.profile();

  cout << "===================\n";
  People p2("張xx", 69, 170);
  p2.profile();

  cout << "===================\n";
  People p3("王xx", 65, 150);
  p3.profile();

  cout << "===================\n";
  // new,傳出的是指標變數
  People *p4 = new People("陳xx", 92, 175);
  p4->profile();
}
