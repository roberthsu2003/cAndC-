#include <iostream>
using namespace std;

class Person{
  public:
    string name;
    int height;
    int weight;
};

int main() { 
  Person p;
  p.name = "robert";
  p.height = 170;
  p.weight = 72;

  cout << "p的實體資料如下:\n";
  cout << "姓名:" << p.name << endl;
  cout << "身高:" << p.height << endl;
  cout << "體重:" << p.weight << endl;

  cout << "====================" << endl;
  Person p1;
  p1.name = "jenny";
  p1.height = 173;
  p1.weight = 60;

  cout << "p1的實體資料如下:\n";
  cout << "姓名:" << p1.name << endl;
  cout << "身高:" << p1.height << endl;
  cout << "體重:" << p1.weight << endl;

  
}
