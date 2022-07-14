#include <iostream>
#include <math.h>
using namespace std;
int main() {
	const double PI = 3.141592653;
	
	for(int deg=0; deg<=180; deg+=15){
		cout << "角度:" << deg;
		cout << ",弳度是" << deg * PI / 180;
		cout << ",sin(角度" << deg << ")=";
		printf("%.2f\n",sin(deg * PI / 180));
	}
}
