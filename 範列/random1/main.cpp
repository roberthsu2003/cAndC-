#include <iostream>
#include <time.h>

using namespace  std;

int main() {
 unsigned int seed = (unsigned int)time(NULL);
 srand(seed);
 for(int i=0; i<5 ;i++){
    cout << 0 + rand()% (100-0+1) << endl;
 }

}
