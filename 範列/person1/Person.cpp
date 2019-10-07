#include "Person.h"


Person::Person(string name, int tall){
    this -> name = name;
    this -> tall = tall;
}

void Person::walk(int var){
    cout << name << "每小時可跑" << var << " 公里" << endl;
}

