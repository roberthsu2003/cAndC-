# 資料型別和變數
## 運算式

```
運算子: +,-,*,/
運算元: 1+2的1和2
單元運算子:-24的-
二元運算子:1+2的+
三元運算子: true ? a : b
```
### 指定運算子
```
變數 = 值;
intA = 10;
```
### 算數運算子
算數運算子|意義|
-----|----|
+| 加 |
-| 減 |
*|乘|
/|除|
%|餘|
++|遞增|
--|遞減|



	//mathop.cpp
	//讓使用者輸入都是整數的被除數及除數，程式會顯示兩數相除的商及餘數。
	#include <iostream>
	using namespace std;

	int main() {
		int n=0,m=0;
		cout << "請輸入被除數(整數):";
		cin >> n;
		cout << "請輸入除數(整數,不可以為0):";
		cin >> m;

		cout << "商:" << n/m << "餘數:" << n%m << "\n";
		return 0;
	}

```
	//前置遞增
	int x = 1;
	int y = ++x;
	//x = x + 1;
	//y = x;
	cout << "x = " << x << " y = "  << y << endl;

	//後置遞增
	int m = 1;
	int n = m++;
	//n = m;
	//m = m + 1
	cout << "m = " << m << " n = "  << n << endl;
```
## 比較運算子
a| 運算子 | 意義 
-|---|--- 
a|== | 內容相等 
a|!= | 內容不相等 
a|> | 大於 
a|< | 小於 
a|>= | 大於等於 
a|<= | 小於等於 



## 邏輯運算子 

```
! not

&& and

|| or
```

## 複合指定運算子
 運算子 | 意義 
---|--- 
+= | 加等於 
-= | 減等於 
*= | 乘等於 
/= | 除等於 


	//讓使用者輸入一個任意數,程式會顯示此數的平方值及立方值
		float result, n;
		cout << "請輸入任意數:";
		cin >> n;
		result = n;
		result *= n;
		cout << "此數的平方為:" << result << endl;
		result *= n;
		cout << "此數的立方為:" << result << endl;


```
*question
complex_s
請以複合指定運算子設計程式,讓用者輸入三個任意數，程式會顯示3數相加的總和(float)


顯示:
請輸入第一個數:87.9
請輸入第二個數:45
請輸入等三個數:87.5
三個數的總和為:220.4
```

## sizeof型別運算子
```
int a = sizeof(char);   // a = 1
int b = sizeof(double); // b = 8
int c = sizeof(a)	// c = 4
int d = sizeof(a+b) //d=4
```

## 三元運算式
```
語法:
條件判斷 ? 程式碼1 : 程式碼2 ;
```

	//讓使用者輸入三個任意數，程式會顯示三數中的最大數
		float input1, input2, input3, max;
		cout << "請輸入第一個數:";
		cin >> input1;
		cout << "請輸入第二個數:";
		cin >> input2;
		max = input1 > input2 ? input1 : input2 ;
		cout << "請輸入第三個數:";
		cin >> input3;
		max = max > input3 ? max : input3;
		cout << "使用者輸入的值是:" << input1 << " " << input2 << " " << input3 << endl;
		cout << "最大值是:" << max ;

```
*question triop_s
讓使用者輸入國文成績,程式會顯示該成績是否及格. 

顯示:
請輸入國文成績:80
成績及格(成績不及格)
```

## 數學算式轉換電腦運算
