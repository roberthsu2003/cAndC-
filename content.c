#include <iostream>

using namespace std;
class Person {
private:
  string _name; //instance field
	int _weight;
	int _height;

public:  
	Person(string name,int height, int weight){ //Person的建構式
		_name = name;
		_height = height;
		_weight = weight;
	}

string name() { return _name; } //instance method
	int weight(){
		return _weight;
	}

	int height(){
		return _height;
	}

	double bmi(){		
		return _weight / ((_height/100.0) * (_height/100.0));
	}
};

int main() {
  Person p1("robert",183, 78);  
  cout << p1.name() << endl;
	cout << "體重是" << p1.weight() << endl;
	cout << "身高是" << p1.height() << endl;
	cout << "bmi:" << p1.bmi() << endl;

	Person p2("john",178, 97);  
  cout << p2.name() << endl;
	cout << "體重是" << p2.weight() << endl;
	cout << "身高是" << p2.height() << endl;
	cout << "bmi:" << p2.bmi() << endl;
}
