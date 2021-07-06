#include <iostream>
#include <stdlib.h>
#include <time.h>
#include "tools.h"

using namespace std;



int main() {	
	srand(time(NULL));
	int length = 10;
	int scores[length];	

	for(int i=0; i<length; i++){		
		scores[i] = (rand() % 100) + 1;
	}
	cout << "初始值:\n";
	for(int i=0; i<length; i++){		
		cout << scores[i] << " ";
	}
	cout << endl;

	//排序
	sorted(scores,length);
	
	cout << "排序後:\n";
	for(int i=0; i<length; i++){		
		cout << scores[i] << " ";
	}

	cout << endl;
	return 0;
}


tools.h
void sorted(int *a,int length);



tools.cpp
void sorted(int *a,int length){
	int temp;
	for(int i=0; i<length-1; i++){
		for(int j=i+1; j<length; j++){
			if (a[i] < a[j]){
				temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}
		}
	}

}
