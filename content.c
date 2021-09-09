#include <iostream>
using namespace std;

class BMI{
	public:
	string name;
	unsigned short weight;
	unsigned short height;
};

int main() {
	BMI p1;
	cout << "請輸入姓名:";
	cin >> p1.name;
	cout << "請輸入身高:";
	cin >> p1.height;
	cout << "請輸入體重:";
	cin >> p1.weight;
	cout << "姓名是" << p1.name << endl;
	cout << p1.name + "的身高是" << p1.height << endl;
	cout << p1.name + "的體重是" << p1.weight << endl;
}
