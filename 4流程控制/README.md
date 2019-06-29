# 流程控制
```
if(條件式){
  程式區塊
  ......
}
```

## 單向選擇(if...)

	// Name        : password.cpp
	//讓使用者輸入密碼,如果輸入的密碼正確(1234), 要顯示「密碼正確!歡迎光臨!」。如果不正確就不做任何事
	#include <iostream>
	using namespace std;

	int main() {
		string password;
		cout << "請輸入密碼:";
		cin >> password;

		if (password == "1234"){
			cout << "密碼正確!歡迎光臨!";
		}
		return 0;
	}
## 雙向選擇(if ... else)

	//讓使用者輸入密碼,如果輸入的密碼正確(1234)，會顯示「歡迎光臨」, 如果輸入的密碼錯誤，顯示密碼錯誤
			string password;
			cout << "請輸入密碼:";
			cin >> password;
			if(password == "1234"){
				cout << "歡迎光臨" << endl;
			}else{
				cout << "密碼錯誤" << endl;
			}

```
*question
成績及格判斷
請使用者輸入成績，若成績大於等於60分，則顯示及格，否則顯示不及格。

顯示:
請輸入成績:78
及格!(不及格!)
```

## 多向選擇(if ... else if..... else)
	//輸入顧客購買金額，若金額在100000元打8折，50000打85折，30000打9折，10000打95折
		int money;
		cout << "請輸入購買金額:";
		cin >> money;
		cout << "實付金額是:";
		if(money >= 100000){
			cout << money*0.8;
		}else if(money >= 50000){
			cout << money*0.85;
		}else if(money >= 30000){
			cout << money * 0.9;
		}else if(money >= 10000){
			cout << money * 0.95;
		}else{
			cout << money;
		}

```
*question grade_s
讓使用者輸入成績, 若成績在90分以上就顯示「優等」, 80-89分顯示「甲等」，70-79分顯示「乙等」，60-69分顯示「丙等」，60分以上顯示「丁等」。

顯示:
請輸入成績(0-100):89
甲等
```
## switch case:

	//讓使用者輸入加、減、乘、除運算子, 就會顯示運算結果
		char op;
		int first = 20, second = 4;
		cout << "first=20, second=4\n";
		cout << "請輸入要執行的運算(+-*/):";
		cin >> op;
		switch (op){
			case '+':
				cout << "first + second = " << first + second << "\n";
				break;
			case '-':
				cout << "first - second = " << first - second << "\n";
				break;
			case '*':
				cout << "first * second = " << first * second << "\n";
				break;
			case '/':
				cout << "first / second = " << first / second << "\n";
				break;
			default:
				break;
	
		}

```
*question season_s
讓使用者入	1-4的數字，由1到4分別顯示春天、夏天、秋天、冬天。

顯示:
請輸入現在是第幾季(1-4):1
現在是春天!
```	


```
下列為綜合所得稅試算
輸入使用者綜合所得淨額後，印出稅率，累進差額，還有今年應納稅額

級別	綜合所得淨額					稅額	      累進差額
1		0~540,000					5%		      0
2		540,001~1,200,000		   10%	      36,400
3		1,200,001~2,420,000	       20%        130,000
4		2,420,001~4,530,000	       30%	      365,000
5		4,530,001以上               40%	      805,000		


顯示========================
請輸入綜台所得淨額:1500000

綜合所得淨額: 1500000 元
稅       額: 20%
---------------------
稅       金: 300000 元
累進差額:1300000
----------------------
今年應納稅額: 170000 元			
```