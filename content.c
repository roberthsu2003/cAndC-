#include <iostream>
//#define MAC
using namespace std;

#ifndef MAC
#define OS "WINDOWS_OS"
#else
#define OS "MAC_OS"
#endif

int main() {

cout << "目前作業系統是:" << OS << endl;
}
