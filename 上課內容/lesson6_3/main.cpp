#include <iostream>
#include <fstream>

using namespace std;

int main() { 
  ifstream in;
  in.open("a1.txt");
  cout << in.good() << endl;
}
