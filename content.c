#include <cmath>
#include <iostream>
using namespace std;

typedef struct bmi {
  string name;
  int height;
  int weight;
} BMI;

int main() {
  int nums;
  cout << "========BMI計算==========" << endl;
  cout << "請輸入要計算的人數:";
  cin >> nums;
  BMI bmis[nums];
  for (int i = 0; i < nums; i++) {
    BMI* one = &bmis[i];
    cout << "請輸入第" << i+1 << "位的姓名,身高,體重(中間要空隔):";
    cin >> one->name >> one->height >> one->weight;    
  }

  for (int i = 0; i < nums; i++) {
    BMI *one = &bmis[i];
    double bmi = one->weight / pow(one->height / 100.0, 2);
    cout << one->name << endl;
    printf("您的BMI是:%.2f\n\n", bmi);
  }
}
