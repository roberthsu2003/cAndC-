#include <iostream>
#include <time.h>

using namespace std;

int main() {
  
  srandom(time(NULL));
  int max = 100;
  int min = 50;

  int n = 5;  //科目數
  int m = 50; //學生人數

  //建立2維陣列,5個學生,每個學生5個分數
  int students[m][n];
  for(int i=0; i<m; i++){
    for(int j=0; j<n; j++){
      students[i][j] = random() % (max - min + 1) + min;
      cout << students[i][j] << " ";
    }
    cout << "\n===============\n";
  }
  
}
