#include <iostream>
#include <math.h>
using namespace std;

//自訂的function(功能)
double getBMI(double h, double w) {
  double bmi = w / pow((h / 100), 2);
  return bmi;
}

int main() {
  cout << "BMI值計算公式:    BMI = 體重(公斤) / 身高2(公尺2)" << endl;
  double weight, height;
  double BMI;
  cout << "請輸入身高(公分):";
  cin >> height;
  cout << "請輸入體重(公斤):";
  cin >> weight;
  BMI = getBMI(height, weight);

  cout << "您的BMI是:" << BMI << endl;
}
