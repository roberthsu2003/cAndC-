#include <iostream>
using namespace std;

int main() {
  int score[8][3] = {{85, 82, 90},{76, 95, 89},{85, 82, 90},{76, 95, 89},{85, 82, 90},{76, 95, 89},{85, 82, 90},{76, 95, 89}};
  for(int i=0; i<8; i++){
      for(int j=0; j<3; j++){
          cout << "第" << i+1 << "位學生" << j+1 << "科成績:" << score[i][j] << endl;
      }

      cout << "==========================\n\n";
  }
}
