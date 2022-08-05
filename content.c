#include <iostream>
#include <vector>

using namespace std;
void print(vector<int>& list) {
  for (int &elem : list) {
    cout << elem << "\t";
  }
	cout << endl;
}

int main() {
  vector<int> list;
  // vector的實體有實體方法,size(),push_back(),pop_back()
  list.push_back(10);
  list.push_back(20);
  list.push_back(30);
	list.push_back(40);
	print(list);
	
	cout << "==============" << endl;
	list.pop_back();
	print(list);
}
