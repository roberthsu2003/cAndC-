# 迴圈

## 執行固定次數的迴圈for
```
for ([變數初始化宣告]; [條件判斷]; [改變量]){
	for程式區塊
}
```

	//============================================================================
	// Name        : for1.cpp
	//計算2 - 10所有偶數的總和

	#include <iostream>
	using namespace std;

	int main() {
		int sum = 0;
		for(int i=2; i<=10; i+=2){
			sum += i;
			cout << "第" << i/2 << " 次迴圈的 i = " << i << ",總和為 " << sum << "\n";
		}
		return 0;
	}


### 

	//============================================================================
	// Name        : for2.cpp
	//計算固定中的支出，媽媽每天會將家裡的花費記錄下來，並且計算本週的花費總和
	#include <iostream>
	using namespace std;

	int main() {
		int sum=0, n;
		for(int i=1; i<=7; i++){
			if(i==7){
				cout << "請輸入星期日的支出:";
			}else{
				cout << "請輸入星期" << i << " 的支出:";
			}

			cin >> n;
			sum += n;
		}

		cout << "本星期的支出為:" << sum << "元\n";
		return 0;
	}


```
*question for1_s
小王班上有五學生，請您為小王設計一個輸入成績的程式，並且在輸入成績後顯示型上總成績及平均成績。



請輸入第1位學生的成績:89
請輸入第2位學生的成績:89
請輸入第3位學生的成績:89
請輸入第4位學生的成績:89
請輸入第5位學生的成績:89

全班總成績為: ***分，平均為89分
```

## 巢狀迴圈
	//============================================================================
	// Name        : forNest1.cpp
	//利用2層迴圈列印「井」字，將其排列成直角三角形

	#include <iostream>
	using namespace std;

	int main() {
		for(int i=1; i<=5; i++){
			cout<< "外部第" << i << "次迴圈";
			for(int j=1; j<=i; j++){
				cout << "#";
			}
			cout << "\n";
		}
		return 0;
	}

### 
	//============================================================================
	// Name        : forNest2.cpp
	//利用2層迴圈列印九九乘法表

	#include <iostream>
	using namespace std;

	int main() {
		for(int i=1; i<=9; i++){
			for(int j=1; j<=9; j++){
				cout << i << "*" << j << "=" << i*j << "\t";
			}
			cout << "\n";
		}
		return 0;
	}

## 不固定次數的迴圈
```
while(條件判斷)
{
程式敘述;
........
}
```

```
while迴圈要特別注意，必須設定條件判斷的中止條件，以便可以停止迴圈的執行，否則會入無窮迴圈的窘境
//無限迴圈
int n=1, sum;
while(n<10){
	sum += n;
}
```

	//============================================================================
	// Name        : while2.cpp
	//小明想要存錢買一輛機車,機車每輛30000元，他將每月存的錢輸入，當存款足夠買機車時，就顯示提示訊告知。

	#include <iostream>
	using namespace std;

	int main() {
		int deposit=0, num=0, inputNum;
		while(deposit < 30000){
			num++;
			cout << "請輸入第" << num << "個月份的存款:";
			cin >> inputNum;
			deposit += inputNum;
		}
		cout << "恭喜!已經存夠了，存了" << num << "個月的總存款為:" << deposit << "元。";
		return 0;
	}


```
while迴圈取代for迴圈
for(int i=0; i<=5; i++)
{
	cout << "這是第" << i << "次迴圈";
}

//使用while迴圈達到相同結果
int i=1;
while(i<=5){
	cout << "這是第" << i << "次迴圈";
}
```

```
*question while1_s.cpp
小美是一位教師，請你以while迴圈方式為小美設計一個輸入成績的程式，如果輸入負數表示成績輸入結束，在輸入成績結束後顯示班上總成績及平均成績。

顯示===============
請輸入第1位學生的成績:89
請輸入第2位學生的成績:78
請輸入第3位學生的成績:68
請輸入第4位學生的成績:89
全班總成績為:XXX分, 平均為XX.XX分
```


```
先執行再判斷
do
{
程式敘述;
.........
}while(條件判斷);
```
	//============================================================================
	// Name        : dowhile2.cpp
	//預設的密碼為5678，使用者若輸入的密碼錯誤，將不斷出現輸入密碼訊息，直到輸入的密碼正確才顯示正確訊息

	#include <iostream>
	using namespace std;

	int main() {
		string password;
		do{
			cout << "請輸入密碼:";
			cin >> password;
		}while(password != "5678");
		cout << "恭喜!你的密碼正確了!請進";
		return 0;
	}
```
*question while1_s.cpp
小美是一位教師，請你以do...while迴圈方式為小美設計一個輸入成績的程式，如果輸入負數表示成績輸入結束，在輸入成績結束後顯示班上總成績及平均成績。

顯示===============
請輸入第1位學生的成績:89
請輸入第2位學生的成績:78
請輸入第3位學生的成績:68
請輸入第4位學生的成績:89
全班總成績為:XXX分, 平均為XX.XX分
```

```
break可以跳出迴圈
```
	//============================================================================
	// Name        : guess.cpp
	//猜數字遊戲
	#include <iostream>

	#include <stdio.h>
	#include <stdlib.h>

	#include <time.h>
	using namespace std;

	int main() {
		int keyin, guess, count, min, max;
		count = 0;
		min =1;
		max = 99;
		srand(time(NULL));
		guess = rand() % 99 + 1;
		cout << "====== 猜數字遊戲==============:\n\n";
		do
		{
			cout << "猜數字範圍" << min << "~" << max << ":";
			cin >>  keyin;
			count++;
			if(keyin>=1 && keyin<100){
				if(keyin==guess){
					cout << "賓果!猜對了,答案是" << guess << endl;
					break;
				}else if(keyin>guess){
					max = keyin;
					cout << "再小一點!!";
				}else if (keyin<guess){
					min=keyin;
					cout << "再大一點!!";
				}
				cout << "您猜了" << count << "次\n\n";

			}else{
				cout << "請輸入提示範圍內的數字!\n";
			}
		}while(1);
		cout << "您總共猜了" << count << "次";
		return 0;
	}
