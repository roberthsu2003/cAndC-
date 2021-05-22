#include <iostream>
#include <stdio.h>

using namespace std;
int main() {
	int score1 = 100;
	unsigned int score2 = 100;
	short score3 = 100;
	unsigned short score4 = 100;
	unsigned long long score5 = 100;
	float pi1 = 3.14159;
	double pi2 = 34567.12345;

	cout << "score1=" << score1 << endl;
	cout << "score2=" << score2 << endl;
	cout << "score3=" << score3 << endl;
	cout << "score4=" << score4 << endl;
	cout << "score5=" << score5 << endl;
	cout << "pi1=" << pi1 << endl;
	cout << "pi2=" << pi2 << endl;
	cout << "=====================" << endl;

	printf("score1=%d\n",score1);
	printf("score2=%d\n",score2);
	printf("score3=%d\n",score3);
	printf("score4=%d\n",score4);
	printf("score5=%lld\n",score5);
	printf("pi1=%f\n",pi1);
	printf("pi2=%f\n",pi2);
	printf("pi1=%.3f\n",pi1);
	printf("pi2=%.1f\n",pi2);

}
