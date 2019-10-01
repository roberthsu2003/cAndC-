#include <iostream>
using namespace std;

class Car{
    public:
    int speed;
    void turbo(){
        this -> speed = this -> speed + 1;
    }
};

int main() {
  Car BMW;
  BMW.speed = 70;
  cout << "現在速度=" << BMW.speed << endl;
  BMW.turbo();
  cout << "現在速度=" << BMW.speed << endl;
  return 0;
}
