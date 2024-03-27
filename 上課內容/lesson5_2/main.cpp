#include <iostream>
#include <math.h>
using namespace std;

class People {
public:
  string name;
  int weight;
  int height;
  People() {
    // cout << "目前執行此建構式" << endl;
  }

  People(string name, int weight, int height) {
    this->name = name;
    this->weight = weight;
    this->height = height;
  }

  void profile() {
    cout << "姓名:" << name << endl;
    cout << "身高:" << height << "cm" << endl;
    cout << "體重:" << weight << "kg" << endl;
    cout << "BMI:" << bmi() << endl;
    cout << "您的狀況:" << status(bmi()) << endl;
  }

  double bmi() { return weight / pow(height / 100.0, 2); }

  string status(double bmi) {
    if (bmi < 18.5) {
      return "體重過輕";
    } else if (bmi < 24) {
      return "正常範圍";
    } else if (bmi < 27) {
      return "過重";
    } else if (bmi < 30) {
      return "輕度肥胖";
    } else if (bmi < 35) {
      return "中度肥胖";
    } else {
      return "重度肥胖";
    }
  }
};

int main() {
  People p1;
  p1.name = "徐國堂";
  p1.height = 183;
  p1.weight = 81;
  p1.profile();

  cout << "===================\n";
  People p2("張xx", 69, 170);
  p2.profile();

  cout << "===================\n";
  People p3("王xx", 65, 150);
  p3.profile();

  cout << "===================\n";
  // new,傳出的是指標變數
  People *p4 = new People("陳xx", 92, 175);
  p4->profile();
}
