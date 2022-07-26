#include <iostream>
#define PI 3.141592653

using namespace std;
int main() {
  // const double PI=3.141592653;
  double radius, area;
  cout << "請輸入半徑:";
  cin >> radius;
  area = PI * radius * radius;
  printf("面積是%.2f\n", area);
}
