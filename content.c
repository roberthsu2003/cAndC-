#include <iostream>
using namespace std;

int main() {
	char n[] = {'r','o','b', 'e', 'r', 't'};
	cout << "陣列變數語法" << n[0] << endl;

	cout << "指標變數的語法" << *(n+0) << endl;

	char *p = "jenny";

	cout << "陣列變數語法" << p[0] << endl;

	cout << "指標變數的語法" << *(p+0) << endl;

	string s = "Alice";
}
