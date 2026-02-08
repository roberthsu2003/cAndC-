#include <iostream>
#include <fstream>

using namespace std;

int main() { 
  ifstream in;
  in.open("a1.txt");
  if(in.good()){
    cout << "讀檔成功" << endl;;
    int value;
    in >> value;
    cout << value << endl;
  }else{
    cout << "讀檔失敗";
  }
}
