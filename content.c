#include <iostream>
//#define MAC
using namespace std;

#ifdef MAC
#define OS "MAC_OS"
#else
#define OS "WINDOWS_OS"
#endif

int main() {
  cout << "目前作業系統是:" << OS << endl;
}
