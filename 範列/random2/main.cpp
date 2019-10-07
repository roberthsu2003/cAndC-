#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

int main() {
  unsigned int seed = (unsigned int)time(NULL);
  srand(seed);
  int n;
  while(true){
      cout << "請按任意鍵擲骰子,使用(E)結束遊戲:";
      char ch = getchar();
      if(ch == 'E'){
          cout << "擲骰子遊戲結束!" << endl;
          break;
      }else{
          n = 1 + rand() % (6 - 1 + 1);
          cout << "您所擲的點數為:" << n << "點" << endl;
      }
  }
}
