#include <iostream>
using namespace std;

int main() {
	int nums[] = {256, 731, 943, 389, 142, 645, 829, 945, 371, 418};
	string names[] = {"stu1","stu2","stu3","stu4","stu5","stu6","stu7","stu8","stu9","stu10"};

	int inputNum;
	int i;
	int n = sizeof(nums) / sizeof(nums[0]);
	bool isfound = false;

	cout << "請輸入中獎者的編號";
	cin >> inputNum;
	for(i=0; i<n; i++){
		if(nums[i] == inputNum){
			isfound = true;
			break;
		}
	}

	if(isfound == true){
		cout << "中獎者的姓名為:" << names[i];
	}else{
		cout << "無此中獎號碼!";
	}

	cout << "(共比對" << i+1 << "次)\n\n";
}
