//遞迴(Recursive)
#include <iostream>
#include <stdlib.h>
#include <stdio.h>
using namespace std;

double factorial(double n){
	if(n==0){
		return 1;
	}else{
		return n * factorial(n-1);
	}
}

int main() {
	double n, total;
	cin >> n;
	total = factorial(n);
	printf("%.0f! = %.0f\n",n,total);
}



#include <iostream>
using namespace std;

double factorial(int n){
	int t = 1;
	for(int i=1; i<=n; i++){
		t = t * i;
	}
	return t;
}
int main() {
	int n,total;
	cin >> n;
	total = factorial(n);
	cout << n << "! = " << factorial(n) << endl;

}
