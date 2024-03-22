#include <iostream>
using namespace std;

void change_n(int n_value){
	n_value += 10;
}

int main() {
	int n = 5;
	//n內容+10
	change_n(n);
	cout << "現在n的內容是:" << n << endl;
}
