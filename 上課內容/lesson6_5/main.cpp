#include <iostream>
#include <math.h>
#include <vector>
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

int main(){
  vector<Person> persons;
  persons.push_back(Person("robert",173,77));
  persons.push_back(Person("jenny", 165, 56));
  persons.push_back(Person("alice", 170, 55));

  for(Person &p:persons){
    cout << p.name << endl;
    cout << p.height << endl;
    cout << p.weight << endl;
    cout << p.bmi() << endl;
    cout << "==============" << endl;
  }
}
