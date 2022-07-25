#include <iostream>
using namespace std;

void swap(int *n , int *m){
	int temp;
	temp = *n;
	*n = *m;
	*m = temp;
}

int main() {
  int *ptr_a;
  ptr_a = new int(666);
  int *ptr_b = new int(888);


  cout << "指標變數ptr_a的內容是" << *ptr_a << endl;
  cout << "指標變數ptr_b的內容是" << *ptr_b << endl;
  swap(ptr_a, ptr_b);
  cout << "指標變數ptr_a的內容是" << *ptr_a << endl;
  cout << "指標變數ptr_b的內容是" << *ptr_b << endl;

	
}
