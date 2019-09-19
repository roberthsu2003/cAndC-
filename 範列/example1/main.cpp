int main() {
    int firstHour,firstMin;
    int secondHour,secondMin;
    int totalMins;

    printf("請輸入進場時間:");
    scanf("%d %d",&firstHour, &firstMin);

    printf("請輸入出場時間:");
    scanf("%d %d",&secondHour, &secondMin);

    totalMins = (secondHour-firstHour) * 60 + (secondMin - firstMin);

    cout << "進場時間是" << firstHour << "-" << firstMin << endl;
    cout << "出場時間是" << secondHour << "-" << secondMin << endl;

    cout << "停車的總分數" << totalMins << endl;
}int main() {
    int firstHour,firstMin;
    int secondHour,secondMin;
    int totalMins;

    printf("請輸入進場時間:");
    scanf("%d %d",&firstHour, &firstMin);

    printf("請輸入出場時間:");
    scanf("%d %d",&secondHour, &secondMin);

    totalMins = (secondHour-firstHour) * 60 + (secondMin - firstMin);

    cout << "進場時間是" << firstHour << "-" << firstMin << endl;
    cout << "出場時間是" << secondHour << "-" << secondMin << endl;

    cout << "停車的總分數" << totalMins << endl;
}
