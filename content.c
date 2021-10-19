#include <iostream>
using namespace std;
//全域變數
int total = 0;

void getData(){
	//靜態變數
	static int a = 0;
	a++;
	cout << "a=" << a << endl;
	total++;
}

int main() {
  getData();
  getData();
  getData();
  cout << "total是" << total << endl;
}
