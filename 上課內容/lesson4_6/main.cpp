#include <iostream>
using namespace std;

int* create_array(){
   int *array = new int[5];
   array[0] = 10;
   array[1] = 20;
   array[2] = 30;
   array[3] = 40;
   array[4] = 50;
  return array;
}

int main() { 
  int *array =  create_array();
  for(int i=0; i<5; i++){
    cout << array[i] << " ";
  }
  cout << endl;
  delete[] array; 
  return 0;
}
