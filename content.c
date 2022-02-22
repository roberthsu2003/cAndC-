#include <iostream>
using namespace std;
int main() {
	int height;
	int weight;
	float bmi;
	char again;
	cout << "=======計算BMI==========\n";

	do{
		cout << "請輸入身高(公分):";
		cin >> height;
		cout << "請輸入體重(公斤):";
		cin >> weight;
		bmi = weight / ((height/100.0) * (height/100.0));
		printf("您的BMI是%.2f\n", bmi);

		if(bmi < 18.5){
			cout << "狀態:體重過輕" << endl;
		}else if(bmi < 24){
			cout << "狀態:正常範圍" << endl;
		}else if(bmi < 27){
			cout << "狀態:過重" << endl;
		}else if(bmi < 30){
			cout << "狀態:輕度肥胖" << endl; 
		}else if(bmi < 35){
			cout << "狀態:中度肥胖" << endl; 
		}else{
			cout << "狀態:重度肥胖" << endl; 
		}
		cout << "\n\n\n";
		cout << "請問還要繼續嗎?(y,n):";
		cin >> again;
	}while(again == 'y');
	cout << "程式結束" << endl;
	return 0;
}
