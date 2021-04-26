tool.h

#include <iostream>
//原型宣告
//告訴compiler,我有這個function,等一下我後面會建立
//原型宣告，參數只可用資料類型

int add(int,int);

int add(int a, int b){
	return a + b;
}


main.cpp
#include <iostream>
#include "tool.h"

using namespace std;



int main() {
  int total = add(37, 63);
  cout << "total=" << total << endl;
  return 0;
}



