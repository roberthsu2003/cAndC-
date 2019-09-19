#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using  namespace std;

int main() {
    int firstHour,firstMin;
    int secondHour,secondMin;
    int totalMins;
    int timeSegments;
    int payMoney;

    printf("請輸入進場時間:");
    scanf("%d %d",&firstHour, &firstMin);

    printf("請輸入出場時間:");
    scanf("%d %d",&secondHour, &secondMin);

    totalMins = (secondHour-firstHour) * 60 + (secondMin - firstMin);

    timeSegments = totalMins /30;

    if(totalMins <= 120){
        payMoney = timeSegments * 30;
    }else if(totalMins <= 240){
        payMoney = timeSegments * 40;
    }else{
        payMoney = timeSegments * 60;
    }

    cout << "進場時間是" << firstHour << "-" << firstMin << endl;
    cout << "出場時間是" << secondHour << "-" << secondMin << endl;

    cout << "停車的總分數" << totalMins << endl;
    cout << "停車的總費用是" << payMoney << endl;
}
