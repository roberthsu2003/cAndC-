//陣列變數當作參數或指標變數當作參數
#include <iostream>
using namespace std;

void showAry(int *);
void sub2(int *);

int main() {
  int ary[] = {1, 2, 3};
  cout << "1指標變數當作參數:" << endl;
  showAry(ary);
  
  cout << "2陣列變數當參數" << endl;
  sub2(ary);

}

void showAry(int *tempAry){
    for (int i=0; i<=2; i++){
        cout << "*(tempAry+" << i  << ") =" << *(tempAry+i) << endl;
    }
}

void sub2(int tempAry[]){
    for(int i=0; i<=2; i++){
        cout << "ary[" << i << "] =" << tempAry[i] << endl; 
    }
}
