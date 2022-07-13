//國文100同時數學100,獎金1000
//國文100或者數學100,獎金500
using namespace std;

int main() {
	int chinese, math, bonus = 0;
	cout << "請輸入國文成績:";
	cin >> chinese;
	cout << "請輸入數學成績:";
	cin >> math;

	if(math==100 && chinese==100){
		bonus = 1000;
	}else if(math == 100 || chinese == 100){
		bonus = 500;
	}

	cout << "獎金是:" << bonus << endl;
	
}
