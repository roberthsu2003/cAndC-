using namespace std;
class Person {
public:
  string name;
	Person(string n){ //自訂的建構式
		name = n;
	}
};

int main() {
  Person p1("徐國堂");
  cout << p1.name << endl;

  Person p2("張xx");
  cout << p2.name << endl;
}
