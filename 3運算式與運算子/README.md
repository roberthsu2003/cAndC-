# 運算式和運算子
## 運算式

```
運算子: +,-,*,/
運算元: 1+2的1和2
單元運算子:-24的-
二元運算子:1+2的+
三元運算子: true ? a : b
```

### 指定運算子
```c++
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



```c++
//mathop.cpp
//讓使用者輸入被除數(整數)及除數(整數，不可以是零)，程式會顯示兩數相除的商及餘數。
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

```
*question plus_s.cpp 計算使用者輸入的2個任意數，程式會顯示2數相加的總和。

顯示=======
請輸入第一個數值:45.67
請輸入第二個數值:67.47
兩個數的和是xxx.xx

```
[解題](https://repl.it/@roberthsu2003/pluss)

```c++
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

```c++
#include <iostream>
#include <stdio.h>
using namespace std;

int main() {
	int x = 1;
	int y = ++x;
	printf("x=%d, y=%d\n",x,y);

	x = 1;
	y = x++;
	printf("x=%d, y=%d\n",x,y);
}
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

```c++
	int a = 1, b = 2;
	cout << "a==b" << (a==b);
```

## 邏輯運算子 
| ! | not |
|:--|:--|
| && | and |
| 2直線 | or |

## 複合指定運算子
 運算子 | 意義 
---|--- 
+= | 加等於 
-= | 減等於 
*= | 乘等於 
/= | 除等於
%= | 餘等於 

```c++
// Name        : complex.cpp

//請使用者輸入一個任意數，程式會顯示此數的平方值及立方值
#include <iostream>
using namespace std;

int main() {
	float num,result;
	cout << "請輸入任意數:";
	cin >> num;
	result = num;
	result *= num;
	cout << "此數的平方是:" << result << "\n";
	result *= num;
	cout << "此數的立方是:" << result << "\n";
	return 0;
}
```

```c++
*question
complex_s
請以(複合指定運算子)設計程式,讓用者輸入三個任意數，程式會顯示3數相加的總和(float)


顯示:
請輸入第一個數:87.9
請輸入第二個數:45
請輸入等三個數:87.5
三個數的總和為:220.4
```
[解題](https://repl.it/@roberthsu2003/complexs)
## sizeof型別運算子
```c++
int a = sizeof(char);   // a = 1
int b = sizeof(double); // b = 8
int c = sizeof(a)	// c = 4
int d = sizeof(a+b) //d=4
```

## 三元運算式
```c++
語法:
條件判斷 ? 程式碼1 : 程式碼2 ;

// Name        : triop.cpp
//讓使用者輸入三個任意數，程式會顯示三數中的最大數。
#include <iostream>
using namespace std;

int main() {
	float in1, in2, in3, max;
	cout << "請輸入第一個數:";
	cin >> in1;

	cout << "請輸入第二個數:";
	cin >> in2;

	max = in1 > in2 ? in1 : in2;

	cout << "請輸入第三個數:";

	cin >> in3;

	max = max > in3 ? max : in3;

	cout << "輸入三個數中最大的數為:" << max << "\n";
	return 0;
}

```

```c++
*question triop_s
讓使用者輸入國文成績,程式會顯示該成績是否及格(請使用3元運算式). 

顯示:
請輸入國文成績:80
成績及格(成績不及格)
```
[解題](https://repl.it/@roberthsu2003/triops)
### 數學算式轉換電腦運算

```c++
// Name        : ladder.cpp
//讓使用者輸入梯形的上底、下底及高，程式會計算梯形的面積(上底加下底乘以高除以2)

#include <iostream>
using namespace std;

int main() {
	float top, bottom, height, area;
	cout << "請輸入梯形的上底(公分):";
	cin >> top;

	cout << "請輸入梯形的下底(公分):";
	cin >> bottom;

	cout << "請輸入梯形的高(公分):";
	cin >> height;

	area = (top + bottom) * height /2;
	cout << "梯形的面積:" << area << "平方公分\n";
	return 0;
}
```

```c++
*question circle_s.cpp
讓使用者輸入圓柱體的半徑及高，程式會計算圓柱體的體積(圓柱體體積的公式為「圓週率乘以半徑平方再乘以高)。

顯示========
請輸入圓柱體的半徑(公分):10
請輸入圓柱體的高(公分):5
圓柱體的體積:xxxx立方公分
```
[解題](https://repl.it/@roberthsu2003/circles)
