#include <iostream>
#include <vector>

using namespace std;

void setToZero(vector<double> &d) {
  for (int i = 0; i < d.size(); i++) {
    d[i] = 0;
  }
}

void print(const vector<double> &d) {
  for (int i = 0; i < d.size(); i++) {
    cout << d[i] << "\t";
  }
  cout << endl;
}

int main() {
  vector<double> vec_d{10, 20, 30, 40, 50};
  print(vec_d);
  setToZero(vec_d);
  print(vec_d);
}
