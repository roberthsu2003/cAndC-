#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using  namespace std;

int main() {
    int firstHour,firstMin;
    int secondHour,secondMin;

    printf("請輸入進場時間:");
    scanf("%d %d",&firstHour, &firstMin);

    printf("請輸入出場時間:");
    scanf("%d %d",&secondHour, &secondMin);

    cout << "進場時間是" << firstHour << "-" << firstMin << endl;
    cout << "出場時間是" << secondHour << "-" << secondMin << endl; 
}
