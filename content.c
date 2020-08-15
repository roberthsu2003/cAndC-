#include <iostream>
using namespace std;

int main() {
	int scores[3] = {70, 80, 90};
	printf("%d,%d,%d\n", scores[0], scores[1], scores[2]);
}





#include <iostream>
using namespace std;

int main() {
	string fruits[] = {"香蕉","蘋果","鳳梨"};
	//查詢陣列的數量
	int nums = sizeof(fruits) / sizeof(fruits[0]);
	for(int i=0; i<nums;i++){
		cout << "我喜歡的第"<< i+1 <<"種水果:";
		cout << fruits[i] << endl;
	}
}
