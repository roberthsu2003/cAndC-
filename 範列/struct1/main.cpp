#include <iostream>
using namespace std;

typedef struct Student{
    string name;
    int score;
} Student;

int main() {
  Student stu1 = {"robert", 90};
  Student stu2 = {"david", 90};
  Student stu3 = {"alice", 90};

  stu1.name = "jenny";
  cout <<  "stu1.name=" <<  stu1.name << endl;
  cout << "stu1.score=" << stu1.score << endl;

}
