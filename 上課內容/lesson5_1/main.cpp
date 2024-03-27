#include <iostream>
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
};

int main() {
  People p1;
  p1.name = "徐國堂";
  p1.height = 183;
  p1.weight = 81;

  People p2("張xx", 69, 170);
}
