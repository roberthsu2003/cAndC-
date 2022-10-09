#include <iostream>
#include <vector>

using namespace std;

int main() {
	vector<int> list;
	for(int i=1; i<=10; i++){
		list.push_back(i);
	}

	for(int elem : list){
		cout << elem << endl;
	}

	cout << "==============" << endl;
	list.pop_back();
	list.pop_back();
	
	for(int elem : list){
		cout << elem << endl;
	}
	cout << "index 0:" << list.operator[](0) << endl;
	cout << "index 0:" << list[0] << endl;

	cout << "size:" << list.size() << endl;
}
