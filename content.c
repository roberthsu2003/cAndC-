#include <iostream>
#include <vector>

using namespace std;

int main() {
  vector<double> vec(5);
  cout << "請輸入5個數字:";
  for (double &elem : vec) {
    cin >> elem;
  }

  for (double elem : vec) {
    cout << elem << endl;
  }
}
