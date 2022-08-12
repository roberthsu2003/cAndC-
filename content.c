#include <iostream>

using namespace std;
class Person {
public:
  string name;
};

Person changeName(Person p,string newName){ //call by value
	p.name = newName;
	return p;
}

void changeName1(Person& p,string newName){ //call by reference
	p.name = newName;
}

void changeName2(Person *p,string newName){
	p->name = newName;
}
int main() {
  Person p1; //預設建構式
  p1.name = "robert";
	p1 = changeName(p1, "Professor Robert");
	//changeName1(p1, "Professor Robert");

  Person p2;
  p2.name = "Ting";
	//p2 = changeName(p2, "Doctor Ting");
	changeName1(p2, "Doctor Ting");
	
  cout << "p1.name:" << p1.name << endl;
  cout << "p2.name:" << p2.name << endl;

	Person *p3 = new Person();
	p3 -> name = "john";
	changeName2(p3, "Hello John");
	cout << "p3的name:" << p3->name << endl;
}
