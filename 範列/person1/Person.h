#ifndef __PERSON_H__
#define __PERSON_H__

#include <iostream>
using namespace std;

class Person{
    public:
        int tall;
        string name;
        void walk(int);
        Person(string name, int tall);
};
#endif
