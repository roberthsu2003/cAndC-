#include <iostream>

using namespace std;

//定義function
void modify(int* n){
	*n = 100;
}

int main() {
	//呼叫function
	int a = 699;	
	cout << "a=" << a << endl;
	modify(&a);
	cout << "a=" << a << endl;
} 
