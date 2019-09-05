// Name        : password.cpp
//讓使用者輸入密碼,如果輸入的密碼正確(1234), 要顯示「密碼正確!歡迎光臨!」。如果不正確就不做任何事
#include <iostream>
using namespace std;

int main() {
    string password;
    cout << "請輸入密碼:";
    cin >> password;

    if(password == "1234"){
        cout << "密碼正確!歡迎光臨";
    }
    
    return 0;
}
