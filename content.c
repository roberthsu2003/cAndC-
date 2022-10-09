#include <iostream>
#include <math.h>
#include <vector>

using namespace std;

class BMI {
public:
  string name;
  float height;
  float weight;
  //實體的方法
  float bmi() { return weight / pow((height / 100), 2); }
};

int main() {
  vector<BMI> pensons;
  BMI b1;
  b1.name = "robert";
  b1.height = 170;
  b1.weight = 75;
  pensons.push_back(b1);

  BMI b2;
  b2.name = "jenny";
  b2.height = 150;
  b2.weight = 50;
  pensons.push_back(b2);

  BMI b3;
  b3.name = "alice";
  b3.height = 169;
  b3.weight = 60;
  pensons.push_back(b3);

  for (BMI elem : pensons) {
    cout << "name:" << elem.name << endl;
    cout << "height:" << elem.height << endl;
    cout << "weight:" << elem.weight << endl;
		cout << "bmi:" << elem.bmi() << endl;		
    cout << "==============" << endl;
  }
}
