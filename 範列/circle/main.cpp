#include <iostream>
using namespace std;

class Circle{
    private:
        int radius;
    public:
        void setRadius(int r){
            radius = r;
        }

        float area(){
            return 3.141596 * radius * radius;
        }
};

int main() {
  Circle circle;
  int radius;
  cout << "半徑=";
  cin >> radius;
  circle.setRadius(radius);
  cout << "面積=" << circle.area() << endl;
  
}
