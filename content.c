#include <iostream>
#include <vector>

using namespace std;

void print(vector<double> d) {
  for (int i = 0; i < d.size(); i++) {
    cout << d[i] << "\t";
  }
  cout << endl;
}

int main() {
  vector<double> vec_d{10, 20, 30, 40, 50};
	print(vec_d);
	
  for (int i = 0; i < vec_d.size(); i++) {
    vec_d[i] = 0;
  }

  print(vec_d);
}
