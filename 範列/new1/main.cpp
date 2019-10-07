#include <iostream>
using namespace std;
class Car{
    public:
        int speed;
        //自訂的建構式
        Car(){
           speed = 70; 
        }

        Car(int n){
            speed = n;
        }
};


int main() {
 Car bmw; 
 cout << bmw.speed << endl;

 Car toyota(120);
 cout << toyota.speed << endl;;
}
