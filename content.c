#include <iostream>
using namespace std;
int total = 0;

void getData(string name){
	static int n = 0;
	n++;
	cout << "第" << n << "位候選人是:" << name << endl;
	total ++;
}

int main() {
	getData("David");
	getData("Amy");
	getData("Tony");
} 
