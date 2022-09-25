#include <iostream>
#include <time.h>
using namespace std;

void search_array(int n[],int elements,int value){	
  int repeation = 0;
  for (int i = 0; i < elements; i++) {
    if (n[i] == value) {
      repeation += 1;
    }
  }
  cout << value << "的數量有" << repeation << endl;
}

int main() {
  srandom(time(NULL));
  int elements = 200;
  int arr[elements];
  for (int i = 0; i < elements; i++) {
    arr[i] = random() % (50 - 1 + 1) + 1;
  }

	for(int i=1;i<=50;i++){
		search_array(arr,elements,i);
	}
  
}
