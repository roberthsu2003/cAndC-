#include <iostream>
#include <math.h>
using namespace std;

//自訂的function(功能)
double getBMI(double h, double w) {
  double bmi = w / pow((h / 100), 2);
  return bmi;
}

//自訂function
string getMessage(double bmi) {
  string message;

  if (bmi < 18.5) {
    message = "體重過輕\n";
  } else if (bmi < 24) {
    message = "正常範圍\n";
  } else if (bmi < 27) {
    message = "過重\n";
  } else if (bmi < 30) {
    message = "輕度肥胖\n";
  } else if (bmi < 35) {
    message = "中度肥胖\n";
  } else {
    message = "重度肥胖\n";
  }
  return message;
}

void caculateBMI() {
  cout << "BMI值計算公式:    BMI = 體重(公斤) / 身高2(公尺2)" << endl;
  double weight, height;
  double BMI;
  cout << "請輸入身高(公分):";
  cin >> height;
  cout << "請輸入體重(公斤):";
  cin >> weight;
  BMI = getBMI(height, weight);

  cout << "您的BMI是:" << BMI << endl;
  string m = getMessage(BMI);
  cout << "您的體重:" << m << endl;
}

int main() {
  while (true) {
    caculateBMI();
    bool is_continue;
    cout << "還要再計算嗎?(1,0):";
    cin >> is_continue;
    if (is_continue == false) {
      break;
    }
  }

  cout << "計算結束\n";
}
