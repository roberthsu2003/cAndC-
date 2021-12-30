#include <iostream>
using namespace std;

int main() {
	int num = 4;
	int scores[num];
	scores[0] = 87;
	scores[1] = 75;
	scores[2] = 90;
	scores[3] = 45;
	
	//使用泡沫排序,讓所有的元素值都有相互比對
	for(int i=0;i<num-1;i++){		
		for(int j=i+1;j<num;j++){
			cout << "i=" << i << "比對" << "j=" << j << endl;
			cout << scores[i] << "比對" << scores[j] << endl;
			//由大到小排序
			/*
			if(scores[i] < scores[j]){
				//2數對調
				int temp = scores[i];
				scores[i] = scores[j];
				scores[j] = temp;
			}
			*/
			//由小到大排序
			if(scores[i] > scores[j]){
				//2數對調
				int temp = scores[i];
				scores[i] = scores[j];
				scores[j] = temp;
			}

		}
		cout << "================\n";
	}

	for(int i=0; i<num; i++){
		cout << scores[i] << endl;
	}	
} 
