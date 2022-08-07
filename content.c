//main.cpp

#include <iostream>
#include "tools.h"
#include "tools.h"

using namespace std;


int main() {
  int num = 3;
	//動態配置的記憶體空間allocate
  int *n = new int[3];
  *(n + 0) = 10;
  *(n + 1) = 20;
  *(n + 2) = 30;
  print(n,num);

  multiply10(n,num);
  print(n,num);

  division10(n,num);
  print(n,num);
	
	//動態配置的記憶體空間allocate,要用delete 手動刪除記憶體
	delete [] n;	

	
}


//tools.h
#ifndef __TOOLS_H__
#define __TOOLS_H__

#include <iostream>
using namespace std;

void division10(int *x,int num) {
  for (int i = 0; i < num; i++) {
    *(x + i) /= 10;
  }
}

void multiply10(int x[],int num) {
  for (int i = 0; i < num; i++) {
    x[i] *= 10;
  }
}

void print(int x[],int num) {
  for (int i = 0; i < num; i++) {
    cout << x[i] << "\t";
  }
  cout << endl;
}


#endif
