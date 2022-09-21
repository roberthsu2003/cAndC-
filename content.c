#include <iostream>

using namespace std;

int fun1(int x) { 
	return x * x + 2 * x + 1; 
}

int main() { 
	for(int i=0; i<=10; i++){
		int result = fun1(i);
		cout << "如果x=" << i << "得到的值是" << result << endl;
	} 
}
