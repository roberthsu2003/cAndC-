#include <cmath>
#include <iostream>
using namespace std;

typedef struct bmi {
  string name;
  int height;
  int weight;
} BMI;

int main() {
  BMI b1;
  cout << "========BMI計算==========" << endl;
  cout << "請輸入姓名:";
  cin >> b1.name;
  cout << "請輸入身高(公分):";
  cin >> b1.height;
  cout << "請輸入體重(公斤):";
  cin >> b1.weight;

  double bmi = b1.weight / pow(b1.height / 100.0, 2);

  cout << b1.name << endl;
  printf("您的BMI是:%.2f\n", bmi);
}
