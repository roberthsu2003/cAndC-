#include <iostream>
#include "Person.h"
using namespace std;

int main() {
  Person david("david",183); 
  cout << david.name << " 身高=" << david.tall << endl;
  david.walk(20);
  return 0;
}
