#include <iostream>
#include <stdlib.h>
#include <stdio.h>
using namespace std;

float temperature(int value){
	return 1.8 * value + 32;
}

int main() {
	cout << "攝氏10度轉華氏溫度=" << temperature(10) << endl;
}
