# 流程控制
```
c++的流程控制的指令分為2部份
1判斷(if else,switch case)
2迴圈(for,while,do..while)
```
```
if(條件式){
  程式區塊
  ......
}
```

## 單向選擇(if...)

```c++
// Name        : password.cpp
//學生符合加分條件就加5%分,如果超過300分,就以300為主。
#include <iostream>
using namespace std;

int main() {
	int scores;	
	bool add;
	cout << "請輸入學生的分數:";
	cin >> scores;
	cout << "學生符合加分條件嗎? yes請輸入1,no請輸入0:";
	cin >> add;
	if (add) {
		scores *= 1.05;
		if (scores > 300){
			scores = 300;
		}
	}

	cout << "學生分數是:" << scores << endl;
}
```

## 雙向選擇(if ... else)

```c++
if (條件式){
    程式區塊一
}else{
    程式區塊二
}

//========================================================

請輸入密碼:5678
密碼錯誤,請重新輸入

//========================================================



// Name        : password2.cpp
//讓使用者輸入密碼,如果輸入的密碼正確(1234), 要顯示「密碼正確!歡迎光臨!」。如果不正確就顯示密碼錯誤訊息
#include <iostream>
using namespace std;

int main() {
	string pass;
	cout << "請輸入密碼:";
	cin >> pass;
	if (pass == "1234"){
		cout << "歡迎光臨!\n";
	}else{
		cout << "密碼錯誤!\n";
		cout << "請重新輸入!\n";
	}
	return 0;
}
```


```c++
*question score.cpp
成績及格判斷
請使用者輸入成績，若成績大於等於60分，則顯示及格，否則顯示不及格。

顯示:
請輸入成績:78
及格!(不及格!)
```
[解題](https://repl.it/@roberthsu2003/score)

```c++
*question
試用if-else敘述，選寫一個判斷輸入的數字為奇數或偶數的程式

顯示=============
請輸入數字:15
您輸入的15是奇數
```
[解題](https://repl.it/@roberthsu2003/oddEven)

```c++
*question oddEven1.cpp
請使用三元運算子? : 製作一個判斷奇偶數的程式，程式的執行結果。


顯示========
請輸入任意整數:50
您這個數是:偶數
```
[解題](https://repl.it/@roberthsu2003/oddEven1)


## 多向選擇(if ... else if..... else)
```c++

if (條件式一){
    程式區塊一
}else if(條件式二){
    程式區塊二
}else if(條件式三){
     程式區塊三
}else{
    程式區塊else
}


//========================================================

請輸入購買金額:130000
實付金額是:104000元

//========================================================



// Name        : discount.cpp
//輸入顧客購買金額，若金額在100000元打8折，50000打85折，30000打9折，10000打95折

#include <iostream>
using namespace std;

int main() {
	int money;
	int payMoney;
	cout << "請輸入購買金額:";
	cin >> money;
	if(money >= 100000){
		payMoney = money * 0.8;
	}else if(money >= 50000){
		payMoney = money * 0.85;
	}else if(money >= 30000){
		payMoney = money * 0.9;
	}else if (money >= 10000){
		payMoney = money * 0.95;
	}else{
		payMoney = money;
	}

	cout << "實付金額是:" << payMoney << "元\n";

}

```

```c++
*question grade_s.cpp
讓使用者輸入成績, 若成績在90分以上就顯示「優等」, 80-89分顯示「甲等」，70-79分顯示「乙等」，60-69分顯示「丙等」，60分以下顯示「丁等」。

顯示:
請輸入成績(0-100):89
甲等
```
[解題](https://repl.it/@roberthsu2003/grades)

```c++
*question  employee.cpp
某公司要將員工依年齡分配職務, 22至30歲者擔任外勤業務員，31歲至45歲者控任內勤文書，46至55歲者控任倉庫管理員，56以上強迫退休。請以if...eles if..選擇敘述撰寫此程式。

顯示==============
請輸入您的年齡:40
您的職務是: 外勤業務員
```
[解題](https://repl.it/@roberthsu2003/employee)

### 巢狀的if-else敘述 


```c++
///國文100同時數學100,獎金1000
//國文100或者數學100,獎金500
//巢狀判斷

#include <iostream>

int main() {
	int chinese;
	int math;
	int bonus = 0;
	printf("請輸入國文成績和數學成績(國文,數學):");
	scanf("%i,%i",&chinese,&math);
	if(chinese == 100){
		if(math == 100){
			bonus = 1000;
		}else{
			bonus = 500;
		}
	}else{
		if(math == 100){
			bonus = 500;
		}else{
			bonus = 0;
		}
	}

	printf("獎金是:%i\n", bonus);
}

```

### 使用邏輯運算子

```c++
//國文100同時數學100,獎金1000
//國文100或者數學100,獎金500

#include <iostream>

int main() {
	int chinese;
	int math;
	int bonus = 0;
	printf("請輸入國文成績和數學成績(國文,英文):");
	scanf("%i,%i",&chinese,&math);
	if(math==100 && chinese==100){
		bonus = 1000;
	}else if(math == 100 || chinese == 100){
		bonus = 500;
	}else{
		bonus = 0;
	}

	printf("獎金是:%i\n", bonus);
}
```



```c++
試用巢狀的if-else敘述，撰寫一個可以判斷輸入數字為正負數以及奇偶數的的程式

顯示=================
請輸入數字:-56
您輸入的-34是負偶數


提示================
if...
    if...  
    else...
else...
    if...
    else...
================================

#include <iostream>
using namespace std;

int main() {
	int inputNumber;
	cout << "請輸入數字:";
	string message;
	cin >> inputNumber;
	if(inputNumber < 0){
		if (inputNumber % 2 == 0)
			message = "負偶數";
		else
			message = "負奇數";
	}else{
		if (inputNumber % 2 == 0)
			message = "正偶數";
		else
			message = "正奇數";
	}

	cout << "您輸入的" << inputNumber << "是" + message << endl;


}
```


```c++  triangle.cpp
輸入三角形2邊，再輸入斜邊，然後判斷三角形的種類
1.若任意兩邊之和小於斜邊，則不是三角形。
2.2邊平方相加等於斜邊平方，則為直角三角形。
3.2邊平方相加大於斜邊平方，則為鈍角三角形。
4.其它情形，即為銳角三角形。


顯示====================
1.請輸入1邊的邊長:6
2.請輸入另1邊的邊長:7
3.請輸入斜邊的邊長:12

此三角形為一個鈍角三角形
```
[解題](https://repl.it/@roberthsu2003/triangle)

## switch case:

```c++
switch(表示式){
    case value1:
        程式區塊1
		break;
    case value2:
        程式區塊2
		break;
    case valueN:
        程式區塊n
		break;
    default:
        程式區塊
	
}


//========================================================

num1=20,num2=4
請輸入要執行的運算(+ - * /):+
num1+num2=24

//========================================================


// Name        : calculate.cpp
//讓使用者輸入加、減、乘、除運算子, 就會顯示運算結果

#include <iostream>
using namespace std;

int main() {
	char op;
	int num1 = 20, num2 = 4;
	cout << "num1=20,num2=4\n";
	cout << "請輸入要執行的運算(+-*/):";
	cin >> op;
	switch(op){
	case '+':
		cout << "num1+num2=" << num1+num2 << "\n";
		break;
	case '-':
		cout << "num1-num2=" << num1-num2 << "\n";
		break;
	case '*':
		cout << "num1*num2=" << num1*num2 << "\n";
		break;
	case '/':
		cout << "num1/num2=" << num1/num2 << "\n";
		break;
	default:
		cout << "無法執行運算!\n";
		break;
	}
	return 0;
}


```

```
*question season_s.cpp
讓使用者入1-4的數字，由1到4分別顯示春天、夏天、秋天、冬天。

顯示:
請輸入現在是第幾季(1-4):1
現在是春天!
```
[解題](https://repl.it/@roberthsu2003/seasons)

```c++ 
*question robot.cpp
製作如下圖範例，點選中文的選項之後，會顯示對應的英文

顯示===============
1.您好嗎?
2.晚安
3.早安
請選擇中文的選項<1-3>:2
英文是:good evening
```
[解題](https://repl.it/@roberthsu2003/robot)

```c++
*question

下列為綜合所得稅試算
輸入使用者綜合所得淨額後，印出稅率，累進差額，還有今年應納稅額


顯示========================
請輸入綜合所得淨額:1500000

綜合所得淨額: 1500000 元
稅額: 20%
---------------------
稅金: 300000 元
累進差額:1300000
----------------------
今年應納稅額: 170000 元			
```

級別	| 綜合所得淨額			|		   稅額	  |    累進差額
----|---------------|-------------|-----------
1	|	0 ~ 540,000			        | 5%		  |    0
2	| 540,001 ~ 1,200,000		  | 10%	    | 36,400
3	|	1,200,001 ~ 2,420,000	  | 20%     |  130,000
4	|	2,420,001 ~ 4,530,000	  | 30%	    |  365,000
5	|	4,530,001以上          | 40%	    |  805,000		

[解題](https://repl.it/@roberthsu2003/IncomeTax)

```c++
*question member.cpp
輸入您的存款金額並給予適當的利率及會員等級.
1存款大於等於1000000利率4%,否則利率2%
2存款大於等於1000000為A級會員，存款500000-999999為B級會員，其他為C級會員

顯示================================
請輸入您的存款:750000

您的利率是2%
會員等級是B級
```
[解題](https://repl.it/@roberthsu2003/member)



```c++

//parkingFee

//假設某個停車場的費率是停車2小時以內，每半小時30元，超過2小時，但未滿4小時的部份，每半小時40元，超過4小時以上的部份，每半小時60元，未滿半小時部分不計費。
//如果您從早上10點23分停到下午3點20分，請撰寫程式計算共需繳交的停車費
//輸入說明:(24小時制)

顯示:
請輸入進場時間:9 15
請輸入出場時間:13 56
進場時間是9-15
出場時間是13-56
停車的總分數281
停車的總費用是340
```
[解題](https://repl.it/@roberthsu2003/parkingFee)

