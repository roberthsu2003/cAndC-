# 運算式和運算子

## 目錄
- 運算式
  - 指定運算子
  - 算數運算子
- 運算子優先順序
  - 優先順序表（由高到低）
  - 優先順序範例
  - 重要提醒
- 比較運算子
- 邏輯運算子 
- 複合指定運算子
- sizeof型別運算子
- 三元運算式
  - 數學算式轉換電腦運算

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

## 運算子優先順序

在C++中，運算子有不同的優先順序，當一個運算式包含多個運算子時，會按照優先順序來決定運算的順序。

### 優先順序表（由高到低）
| 優先順序 | 運算子 | 說明 | 結合性 |
|---------|--------|------|--------|
| 1 | `()` | 括號 | 左到右 |
| 2 | `++` `--` | 前置遞增/遞減 | 右到左 |
| 3 | `++` `--` | 後置遞增/遞減 | 左到右 |
| 4 | `*` `/` `%` | 乘法、除法、餘數 | 左到右 |
| 5 | `+` `-` | 加法、減法 | 左到右 |
| 6 | `<` `<=` `>` `>=` | 關係運算子 | 左到右 |
| 7 | `==` `!=` | 等於、不等於 | 左到右 |
| 8 | `&&` | 邏輯AND | 左到右 |
| 9 | `||` | 邏輯OR | 左到右 |
| 10 | `?:` | 三元運算子 | 右到左 |
| 11 | `=` `+=` `-=` `*=` `/=` `%=` | 指定運算子 | 右到左 |

### 優先順序範例

```c++
#include <iostream>
using namespace std;

int main() {
    // 範例1: 算數運算子優先順序
    int result1 = 2 + 3 * 4;  // 先算 3*4=12，再算 2+12=14
    cout << "2 + 3 * 4 = " << result1 << endl;  // 輸出: 14
    
    int result2 = (2 + 3) * 4;  // 括號優先，先算 2+3=5，再算 5*4=20
    cout << "(2 + 3) * 4 = " << result2 << endl;  // 輸出: 20
    
    // 範例2: 混合運算子
    int a = 10, b = 5, c = 2;
    int result3 = a + b * c - 4;  // 先算 b*c=10，再算 a+10-4=16
    cout << "10 + 5 * 2 - 4 = " << result3 << endl;  // 輸出: 16
    
    // 範例3: 比較和邏輯運算子
    bool result4 = a > b && b > c;  // 先算比較，再算邏輯AND
    cout << "10 > 5 && 5 > 2 = " << result4 << endl;  // 輸出: 1 (true)
    
    // 範例4: 遞增運算子和算數運算子
    int x = 5;
    int result5 = ++x * 2;  // 先執行++x (x變成6)，再算 6*2=12
    cout << "++x * 2 = " << result5 << ", x = " << x << endl;  // 輸出: 12, 6
    
    int y = 5;
    int result6 = y++ * 2;  // 先算 y*2=10，再執行y++ (y變成6)
    cout << "y++ * 2 = " << result6 << ", y = " << y << endl;  // 輸出: 10, 6
    
    return 0;
}
```

### 重要提醒
- 當不確定優先順序時，建議使用括號 `()` 來明確指定運算順序
- 括號具有最高優先順序，可以改變預設的運算順序
- 相同優先順序的運算子會根據結合性來決定運算順序

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

**[解題]**

```
/*
*question plus_s.cpp 計算使用者輸入的2個任意數，程式會顯示2數相加的總和。

顯示=======
請輸入第一個數值:45.67
請輸入第二個數值:67.47
兩個數的和是xxx.xx

*/


#include <iostream>
using namespace std;
int main() {
  float n = 0, m = 0;
  cout << "請輸入第一個數值:";
  cin >> n;
  cout << "請輸入第二個數值:";
  cin >> m;
  cout << "兩個數的和是" << n + m;
}
```
---



```c++
//遞增
#include <iostream>
using namespace std;
int main() {
	int n = 0;
	++n;
	cout << "n=" << n << endl;

	int i = 0;
	cout << "i=" << i++ << endl;
	cout << "i=" << i << endl;


	int j = 0;
	cout << "j=" << ++j << endl;
	cout << "j=" << j << endl;
}
```

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
#include <iostream>
using namespace std;

int main() {
	//比較運算子
	int a = 2, b = 2;
	cout << "a==b " << (a==b) << endl;

	//
	cout << "not 運算子:" << !false  << endl;

	int x = 10, y = 10, z = 20;
	cout << "x=10同時y=10嗎?===>" << (x==10 && y==10) << endl;
	cout << "x=10同時z=10嗎?===>" << (x==10 && z==10) << endl;

	cout << "x=10或者y=10嗎?====>" << (x==10 || y==10) << endl;
	cout << "x=10或者z=10嗎?====>" << (x==10 || z==10) << endl;
}
```

## 邏輯運算子 
| ! | not |
|:--|:--|
| && | and |
| \|\| | or |

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

**[解題]**

```
//請以(複合指定運算子)設計程式,讓用者輸入三個任意數，程式會顯示3數相加的總和(float)
#include <iostream>
using namespace std;

int main() {
  float num, result=0;
  cout << "請輸入第一個數:";
  cin >> num;
  result += num;
  cout << "請輸入第二個數:";
  cin >> num;
  result += num;
  cout << "請輸入等三個數:";
  cin >> num;
  result += num;
  cout << "三個數的總和為:" << result;

}
```

---
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

**[解題]**

```
/*
*question triop_s
讓使用者輸入國文成績,程式會顯示該成績是否及格(請使用3元運算式). 
*/


#include <iostream>
using namespace std;

int main() {
  int chinese;
  string result;
  cout << "請輸入國文成績:";
  cin >> chinese;
  result = chinese >= 60 ? "成績及格" : "成績不及格";
  cout << result;
}
```
---

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

**[解題]**

```
/*
讓使用者輸入圓柱體的半徑及高，程式會計算圓柱體的體積(圓柱體體積的公式為「圓週率乘以半徑平方再乘以高)。

顯示========
請輸入圓柱體的半徑(公分):10
請輸入圓柱體的高(公分):5
圓柱體的體積:xxxx立方公分

*/


#include <iostream>
using namespace std;

int main() {
    float radius;
    float height;
    const float PI = 3.14159;
    cout << "請輸入圓柱體的半徑(公分):";
    cin >> radius;
    cout << "請輸入圓柱體的高(公分):";
    cin >> height;
    float area = radius * radius * PI * height;
    cout << "圓柱體的體積:" << area << "立方公分";
}
```

---

```
#include <iostream>
#include <math.h>
#define PI 3.1415926
using namespace std;

int main() {
  int opposite_side, hypotenuse;
  double radian, degree;
  cout << "請輸入對邊:";
  cin >> opposite_side;
  cout << "請輸入斜邊:";
  cin >> hypotenuse;
  radian = asin(opposite_side / (double)hypotenuse);
  degree = radian * 180 / PI;

  cout << "對邊是:" << opposite_side << endl;
  cout << "斜邊是:" << hypotenuse << endl;
  cout << "弧度是:" << radian << endl;
  cout << "直角三角形的角度是:" << degree << endl;
}
```
