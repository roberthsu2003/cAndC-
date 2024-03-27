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

  People(string n, int w, int h) {
    name = n;
    weight = w;
    height = h;
  }

  void profile() {
    cout << "姓名:" << name << endl;
    cout << "身高:" << height << "cm" << endl;
    cout << "體重:" << weight << "kg" << endl;
		cout << "BMI:" << bmi() << endl;
  }

  double bmi() { return weight / pow(height / 100.0, 2); }
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
  
}
