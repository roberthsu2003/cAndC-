#include <iostream>
#include <math.h>
using namespace std;

class Person{
  public:
    string name; //欄位,成員
    int height;
    int weight;

    Person(){ //建構式
      
    }

    Person(string n, int h, int w){ //建構式
      name = n;
      height = h;
      weight = w;
    }

    double bmi(){
      return weight / pow((height/100.0), 2);
    }
};

int main() { 
  Person p("robert", 170, 72);  

  cout << "p的實體資料如下:\n";
  cout << "姓名:" << p.name << endl;
  cout << "身高:" << p.height << endl;
  cout << "體重:" << p.weight << endl;
  cout << "BMI:" << p.bmi() << endl;

  cout << "====================" << endl;
  Person p1;
  p1.name = "jenny";
  p1.height = 173;
  p1.weight = 60;

  cout << "p1的實體資料如下:\n";
  cout << "姓名:" << p1.name << endl;
  cout << "身高:" << p1.height << endl;
  cout << "體重:" << p1.weight << endl;
  cout << "BMI:" << p1.bmi() << endl;

  
}
