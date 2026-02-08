#include <iostream>
#include <fstream>
#include <vector>

using namespace std;

int main() { 
  vector<int> numbers;
  ifstream in;
  in.open("a1.txt");
  if(in.good()){
    cout << "讀檔成功" << endl;;
    int value;
    while(in >> value){
      numbers.push_back(value);
    }
    
  }else{
    cout << "讀檔失敗";
  }

  for(int elem:numbers){
    cout << elem << " ";
  }
  cout << endl;
}
