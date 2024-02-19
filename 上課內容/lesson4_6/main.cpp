#include <iostream>
using namespace std;

int main() {
	int presure;
	cout << "請輸入您的血壓:";
	cin >> presure;
	if(presure>=90 && presure<=120){
		cout << "血壓正常" << endl;
	}else if(presure > 120){		
		cout << "高血壓" << endl;
	}else{
		cout << "低血壓" << endl;
	}
	
}
