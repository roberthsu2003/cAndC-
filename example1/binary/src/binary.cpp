//============================================================================
// Name        : binary.cpp
//使用2分搜尋法執行搜尋

#include <iostream>
using namespace std;

int main() {
	int num[] = {256, 731, 943, 389, 142, 645, 829, 945, 371, 418};
	string name[] = {"林小1","林小2","林小3","林小4","林小5","林小6","林小7","林小8","林小9","林小10"};
	int n = sizeof(num) / sizeof(num[0]);
	int s, i ,j , c, min, max, mid;
	bool isFound;
	int tempInt;
	string tempstr;
	for (i=0; i < n-1; i++){
		for(j = i+1; j<n; j++){
			if(num[i] > num[j]){
				tempInt = num[i];
				num[i] = num[j];
				num[j] = tempInt;

				tempstr = name[i];
				name[i] = name[j];
				name[j] = tempstr;

			}
		}
	}

	cout << "排序後的編號:\n";
	for(i = 0; i<n ; i++){
		cout << num[i] << " ";
	}

	for(;;){
		isFound = false;
		min = 0;
		max = n-1;
		c=1;
		cout << "\n請輸入中獎者的編號:";
		cin >> s;
		while(min <= max){
			mid = (min+max)/2;
			if(num[mid] == s){
				isFound = true;
				break;
			}
			c++;
			if(num[mid] > s){
				max = mid - 1;
			}else{
				min = mid + 1;
			}
		}

		if(isFound == true){
			cout << "中獎者的姓名為:" << name[mid];
			cout << "(共比對" << c << "次)\n\n";
			break;
		}else{
			cout << "無此中獎號碼!";
			cout << "(共比對" << c << "次)\n\n";
		}

	}
	return 0;
}
