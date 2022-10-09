#include <iostream>
#include <math.h>
#include <vector>

using namespace std;

class BMI {
public:
  string name;
  float height;
  float weight;
	//建構式,名稱必需和class名稱一樣
	BMI(string n,float h,float w){
		name = n;
		height = h;
		weight = w;
	}
  //實體的方法
  float bmi() { return weight / pow((height / 100), 2); }
};

int main() {
  vector<BMI> pensons;
  BMI b1("robert", 170, 75);  
  pensons.push_back(b1);

  BMI b2("jenny", 150, 50);  
  pensons.push_back(b2);

  BMI b3("alice", 169, 60);  
  pensons.push_back(b3);

  for (BMI elem : pensons) {
    cout << "name:" << elem.name << endl;
    cout << "height:" << elem.height << endl;
    cout << "weight:" << elem.weight << endl;
		cout << "bmi:" << elem.bmi() << endl;		
    cout << "==============" << endl;
  }
}
